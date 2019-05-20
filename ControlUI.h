#pragma once
#include<windows.h>
#include <QWidget>
#include "ui_ControlUI.h"
#include<QMouseEvent>
#include <QMessageBox>
class ControlUI : public QWidget
{
	Q_OBJECT

public:
	ControlUI(QWidget *parent = Q_NULLPTR);
	~ControlUI();
	uint Socket;//Socket号
	void setValue(QStringList list);//返回值
	bool *isActive;//判断窗体是否开启
private:
	Ui::ControlUI ui;
	int cmmIndex;//记录当前操作类型
				 //窗体移动
	virtual void mousePressEvent(QMouseEvent *event);
	virtual void mouseMoveEvent(QMouseEvent *event);
	virtual void mouseReleaseEvent(QMouseEvent *event);
	bool m_Drag;                //判断鼠标左键是否按下
	QPoint m_DragPosition;
protected:
	void closeEvent(QCloseEvent *event);
	private slots:
	void slot_minWindow();
	//初始化
	void on_INITBtn_clicked();
	//读取PT
	void on_RPTBtn_clicked();
	//复位
	void on_RESETBtn_clicked();
	//设置PT
	void on_WPTBtn_clicked();
	//补抄
	void on_DownBtn_clicked();
	//设置ID
	void on_WIDBtn_clicked();
	//读取ID
	void on_RIDBtn_clicked();
	//读取时钟
	void on_RTimeBtn_clicked();
	//设置时钟
	void on_WTimeBtn_clicked();
};
