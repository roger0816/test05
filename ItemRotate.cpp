#include "ItemRotate.h"

ItemRotate::ItemRotate(QWidget *parent) : QWidget(parent)
{

    m_iAll=7000;
    m_iNow=0;

    QTimer *timer = new QTimer(this);
    connect( timer, SIGNAL(timeout()), this, SLOT( update() ) );
    timer->start(20);



}

void ItemRotate::paintEvent(QPaintEvent *)
{
    QPainter painter(this);



     QString pathName = ":/bA.png";
     QImage sourceImage;
     sourceImage.load(pathName);

     painter.setRenderHint( QPainter::Antialiasing );
     QColor quadColor( 0, 0, 255 );

     painter.setBrush( quadColor );
    // QTime time = QTime::currentTime();

     painter.translate( width()/2, height()/2+15 );
    // painter.rotate( ( time.second() + ( time.msec() / 1000.0 ) ) * 24.0 );

     float f=(float)255/m_iAll*m_iNow;

     painter.rotate(140+f);




     /*下行为画出一个正方行旋转*/
     //painter.drawRect( QRect( -50, -50, 100, 100 ) );

     /* 下行将图片画出旋转， -50,-50 为旋转中心。 */
     painter.drawImage(QRect(0, 0, 175, 5), sourceImage);









}

void ItemRotate::resizeEvent(QResizeEvent *)
{
    m_size=size();
}

void ItemRotate::slotNow(int i)
{

    m_iNow=i;
}
