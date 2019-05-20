﻿#ifndef SQ_H
#define SQ_H

#define SQSHARED_EXPORT __declspec(dllexport)
#ifdef SQSHARED_EXPORT
#else
#define SQSHARED_EXPORT __declspec(dllimport)
#endif
#include<QJsonObject>
#include "ControlUI.h"
#define HEADER "BG"
#define TAIL "ED"
#define SQ "23"

QString Convert2Time(QString strTime);
//数据解析
EXTERN_C SQSHARED_EXPORT LRESULT Char2Json(QString &buff, QJsonObject &json);
//获取业务号
EXTERN_C SQSHARED_EXPORT int GetServiceTypeID();
//获取业务名称
EXTERN_C SQSHARED_EXPORT QString GetServiceTypeName();
//获取版本号
EXTERN_C SQSHARED_EXPORT QString GetVersionNo();
//获取端口号
EXTERN_C SQSHARED_EXPORT int GetPort();
//关闭窗体
EXTERN_C SQSHARED_EXPORT void CloseControlWindow();
//调试窗体
EXTERN_C SQSHARED_EXPORT void GetControlWidget(QString StationID, uint Socket, QWidget *parent);
//矫正时钟
EXTERN_C SQSHARED_EXPORT void SetTime(QString StationID, uint Socket);
//显示返回值
EXTERN_C SQSHARED_EXPORT void  SetValueToControlWidget(QStringList list);
//发送命令
EXTERN_C SQSHARED_EXPORT void SetCommand(uint Socket, int CommandType, QString Params1, QString Params2, QString StationID);
//获取设备信息
EXTERN_C SQSHARED_EXPORT void GetFacilityInfo(uint Socket);
ControlUI *control_ui;//终端窗体
bool isActive=false;//判断终端窗体是否开启
#endif // 


