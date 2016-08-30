#include "CNum.h"
#include "ui_CNum.h"

CNum::CNum(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CNum)
{
    ui->setupUi(this);
}

CNum::~CNum()
{
    delete ui;
}
