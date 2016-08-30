/********************************************************************************
** Form generated from reading UI file 'StageSpeed.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAGESPEED_H
#define UI_STAGESPEED_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>
#include "ItemNum.h"

QT_BEGIN_NAMESPACE

class Ui_StageSpeed
{
public:
    QGridLayout *gridLayout;
    QWidget *wBk;
    QGridLayout *gridLayout_2;
    QWidget *wBg;
    QLabel *lbTime;
    QLCDNumber *lcd;
    QLCDNumber *lcd_2;
    QLabel *lbWarning;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;
    QWidget *page_3;
    QStackedWidget *stackedWidgetLeft;
    QWidget *page_4;
    QWidget *page_5;
    QWidget *page_6;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    ItemNum *n0;
    ItemNum *n1;
    ItemNum *n2;
    ItemNum *n3;
    ItemNum *n4;

    void setupUi(QWidget *StageSpeed)
    {
        if (StageSpeed->objectName().isEmpty())
            StageSpeed->setObjectName(QStringLiteral("StageSpeed"));
        StageSpeed->resize(656, 512);
        gridLayout = new QGridLayout(StageSpeed);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        wBk = new QWidget(StageSpeed);
        wBk->setObjectName(QStringLiteral("wBk"));
        wBk->setStyleSheet(QStringLiteral("QWidget#wBk{background-color: rgb(0, 0, 0);}"));
        gridLayout_2 = new QGridLayout(wBk);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        wBg = new QWidget(wBk);
        wBg->setObjectName(QStringLiteral("wBg"));
        wBg->setStyleSheet(QLatin1String("QWidget#wBg\n"
"{border-image: url(:/demoV3_0.png);}"));
        lbTime = new QLabel(wBg);
        lbTime->setObjectName(QStringLiteral("lbTime"));
        lbTime->setGeometry(QRect(560, 66, 61, 31));
        QFont font;
        font.setPointSize(18);
        lbTime->setFont(font);
        lbTime->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        lbTime->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lcd = new QLCDNumber(wBg);
        lcd->setObjectName(QStringLiteral("lcd"));
        lcd->setGeometry(QRect(300, 140, 141, 61));
        lcd->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        lcd->setFrameShape(QFrame::NoFrame);
        lcd->setDigitCount(3);
        lcd->setProperty("intValue", QVariant(0));
        lcd_2 = new QLCDNumber(wBg);
        lcd_2->setObjectName(QStringLiteral("lcd_2"));
        lcd_2->setGeometry(QRect(580, 160, 61, 31));
        lcd_2->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 0);"));
        lcd_2->setFrameShape(QFrame::NoFrame);
        lcd_2->setDigitCount(3);
        lcd_2->setProperty("intValue", QVariant(0));
        lbWarning = new QLabel(wBg);
        lbWarning->setObjectName(QStringLiteral("lbWarning"));
        lbWarning->setGeometry(QRect(570, 138, 21, 21));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        lbWarning->setFont(font1);
        lbWarning->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        lbWarning->setAlignment(Qt::AlignCenter);
        stackedWidget = new QStackedWidget(wBg);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(600, 239, 21, 32));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setStyleSheet(QStringLiteral("border-image: url(:/c0.png);"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setStyleSheet(QStringLiteral("border-image: url(:/c1.png);"));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        page_3->setStyleSheet(QStringLiteral("border-image: url(:/c2.png);"));
        stackedWidget->addWidget(page_3);
        stackedWidgetLeft = new QStackedWidget(wBg);
        stackedWidgetLeft->setObjectName(QStringLiteral("stackedWidgetLeft"));
        stackedWidgetLeft->setGeometry(QRect(0, -20, 211, 521));
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        page_4->setStyleSheet(QStringLiteral("QWidget#page_4{border-image: url(:/bgL_0.png);}"));
        stackedWidgetLeft->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        page_5->setStyleSheet(QStringLiteral("QWidget#page_5{border-image: url(:/bgL_1.png);}"));
        stackedWidgetLeft->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        page_6->setStyleSheet(QStringLiteral("QWidget#page_6{border-image: url(:/bgL_2.png);}"));
        stackedWidgetLeft->addWidget(page_6);
        widget = new QWidget(wBg);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(300, 387, 64, 28));
        widget->setStyleSheet(QStringLiteral("QWidget#widget{background-color: rgb(0,0, 0);}"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        n0 = new ItemNum(widget);
        n0->setObjectName(QStringLiteral("n0"));
        n0->setStyleSheet(QStringLiteral("background-color: rgba(0, 0, 0, 0);"));

        horizontalLayout->addWidget(n0);

        n1 = new ItemNum(widget);
        n1->setObjectName(QStringLiteral("n1"));

        horizontalLayout->addWidget(n1);

        n2 = new ItemNum(widget);
        n2->setObjectName(QStringLiteral("n2"));

        horizontalLayout->addWidget(n2);

        n3 = new ItemNum(widget);
        n3->setObjectName(QStringLiteral("n3"));

        horizontalLayout->addWidget(n3);

        n4 = new ItemNum(widget);
        n4->setObjectName(QStringLiteral("n4"));

        horizontalLayout->addWidget(n4);


        gridLayout_2->addWidget(wBg, 0, 0, 1, 1);


        gridLayout->addWidget(wBk, 0, 0, 1, 1);


        retranslateUi(StageSpeed);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(StageSpeed);
    } // setupUi

    void retranslateUi(QWidget *StageSpeed)
    {
        StageSpeed->setWindowTitle(QApplication::translate("StageSpeed", "Form", 0));
        lbTime->setText(QApplication::translate("StageSpeed", "12:00", 0));
        lbWarning->setText(QApplication::translate("StageSpeed", "!", 0));
    } // retranslateUi

};

namespace Ui {
    class StageSpeed: public Ui_StageSpeed {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAGESPEED_H
