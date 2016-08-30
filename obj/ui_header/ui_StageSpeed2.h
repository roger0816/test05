/********************************************************************************
** Form generated from reading UI file 'StageSpeed2.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAGESPEED2_H
#define UI_STAGESPEED2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StageSpeed2
{
public:
    QGridLayout *gridLayout;
    QWidget *wBg;

    void setupUi(QWidget *StageSpeed2)
    {
        if (StageSpeed2->objectName().isEmpty())
            StageSpeed2->setObjectName(QStringLiteral("StageSpeed2"));
        StageSpeed2->resize(400, 300);
        gridLayout = new QGridLayout(StageSpeed2);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        wBg = new QWidget(StageSpeed2);
        wBg->setObjectName(QStringLiteral("wBg"));

        gridLayout->addWidget(wBg, 0, 0, 1, 1);


        retranslateUi(StageSpeed2);

        QMetaObject::connectSlotsByName(StageSpeed2);
    } // setupUi

    void retranslateUi(QWidget *StageSpeed2)
    {
        StageSpeed2->setWindowTitle(QApplication::translate("StageSpeed2", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class StageSpeed2: public Ui_StageSpeed2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAGESPEED2_H
