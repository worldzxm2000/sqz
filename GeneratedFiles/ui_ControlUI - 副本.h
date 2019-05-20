/********************************************************************************
** Form generated from reading UI file 'ControlUI.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROLUI_H
#define UI_CONTROLUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>
#include "MyButton.h"
QT_BEGIN_NAMESPACE

class Ui_ControlUI
{
public:
    QGroupBox *groupBox_2;
    QLabel *TiltleLabel;
    QGroupBox *groupBox_3;
    QScrollArea *ScrollArea_MinBtn;
    QWidget *ScrollAreaWidgetContents_MinBtn;
	MyButton *MinBtn;
    QScrollArea *ScrollArea_CloseBtn;
    QWidget *ScrollAreaWidgetContents_CloseBtn;
	MyButton *CloseBtn;
    QGroupBox *groupBox;
    QGroupBox *groupBox_down;
    QDateTimeEdit *BdateTimeEdit;
    QDateTimeEdit *EdateTimeEdit;
    QPushButton *DownBtn;
    QGroupBox *groupBox_time;
    QDateTimeEdit *RdateTimeEdit;
    QPushButton *RTimeBtn;
    QPushButton *WTimeBtn;
    QGroupBox *groupBox_IP;
    QPushButton *RIDBtn;
    QPushButton *WIDBtn;
    QLineEdit *DevicelineEdit_Port;
    QGroupBox *groupBox_Addr;
    QPushButton *RPTBtn;
    QPushButton *WPTBtn;
    QLineEdit *lineEdit_Addr;
    QGroupBox *groupBox_Addr_2;
    QPushButton *INITBtn;
    QPushButton *RESETBtn;
    QLabel *TitleLabel_Name;

    void setupUi(QWidget *ControlUI)
    {
        if (ControlUI->objectName().isEmpty())
            ControlUI->setObjectName(QStringLiteral("ControlUI"));
        ControlUI->resize(411, 361);
        ControlUI->setStyleSheet(QStringLiteral("background:rgb(77,77, 77);color:white"));
        groupBox_2 = new QGroupBox(ControlUI);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(5, 5, 401, 561));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        groupBox_2->setFont(font);
        TiltleLabel = new QLabel(groupBox_2);
        TiltleLabel->setObjectName(QStringLiteral("TiltleLabel"));
        TiltleLabel->setGeometry(QRect(10, 10, 32, 32));
        TiltleLabel->setFont(font);
        TiltleLabel->setPixmap(QPixmap(QString::fromUtf8("../../MyCPPProject_PL/Image/png/control.png")));
        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(350, 10, 46, 26));
        groupBox_3->setFont(font);
        ScrollArea_MinBtn = new QScrollArea(groupBox_3);
        ScrollArea_MinBtn->setObjectName(QStringLiteral("ScrollArea_MinBtn"));
        ScrollArea_MinBtn->setGeometry(QRect(2, 3, 20, 20));
        ScrollArea_MinBtn->setFont(font);
        ScrollArea_MinBtn->setWidgetResizable(true);
        ScrollAreaWidgetContents_MinBtn = new QWidget();
        ScrollAreaWidgetContents_MinBtn->setObjectName(QStringLiteral("ScrollAreaWidgetContents_MinBtn"));
        ScrollAreaWidgetContents_MinBtn->setGeometry(QRect(0, 0, 18, 18));
		MinBtn = new MyButton("../Image/png/Mini.png", 1, ScrollAreaWidgetContents_MinBtn);
        MinBtn->setObjectName(QStringLiteral("MinBtn"));
        MinBtn->setGeometry(QRect(1, 1, 18, 18));
        MinBtn->setFont(font);
        ScrollArea_MinBtn->setWidget(ScrollAreaWidgetContents_MinBtn);
        ScrollArea_CloseBtn = new QScrollArea(groupBox_3);
        ScrollArea_CloseBtn->setObjectName(QStringLiteral("ScrollArea_CloseBtn"));
        ScrollArea_CloseBtn->setGeometry(QRect(24, 3, 20, 20));
        ScrollArea_CloseBtn->setFont(font);
        ScrollArea_CloseBtn->setWidgetResizable(true);
        ScrollAreaWidgetContents_CloseBtn = new QWidget();
        ScrollAreaWidgetContents_CloseBtn->setObjectName(QStringLiteral("ScrollAreaWidgetContents_CloseBtn"));
        ScrollAreaWidgetContents_CloseBtn->setGeometry(QRect(0, 0, 18, 18));
		CloseBtn = new MyButton("../Image/png/Close.png", 1, ScrollAreaWidgetContents_CloseBtn);
        CloseBtn->setObjectName(QStringLiteral("CloseBtn"));
        CloseBtn->setGeometry(QRect(1, 1, 18, 18));
        CloseBtn->setFont(font);
        ScrollArea_CloseBtn->setWidget(ScrollAreaWidgetContents_CloseBtn);
        groupBox = new QGroupBox(groupBox_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 50, 381, 301));
        groupBox->setFont(font);
        groupBox_down = new QGroupBox(groupBox);
        groupBox_down->setObjectName(QStringLiteral("groupBox_down"));
        groupBox_down->setGeometry(QRect(10, 210, 241, 81));
        groupBox_down->setFont(font);
        BdateTimeEdit = new QDateTimeEdit(groupBox_down);
        BdateTimeEdit->setObjectName(QStringLiteral("BdateTimeEdit"));
        BdateTimeEdit->setGeometry(QRect(10, 20, 141, 22));
        BdateTimeEdit->setFont(font);
        BdateTimeEdit->setDateTime(QDateTime(QDate(2018, 9, 1), QTime(0, 0, 0)));
        EdateTimeEdit = new QDateTimeEdit(groupBox_down);
        EdateTimeEdit->setObjectName(QStringLiteral("EdateTimeEdit"));
        EdateTimeEdit->setGeometry(QRect(10, 50, 141, 22));
        EdateTimeEdit->setFont(font);
        EdateTimeEdit->setDateTime(QDateTime(QDate(2018, 9, 1), QTime(0, 0, 0)));
        DownBtn = new QPushButton(groupBox_down);
        DownBtn->setObjectName(QStringLiteral("DownBtn"));
        DownBtn->setGeometry(QRect(160, 20, 75, 23));
        DownBtn->setFont(font);
        groupBox_time = new QGroupBox(groupBox);
        groupBox_time->setObjectName(QStringLiteral("groupBox_time"));
        groupBox_time->setGeometry(QRect(210, 10, 171, 91));
        groupBox_time->setFont(font);
        RdateTimeEdit = new QDateTimeEdit(groupBox_time);
        RdateTimeEdit->setObjectName(QStringLiteral("RdateTimeEdit"));
        RdateTimeEdit->setGeometry(QRect(10, 20, 151, 22));
        RdateTimeEdit->setFont(font);
        RdateTimeEdit->setDateTime(QDateTime(QDate(2018, 9, 1), QTime(0, 0, 0)));
        RTimeBtn = new QPushButton(groupBox_time);
        RTimeBtn->setObjectName(QStringLiteral("RTimeBtn"));
        RTimeBtn->setGeometry(QRect(10, 50, 75, 23));
        RTimeBtn->setFont(font);
        WTimeBtn = new QPushButton(groupBox_time);
        WTimeBtn->setObjectName(QStringLiteral("WTimeBtn"));
        WTimeBtn->setGeometry(QRect(90, 50, 75, 23));
        WTimeBtn->setFont(font);
        groupBox_IP = new QGroupBox(groupBox);
        groupBox_IP->setObjectName(QStringLiteral("groupBox_IP"));
        groupBox_IP->setGeometry(QRect(10, 10, 191, 91));
        groupBox_IP->setFont(font);
        RIDBtn = new QPushButton(groupBox_IP);
        RIDBtn->setObjectName(QStringLiteral("RIDBtn"));
        RIDBtn->setGeometry(QRect(10, 60, 75, 23));
        RIDBtn->setFont(font);
        WIDBtn = new QPushButton(groupBox_IP);
        WIDBtn->setObjectName(QStringLiteral("WIDBtn"));
        WIDBtn->setGeometry(QRect(110, 60, 75, 23));
        WIDBtn->setFont(font);
        DevicelineEdit_Port = new QLineEdit(groupBox_IP);
        DevicelineEdit_Port->setObjectName(QStringLiteral("DevicelineEdit_Port"));
        DevicelineEdit_Port->setGeometry(QRect(10, 20, 171, 20));
        DevicelineEdit_Port->setFont(font);
        groupBox_Addr = new QGroupBox(groupBox);
        groupBox_Addr->setObjectName(QStringLiteral("groupBox_Addr"));
        groupBox_Addr->setGeometry(QRect(10, 110, 171, 91));
        groupBox_Addr->setFont(font);
        RPTBtn = new QPushButton(groupBox_Addr);
        RPTBtn->setObjectName(QStringLiteral("RPTBtn"));
        RPTBtn->setGeometry(QRect(10, 50, 75, 23));
        RPTBtn->setFont(font);
        WPTBtn = new QPushButton(groupBox_Addr);
        WPTBtn->setObjectName(QStringLiteral("WPTBtn"));
        WPTBtn->setGeometry(QRect(90, 50, 75, 23));
        WPTBtn->setFont(font);
        lineEdit_Addr = new QLineEdit(groupBox_Addr);
        lineEdit_Addr->setObjectName(QStringLiteral("lineEdit_Addr"));
        lineEdit_Addr->setGeometry(QRect(10, 20, 151, 20));
        lineEdit_Addr->setFont(font);
        groupBox_Addr_2 = new QGroupBox(groupBox);
        groupBox_Addr_2->setObjectName(QStringLiteral("groupBox_Addr_2"));
        groupBox_Addr_2->setGeometry(QRect(200, 130, 171, 41));
        groupBox_Addr_2->setFont(font);
        INITBtn = new QPushButton(groupBox_Addr_2);
        INITBtn->setObjectName(QStringLiteral("INITBtn"));
        INITBtn->setGeometry(QRect(10, 10, 75, 23));
        INITBtn->setFont(font);
        RESETBtn = new QPushButton(groupBox_Addr_2);
        RESETBtn->setObjectName(QStringLiteral("RESETBtn"));
        RESETBtn->setGeometry(QRect(90, 10, 75, 23));
        RESETBtn->setFont(font);
        TitleLabel_Name = new QLabel(groupBox_2);
        TitleLabel_Name->setObjectName(QStringLiteral("TitleLabel_Name"));
        TitleLabel_Name->setGeometry(QRect(5, 5, 111, 16));
        TitleLabel_Name->setFont(font);

        retranslateUi(ControlUI);

        QMetaObject::connectSlotsByName(ControlUI);
    } // setupUi

    void retranslateUi(QWidget *ControlUI)
    {
        ControlUI->setWindowTitle(QApplication::translate("ControlUI", "ControlUI", nullptr));
        groupBox_2->setTitle(QString());
        TiltleLabel->setText(QString());
        groupBox_3->setTitle(QString());
        MinBtn->setText(QApplication::translate("ControlUI", "PushButton", nullptr));
        CloseBtn->setText(QApplication::translate("ControlUI", "PushButton", nullptr));
        groupBox->setTitle(QString());
        groupBox_down->setTitle(QApplication::translate("ControlUI", "\346\225\260\346\215\256\350\241\245\346\212\204", nullptr));
        DownBtn->setText(QApplication::translate("ControlUI", "\350\241\245\346\212\204\346\225\260\346\215\256", nullptr));
        groupBox_time->setTitle(QApplication::translate("ControlUI", "\350\256\276\345\244\207\346\227\266\351\227\264", nullptr));
        RTimeBtn->setText(QApplication::translate("ControlUI", "\350\257\273\345\217\226\346\227\266\351\222\237", nullptr));
        WTimeBtn->setText(QApplication::translate("ControlUI", "\350\256\276\347\275\256\346\227\266\351\222\237", nullptr));
        groupBox_IP->setTitle(QApplication::translate("ControlUI", "\350\256\276\345\244\207ID", nullptr));
        RIDBtn->setText(QApplication::translate("ControlUI", "\350\257\273\345\217\226", nullptr));
        WIDBtn->setText(QApplication::translate("ControlUI", "\350\256\276\347\275\256", nullptr));
        groupBox_Addr->setTitle(QApplication::translate("ControlUI", "PT\350\256\276\347\275\256", nullptr));
        RPTBtn->setText(QApplication::translate("ControlUI", "\350\257\273\345\217\226", nullptr));
        WPTBtn->setText(QApplication::translate("ControlUI", "\350\256\276\347\275\256", nullptr));
        lineEdit_Addr->setText(QString());
        groupBox_Addr_2->setTitle(QString());
        INITBtn->setText(QApplication::translate("ControlUI", "\345\210\235\345\247\213\345\214\226", nullptr));
        RESETBtn->setText(QApplication::translate("ControlUI", "\345\244\215\344\275\215", nullptr));
        TitleLabel_Name->setText(QApplication::translate("ControlUI", "\345\242\222\346\203\205\347\253\231", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ControlUI: public Ui_ControlUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLUI_H
