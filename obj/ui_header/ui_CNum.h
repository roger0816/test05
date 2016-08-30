/********************************************************************************
** Form generated from reading UI file 'CNum.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CNUM_H
#define UI_CNUM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CNum
{
public:
    QGridLayout *gridLayout;
    QLabel *label_7;
    QLabel *label_4;
    QLabel *label;
    QLabel *label_6;
    QLabel *label_10;
    QLabel *label_5;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_9;
    QLabel *label_8;
    QLabel *label_11;

    void setupUi(QWidget *CNum)
    {
        if (CNum->objectName().isEmpty())
            CNum->setObjectName(QStringLiteral("CNum"));
        CNum->resize(166, 568);
        CNum->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"\n"
""));
        gridLayout = new QGridLayout(CNum);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(CNum);
        label_7->setObjectName(QStringLiteral("label_7"));
        QFont font;
        font.setFamily(QStringLiteral("Futura"));
        font.setPointSize(18);
        font.setBold(false);
        font.setWeight(50);
        label_7->setFont(font);
        label_7->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        label_4 = new QLabel(CNum);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);
        label_4->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label = new QLabel(CNum);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_6 = new QLabel(CNum);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);
        label_6->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        label_10 = new QLabel(CNum);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font);
        label_10->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_10, 9, 0, 1, 1);

        label_5 = new QLabel(CNum);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);
        label_5->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        label_2 = new QLabel(CNum);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(CNum);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);
        label_3->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_9 = new QLabel(CNum);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font);
        label_9->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_9, 8, 0, 1, 1);

        label_8 = new QLabel(CNum);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font);
        label_8->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_8, 7, 0, 1, 1);

        label_11 = new QLabel(CNum);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font);
        label_11->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_11, 10, 0, 1, 1);


        retranslateUi(CNum);

        QMetaObject::connectSlotsByName(CNum);
    } // setupUi

    void retranslateUi(QWidget *CNum)
    {
        CNum->setWindowTitle(QApplication::translate("CNum", "Form", 0));
        label_7->setText(QApplication::translate("CNum", "6", 0));
        label_4->setText(QApplication::translate("CNum", "3", 0));
        label->setText(QApplication::translate("CNum", "0", 0));
        label_6->setText(QApplication::translate("CNum", "5", 0));
        label_10->setText(QApplication::translate("CNum", "9", 0));
        label_5->setText(QApplication::translate("CNum", "4", 0));
        label_2->setText(QApplication::translate("CNum", "1", 0));
        label_3->setText(QApplication::translate("CNum", "2", 0));
        label_9->setText(QApplication::translate("CNum", "8", 0));
        label_8->setText(QApplication::translate("CNum", "7", 0));
        label_11->setText(QApplication::translate("CNum", "0", 0));
    } // retranslateUi

};

namespace Ui {
    class CNum: public Ui_CNum {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CNUM_H
