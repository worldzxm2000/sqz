#include "dictionary.h"

Dictionary::Dictionary()
{
	//�۲�Ҫ��
	//����
	map.insert("aba", "AT_AT1");
	//�������ֵ
	map.insert("abamx", "AT_MaxAT1");
	//�������ֵ����ʱ��
	map.insert("abamxt", "AT_MaxAT1T");
	//������Сֵ
	map.insert("abamn", "AT_MinAT1");
	//������Сֵ����ʱ��
	map.insert("abamnt", "AT_MinAT1T");
	//���ʪ��
	map.insert("aca", "AH_RH1");
	//���ʪ����Сֵ
	map.insert("acamn", "AH_MinRH1");
	//���ʪ����Сֵ����ʱ��
	map.insert("acamnt", "AH_MinRH1T");
	//ˮ��ѹ
	map.insert("acc", "AH_WVP1");
	//¶���¶�
	map.insert("acb", "AH_DPT1");
	//��ǰʱ��˲ʱ����
	map.insert("ada", "WD_IWD");
	//2����ƽ������
	map.insert("adc", "WD_Avg2MWD");
	//10����ƽ������
	map.insert("add", "WD_Avg10MWD");
	//˲ʱ�����ٷ���
	map.insert("adamx", "WD_Max1MIWSD");
	//������ٷ���
	map.insert("adaex", "WD_EWSD");
	//���������˲ʱ���ٶ�Ӧ����
	map.insert("adbex", "WD_EXWSD");
	//��ǰʱ��˲ʱ����
	map.insert("aea", "WS_IWS1");
	//2����ƽ������
	map.insert("aec", "WS_Avg2MWS1");
	//10����ƽ������
	map.insert("aed", "WS_Avg10MWS1");
	//������
	map.insert("aeamx", "WS_MaxWS1");
	//�����ٳ���ʱ��
	map.insert("aeamxt", "WS_MaxWS1T");
	//�������
	map.insert("aeaex", "WS_EWS1");
	//������ٳ���ʱ��
	map.insert("aeaext", "WS_EWS1T");
	//���������˲ʱ����
	map.insert("aebex", "WS_Max1MWS1");
	//���ӽ�ˮ��
	map.insert("afa", "MntRnfl");
	//Сʱ��ˮ��
	map.insert("afb", "HrAccmltRnfl");
	//·���¶�
	map.insert("apa", "RS_RST");
	//���·���¶�
	map.insert("apamx","RS_MaxRST");
	//���·���¶�ʱ��
	map.insert("apamxt","RS_MaxRSTT");
	//���·���¶�
	map.insert("apamn","RS_MinRST");
	//���·���¶�ʱ��
	map.insert("apamnt", "RS_MinRSTT");
	//10cm·���¶�
	map.insert("apb","RS_CT10");
	//���10cm·���¶�
	map.insert("apbmx","RS_MaxCT10");
	//���10cm·���¶�ʱ��
	map.insert("apbmxt","RS_MaxCT10T");
	//���10cm·���¶�
	map.insert("apbmn","RS_MinCT10");
	//���10cm·���¶�ʱ��
	map.insert("apbmnt","RS_MinCT10T");
	//�����¶�
	map.insert("apc","OT_FPT");
	//��߱����¶�
	map.insert("apcmx","OT_MaxFPT");
	//��߱����¶ȳ���ʱ��
	map.insert("apcmxt","OT_MaxFPTT");
	//��ͱ����¶�
	map.insert("apcmn","OT_MinFPT");
	//��ͱ����¶ȳ���ʱ��
	map.insert("apcmnt","OT_MinFPTT");
	//ˮĤ���
	map.insert("apd","RW_WFT");
	//���ˮĤ���
	map.insert("apdmx","RW_MaxWFT");
	//���ˮĤ��ȳ���ʱ��
	map.insert("apdmxt","RW_MaxWFTT");
	//���ˮĤ���
	map.insert("apdmn","RW_MinWFT");
	//���ˮĤ��ȳ���ʱ��
	map.insert("apdmnt","RW_MinWFTT");
	//������
	map.insert("ape","RW_IFT");
	//��߱�����
	map.insert("apemx","RW_MaxIFT");
	//��߱����ȳ���ʱ��
	map.insert("apemxt","RW_MaxIFTT");
	//��ͱ�����
	map.insert("apemn","RW_MinIFT");
	//��ͱ����ȳ���ʱ��
	map.insert("apemnt","RW_MinIFTT");
	//ѩ����
	map.insert("apf","RW_SFT");
	//���ѩ����
	map.insert("apfmx", "RW_MaxSFT");
	//���ѩ���ȳ���ʱ��
	map.insert("apfmxt","RW_MaxSFTT");
	//���ѩ����
	map.insert("apfmn","RW_MinSFT");
	//���ѩ���ȳ���ʱ��
	map.insert("apfmnt","RW_MinSFTT");
	//��ѩ��Ũ��
	map.insert("apg","RW_SNFT");
	//�����ѩ��Ũ��
	map.insert("apgmx","RW_MaxSNFT");
	//�����ѩ��Ũ�ȳ���ʱ��
	map.insert("apgmxt","RW_MaxSNFTT");
	//�����ѩ��Ũ��
	map.insert("apgmn","RW_MinSNFT");
	//�����ѩ��Ũ�ȳ���ʱ��
	map.insert("apgmnt","RW_MinSNFTT");
	//·��״��
	map.insert("aph","RW_BRS");
	//1����ƽ��ˮƽ�ܼ���
	map.insert("ama","AV_Avg1MHV");
	//��С10����ƽ��ˮƽ�ܼ���
	map.insert("ambmn","AV_MinAvg10MHV");
	//��С10����ƽ��ˮƽ�ܼ���ʱ��
	map.insert("ambmnt","AV_MinAvg10MHVT");
	//��������
	//map.insert("NNN", "WeatherID");


	//�豸Ҫ��
	//��ӵ�Դ
	map.insert("zaa", "ExtPwrSts1");
	//���ص�ѹ
	map.insert("zab", "BtryVltgSts1");
	//AC-DC��ѹ״̬
	map.insert("zac", "ADDCVltgSts1");
	//���������ѹ״̬
	map.insert("zad", "MainClctrVltgSts");
	//���������ѹֵ
	map.insert("zae", "MainClctrVltgVal");
	//��������״̬
	map.insert("zaf", "MainClctrRunSts");
	//����AD״̬
	map.insert("zag", "MainClctrADSts");
	//���ɼ�����״̬
	map.insert("zah", "MainClctrCntSts");
	//̫���ܵ�ذ�״̬
	map.insert("zai", "SolarPanelSts");
	//���������¶�
	map.insert("zba", "MotherTemp");
	//���������¶�ֵ
	map.insert("zbb", "MotherTempValue");
	//���´�����״̬
	map.insert("zcb", "AirTmprtSensorSts1");
	//ʪ�����ݴ�����״̬
	map.insert("zcd", "AirHmdSensorSts1");
	//¶����״̬
	map.insert("zce", "DewPntTmprtSts");
	//���򴫸���״̬
	map.insert("zcf", "WndDrctSensorSts");
	//���ٴ�����״̬
	map.insert("zcg", "WndSpdSensorSts1");
	//����������״̬
	map.insert("zch", "RnflSensorSts");
	//·���¶ȴ�����״̬
	map.insert("zcq", "RdTmprtSensorSts");
	//·���¶ȴ�����״̬
	map.insert("zcr", "CntmtSensorSts");
	//·��״��������״̬
	map.insert("zgf","RoadOperSts");
	//·��״̬������Ⱦ
	map.insert("zgb","WPStatus3");
	//CPUӲ��
	map.insert("zgc","CPUSts");
	//·��״�� ̽����Ӳ��
	map.insert("zge","DetectorSts");
	//�ܼ�����
	//��ӵ�Դ
	map.insert("zea", "ExtPwrSts2");
	//���ص�ѹ
	map.insert("ze1a", "BtryVltgSts2");
	//AC-DC��ѹ״̬
	map.insert("ze2a", "ADDCVltgSts2");
	//�ֲ������ѹ
	map.insert("ze3a", "MainClctrVltgSts1");
	//����������
	map.insert("ze4a", "RecvHeat1");
	//������ͨ��
	map.insert("ze5a", "RecvVent1");
	//����������
	map.insert("ze6a","SendHeat1");
	//������ͨ��
	map.insert("ze7a","SendVent1");
	//�Լ��״̬
	map.insert("zeb","AutoCheckSts1");
	//������
	map.insert("zec","RecevierSts1");
	//������
	map.insert("zed","SenderSts1");
	//������Ⱦ
	map.insert("zee","WPStatus1");
	//��������
	//��ӵ�Դ
	map.insert("zfa", "ExtPwrSts3");
	//���ص�ѹ
	map.insert("zf1a", "BtryVltgSts3");
	//AC-DC��ѹ״̬
	map.insert("zf2a", "ADDCVltgSts3");
	//�ֲ������ѹ
	map.insert("zf3a", "MainClctrVltgSts2");
	//����������
	map.insert("zf4a", "RecvHeat2");
	//������ͨ��
	map.insert("zf5a", "RecvVent2");
	//����������
	map.insert("zf6a", "SendHeat2");
	//������ͨ��
	map.insert("zf7a", "SendVent2");
	//�Լ��״̬
	map.insert("zfb", "AutoCheckSts2");
	//������
	map.insert("zfc", "RecevierSts2");
	//������
	map.insert("zfd", "SenderSts2");
	//������Ⱦ
	map.insert("zfe", "WPStatus2");
	//��Ӵ洢������״̬
	map.insert("zha","ExCardSts");
	//ʣ��ռ�
	map.insert("zhb","CFSpaceSts");
	//GPS����״̬
	map.insert("zia","GPSSts");
	//�ſ���״̬
	map.insert("zib","DoorSts");
	//���˿���
	map.insert("zic","SomeoneNearSts");
}

QString Dictionary::Find(QString key)
{
	QMap<QString, QString>::const_iterator mi = map.find(key);
	if (mi != map.end())
		return map[key];
	return NULL;
}
