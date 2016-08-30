#include "ItemNum.h"
#include "ui_ItemNum.h"

ItemNum::ItemNum(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ItemNum)
{
    ui->setupUi(this);
}

ItemNum::~ItemNum()
{
    delete ui;
}

void ItemNum::resizeEvent(QResizeEvent *)
{
    ui->widget->resize(width(),height()*11);
    ui->widget->move(0,0);
}

void ItemNum::slotNum(float f)
{
    if(f>=10)
        f-=10.0;

    int i=(int)f%10;

    int j=(int)(f*10)%10;

    float iOneHeight=(float)ui->widget->height()/11;

    int iTmpY=i*iOneHeight+(float)(j*iOneHeight/11);




    ui->widget->move(0,-(iTmpY));

}
