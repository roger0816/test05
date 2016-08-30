#include "StageSpeed2.h"
#include "ui_StageSpeed2.h"
#include <QApplication>
StageSpeed2::StageSpeed2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StageSpeed2)
{
    ui->setupUi(this);

    QString st=QApplication::applicationDirPath();

   // QString sRe="/Users/chenchaowei/Desktop/test05/res/demoV3_0.png";
    QString sRe=st+"/../test05/res/demoV3_0.png";


    ui->wBg->setStyleSheet("border-image:url("+sRe+")");

}

StageSpeed2::~StageSpeed2()
{
    delete ui;
}
