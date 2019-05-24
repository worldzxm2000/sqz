#include "SQZ.h"
#include"Dictionary.h"
#include"qdatetime.h"
#include"qfile.h"
#include"qtextstream.h"
#include"qjsondocument.h"
#include "qdebug.h"
#include "qcoreapplication.h"
#include"qdir.h"

//获取业务号
int GetServiceTypeID()
{
	return 23;
}
//获取业务名称
QString GetServiceTypeName()
{
	QString name = QString::fromLocal8Bit("墒情自动监测业务");
	return name;
}
//获取端口号
int GetPort()
{
	return 27025;
}

//获取版本号
QString GetVersionNo()
{
	return "1.0";
}

//获取设备信息
void GetFacilityInfo(uint Socket)
{
	QString Comm = "ID\r\n";
	QByteArray ba = Comm.toLatin1();
	LPCSTR ch = ba.data();
	int len = Comm.length();
	::send(Socket, ch, len, 0);
}

//解析数据
LRESULT Char2Json(QString &buff, QJsonObject &json)
{
	int Count = 0;//数据个数
	int Current_P = 0;//当前数据指

	//遍历查找数据
	for (int i = 0; i < buff.length() - 1; i++)
	{
		if (buff.at(i) == '\r' && buff.at(i + 1) == '\n')
		{
			QString strBuff = buff.mid(Current_P, i - Current_P);
			if (strBuff.count()< 3)
			{
				i++;
				continue;
			}
			
			//005协议数据
			if (strBuff.at(0)=='0'&&strBuff.at(1)=='0'&&strBuff.at(2)=='5')
			{
				//根据“，”将字符串拆分成各个要素
				QStringList strlist = strBuff.split(",");
				//
				QJsonObject SubJson;
				SubJson.insert("DataType", 1);//数据类型 观测数据
											   //005协议
				if (strlist.at(0).toInt() != 5 || !(strlist.count() == 32 || strlist.count() == 28))
				{
					i++;
					continue;
				}
				Count++;
				if (strlist.count() == 32)
				{
					//区站号
					SubJson.insert("StationID", strlist.at(1));
					//宁夏墒情
					SubJson.insert("ServiceTypeID", SQ);
					//设备号
					SubJson.insert("DeviceID", "NULL");
					//时间
					QString time = Convert2Time(strlist.at(2));
					SubJson.insert("ObserveTime", time);
					//土壤湿度10CM
					SubJson.insert("SoilVolume10", strlist.at(3).toFloat());
					//土壤湿度20CM
					SubJson.insert("SoilVolume20", strlist.at(4).toFloat());
					//土壤湿度30CM
					SubJson.insert("SoilVolume30", strlist.at(5).toFloat());
					//土壤湿度40CM
					SubJson.insert("SoilVolume40", strlist.at(6).toFloat());
					//土壤温度10CM
					SubJson.insert("ABA1", strlist.at(7).toFloat());
					//土壤温度20CM
					SubJson.insert("ABA2", strlist.at(8).toFloat());
					//土壤温度30CM
					SubJson.insert("ABA3", strlist.at(9).toFloat());
					//土壤温度40CM
					SubJson.insert("ABA4", strlist.at(10).toFloat());
					//空气温度
					SubJson.insert("AAA", strlist.at(11).toFloat());
					//空气湿度
					SubJson.insert("ADA", strlist.at(12).toFloat());
					//日降雨量
					SubJson.insert("AHB", strlist.at(13).toFloat());
					//最大风速
					SubJson.insert("AFA", strlist.at(14).toFloat());
					//最小风速
					SubJson.insert("AFB", strlist.at(15).toFloat());
					//平均风速
					SubJson.insert("AFC", strlist.at(16).toFloat());
					//风向
					SubJson.insert("AEA", strlist.at(17).toFloat());
					//辐射
					SubJson.insert("AJA", strlist.at(18).toFloat());
					//气压
					SubJson.insert("AGA", strlist.at(19).toFloat());
					//小时ET
					SubJson.insert("ETH", strlist.at(20).toFloat());
					//日累计ET
					SubJson.insert("ETD", strlist.at(21).toFloat());
					//有效降雨
					SubJson.insert("AHC", strlist.at(22).toFloat());
					//累计有效降雨
					SubJson.insert("AHD", strlist.at(23).toFloat());
					//电池电压
					SubJson.insert("AJX", strlist.at(24).toFloat());
					//NC
					//json.insert("", strlist.at(25).toFloat());
					//地址信息1
					//json.insert("", strlist.at(26).toFloat());
					//地址信息2
					//json.insert("", strlist.at(27).toFloat());
					//土壤湿度5
					SubJson.insert("SoilVolume50", strlist.at(28).toFloat());
					//土壤湿度6
					SubJson.insert("SoilVolume60", strlist.at(29).toFloat());
					//土壤温度5
					SubJson.insert("ABA5", strlist.at(30).toFloat());
					//土壤温度6
					SubJson.insert("ABA6", strlist.at(31).toFloat());
				}
				else if (strlist.count()==28)
				{
					//区站号
					SubJson.insert("StationID", strlist.at(1));
					//宁夏墒情
					SubJson.insert("ServiceTypeID", SQ);
					//设备号
					SubJson.insert("DeviceID", "NULL");
					//时间
					QString time = Convert2Time(strlist.at(2));
					SubJson.insert("ObserveTime", time);
					//土壤湿度10CM
					SubJson.insert("SoilVolume10", strlist.at(3).toFloat());
					//土壤湿度20CM
					SubJson.insert("SoilVolume20", strlist.at(4).toFloat());
					//土壤湿度30CM
					SubJson.insert("SoilVolume30", strlist.at(5).toFloat());
					//土壤湿度40CM
					SubJson.insert("SoilVolume40", strlist.at(6).toFloat());
					//土壤温度10CM
					SubJson.insert("ABA1", strlist.at(7).toFloat());
					//土壤温度20CM
					SubJson.insert("ABA2", strlist.at(8).toFloat());
					//土壤温度30CM
					SubJson.insert("ABA3", strlist.at(9).toFloat());
					//土壤温度40CM
					SubJson.insert("ABA4", strlist.at(10).toFloat());
					//空气温度
					SubJson.insert("AAA", strlist.at(11).toFloat());
					//空气湿度
					SubJson.insert("ADA", strlist.at(12).toFloat());
					//日降雨量
					SubJson.insert("AHB", strlist.at(13).toFloat());
					//最大风速
					SubJson.insert("AFA", strlist.at(14).toFloat());
					//最小风速
					SubJson.insert("AFB", strlist.at(15).toFloat());
					//平均风速
					SubJson.insert("AFC", strlist.at(16).toFloat());
					//风向
					SubJson.insert("AEA", strlist.at(17).toFloat());
					//辐射
					SubJson.insert("AJA", strlist.at(18).toFloat());
					//气压
					SubJson.insert("AGA", strlist.at(19).toFloat());
					//小时ET
					SubJson.insert("ETH", strlist.at(20).toFloat());
					//日累计ET
					SubJson.insert("ETD", strlist.at(21).toFloat());
					//有效降雨
					SubJson.insert("AHC", strlist.at(22).toFloat());
					//累计有效降雨
					SubJson.insert("AHD", strlist.at(23).toFloat());
					//电池电压
					SubJson.insert("AJX", strlist.at(24).toFloat());
					//NC
					//json.insert("", strlist.at(25).toFloat());
					//地址信息1
					//json.insert("", strlist.at(26).toFloat());
					//地址信息2
					//json.insert("", strlist.at(27).toFloat());
				}
				json.insert(QString::number(Count), SubJson);
				//写入备份文件
				QDateTime current_date_time = QDateTime::currentDateTime();
				QString current_date = current_date_time.toString("yyyy.MM.dd hh:mm:ss");
				QString current_day = current_date_time.toString("yyyy-MM-dd");
				QString fileName = QCoreApplication::applicationDirPath() + "\\" + QString::fromLocal8Bit("墒情自动监测业务") + "\\" + strlist.at(1) + "\\" + current_day;
				QDir dir(fileName);
				if (!dir.exists())
					dir.mkpath(fileName);//创建多级目录
				fileName += "\\data.txt";
				QFile file(fileName);
				QTextStream in(&file);
				file.open(QIODevice::ReadWrite | QIODevice::Append);
				in << current_date << "\r\n" << strBuff << "\r\n";
				file.close();
			}
			//终端返回
			else if(strBuff.at(0)=='<'&&strBuff.at(strBuff.count()-1)=='>')
			{
				Count += 1;//数据个数
				QStringList strlist = strBuff.split(",");
				QJsonObject SubJson;
				int count = strlist.count();
				switch (count)
				{
					//单个返回值
				case 1:
				{	
					SubJson.insert("DataType", 2);//数据类型 观测数据
					SubJson.insert("Command", -9999);
					QJsonObject subJson;
					subJson.insert("Count", 1);
					subJson.insert("Params1", strlist.at(0));
					SubJson.insert("Parameter", subJson);
					SubJson.insert("ValueCount", 1);
					break;
				}
				//双返回值
				case 2:
				{		
					SubJson.insert("DataType", 2);//数据类型 观测数据
					SubJson.insert("Command", -9999);
					QJsonObject subJson;
					subJson.insert("Count", 2);
					subJson.insert("Params1", strlist.at(0));
					subJson.insert("Params2", strlist.at(1));
					SubJson.insert("Parameter", subJson);
					SubJson.insert("ValueCount", 8);
					break;
				}
				//三个返回值，心跳<hb,nx,台站号简称>\r\n
				case 3:
				{
					SubJson.insert("DataType", 3);//数据类型 观测数据
					QString hb = strlist.at(0);
					if (hb.toLower().compare("hb")==0)
					{
						//台站号
						SubJson.insert("StationID",strlist.at(2) );
						//设备号
						SubJson.insert("DeviceID", "NULL");
					}
					break;
				}
				//无效数据
				default:
					break;
				}
				json.insert(QString::number(Count), SubJson);
			}
			//指针指向下个帧头
			Current_P = i + 2;
			i = Current_P-1;//当前循环
		}
	}
	json.insert("DataLength", Count);//JSON数据个数
	if (Current_P >= buff.length())//判断当前指针位置
	{
		buff.clear();
	}//清除内存
	else
	{
		buff.remove(0, Current_P);
	}//将剩余字节存入缓存
	return 1;
}

