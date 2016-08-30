#include "StageSpeed.h"
#include "ui_StageSpeed.h"

StageSpeed::StageSpeed(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StageSpeed)
{
    ui->setupUi(this);

    ui->wBg->setObjectName("wBg");
    m_iSec=0;
    m_iNow=0;
    m_iWarninig=0;
    m_fTotal=12600.0;
    m_bIsAdd=true;
    m_bTimeShow=true;
    ui->lbTime->setText(QTime::currentTime().toString("HH:mm"));

    m_rotate=new ItemRotate(this);
    QObject::startTimer(100);
    // ui->lbTime->hide();

    m_listPath<<":/bBg2_0.png"<<":/bBg2_1.png"<<":/bBg2_2.png"<<":/bBg2_3.png"<<":/bBg2_4.png"
             <<":/bBg2_5.png"<<":/bBg2_6.png"<<":/bBg2_7.png";

    m_sNowPath="";


    ui->stackedWidgetLeft->hide();
    ui->lcd_2->hide();
    ui->lbWarning->hide();
    int i=(QTime::currentTime().toString("mm").toInt()%30);
    srand((unsigned)i);
}

StageSpeed::~StageSpeed()
{
    delete ui;
}

void StageSpeed::resizeEvent(QResizeEvent *)
{
    m_rotate->resize(size());
    ui->stackedWidgetLeft->resize(size());
    ui->stackedWidgetLeft->move(0,0);
    ui->lcd->move((width()-ui->lcd->width())/2-30,height()/2-ui->lcd->height()*2);
}


void StageSpeed::timerEvent(QTimerEvent *)
{
    m_iSec+=100;

    if(m_iSec%1000==0)
    {
        ui->lbTime->setText(QTime::currentTime().toString("HH:mm"));

        m_bTimeShow=!m_bTimeShow;
        QString st=ui->lbTime->text();
        if(m_bTimeShow)
            ui->lbTime->setText(st.replace(":"," "));
        else
            ui->lbTime->setText(st.replace(" ",":"));


        if(ui->stackedWidgetLeft->currentIndex()==2)
            ui->stackedWidgetLeft->setCurrentIndex(0);
        else
            ui->stackedWidgetLeft->setCurrentIndex(ui->stackedWidgetLeft->currentIndex()+1);
    }

//    if(m_iSec%8000==0)
//    {
//        if(rand()%4==0)
//        {
//            ui->stackedWidget->setCurrentIndex(1);
//            ui->lcd_2->display(rand()%26+1);
//            m_iWarninig=15;
//        }

//        else if(rand()%4==1)
//        {
//            ui->stackedWidget->setCurrentIndex(2);
//            ui->lcd_2->display(rand()%30+1);
//            m_iWarninig=15;
//        }
//        else
//        {
//            ui->stackedWidget->setCurrentIndex(0);
//            ui->lcd_2->display(0);

//        }
//    }


    if(ui->lbWarning->isVisible())
    {
        ui->lbWarning->hide();
    }
    else if(m_iWarninig>0)
    {
        ui->lbWarning->show();
        m_iWarninig--;
    }




    if(m_iNow>=7000)
        m_bIsAdd=false;

    if(m_iNow<=0)
        m_bIsAdd=true;

    int iValue=-70;

    if(m_bIsAdd)
    {
        if(m_iNow<2000)
            iValue=80;

        else if(m_iNow<4000)
                iValue=40;

        else if(m_iNow<6000)
                iValue=20;

        else if(m_iNow<7000)
                iValue=10;


    }

    m_iNow+=iValue;

    m_rotate->slotNow(m_iNow);

    float f=(float)m_iNow/7000*170;

    ui->lcd->display((int)f);



    int iTmp=m_iNow/1000;
    iTmp=qBound(0,iTmp,m_listPath.length()-1);

    if(m_sNowPath!=m_listPath.at(iTmp))
    {
        ui->wBg->setStyleSheet("QWidget#wBg{border-image:url("+m_listPath.at(iTmp)+")}");
        m_sNowPath=m_listPath.at(iTmp);
    }

    if(iValue<0)
        iValue=80;
    m_fTotal+=qAbs((float)(100-iValue)/3000);
    setAllNum(m_fTotal);


    if(f>120)
    {
        ui->stackedWidget->setHidden(!ui->stackedWidget->isHidden());
    }
    else
    {
        ui->stackedWidget->show();
    }

}

void StageSpeed::setAllNum(float f)
{

    ui->n0->slotNum((int)f/10000);
    ui->n1->slotNum((int)f/1000);
    ui->n2->slotNum((int)f/100);
    ui->n3->slotNum((int)f/10);
    ui->n4->slotNum(f);
}
