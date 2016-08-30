/********************************************************************************
** Form generated from reading UI file 'ItemNum.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEMNUM_H
#define UI_ITEMNUM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>
#include "CNum.h"

QT_BEGIN_NAMESPACE

class Ui_ItemNum
{
public:
    QGridLayout *gridLayout;
    QWidget *wBgn;
    CNum *widget;

    void setupUi(QWidget *ItemNum)
    {
        if (ItemNum->objectName().isEmpty())
            ItemNum->setObjectName(QStringLiteral("ItemNum"));
        ItemNum->resize(400, 300);
        gridLayout = new QGridLayout(ItemNum);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        wBgn = new QWidget(ItemNum);
        wBgn->setObjectName(QStringLiteral("wBgn"));
        wBgn->setStyleSheet(QStringLiteral("QWidget#wBgn{background-color: rgb(0, 0, 0);}"));
        widget = new CNum(wBgn);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 401, 281));
        widget->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0);"));

        gridLayout->addWidget(wBgn, 0, 0, 1, 1);


        retranslateUi(ItemNum);

        QMetaObject::connectSlotsByName(ItemNum);
    } // setupUi

    void retranslateUi(QWidget *ItemNum)
    {
        ItemNum->setWindowTitle(QApplication::translate("ItemNum", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class ItemNum: public Ui_ItemNum {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMNUM_H