//字符串转成显示时间格式
QString Convert2Time(QString strTime)
{
	QString tmp;
	tmp = strTime + ":00";
	return tmp;
}

//调试窗体
void  GetControlWidget(QString StationID, uint Socket, QWidget* parent)
{
	if (isActive)
	{
		return;
	}
	control_ui = new ControlUI();
	isActive = true;
	control_ui->Socket = Socket;
	control_ui->isActive = &isActive;
	control_ui->show();
}
//关闭窗体
void CloseControlWindow()
{
	if (control_ui != NULL)
	{
	if (isActive)
	control_ui->close();
	}

}

//矫正时钟
void SetTime(QString StationID, uint Socket)
{
	QDateTime nowtime = QDateTime::currentDateTime();
	QString datetime = nowtime.toString("yyyy-MM-dd,hh:mm:ss");
	//设置时钟
	QString Comm = "DATETIME," + datetime + "\r\n";
	QByteArray ba = Comm.toLatin1();
	LPCSTR ch = ba.data();
	int len = Comm.length();
	::send(Socket, ch, len, 0);
}
//返回值反馈
void SetValueToControlWidget(QStringList list)
{
	if (control_ui == nullptr)
		return;
	if (isActive)
		control_ui->setValue(list);
}
//发送命令
void SetCommand(uint Socket, int CommandType, QString Params1, QString Params2, QString StationID)
{
	//设备终端命令
	QString Comm;
	switch (CommandType)
	{
	case 2301:
		//读取ID
		Comm = "ID\r\n";
		break;
	case 2302:
		//设置ID
		Comm = "ID " + Params1 + "\r\n";
		break;
	case 2303:
		//读取时钟
		Comm = "DATETIME\r\n";
		break;
	case 2304:
	{
		//设置时钟
		QDateTime nowtime = QDateTime::currentDateTime();
		QString datetime = nowtime.toString("yyyy-MM-dd,hh:mm:ss");
		Comm = "DATETIME," + datetime + "\r\n";
	}
	break;
	case 2305:
	{
		//历史数据下载
		Comm = "DOWN," + Params1 + "," + Params2;
		break;
	}
	case 2306:
		//初始化
		Comm = "INIT\r\n";
		break;
	case 2307:
		//重启采集器
		Comm = "RESET\r\n";
		break;
	case 2308:
		//读取PT
		Comm = "PT\r\n";
		break;
	case 2309:
		//设置PT
		Comm = "PT," + Params1 + "\r\n";
		break;
	default:
		break;
	}
	QByteArray ba = Comm.toLatin1();
	LPCSTR ch = ba.data();
	int len = Comm.length();
	::send(Socket, ch, len, 0);
}