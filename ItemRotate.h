#ifndef ITEMROTATE_H
#define ITEMROTATE_H

#include <QWidget>
#include <QPaintEvent>
#include <QPainter>
#include <QTimer>
#include <QTime>
#include <QSize>
#include <QDebug>
#include <QResizeEvent>
class ItemRotate : public QWidget
{
    Q_OBJECT
public:
    explicit ItemRotate(QWidget *parent = 0);
    void paintEvent(QPaintEvent *);
    void resizeEvent(QResizeEvent *);
    int m_iAll;
    int m_iNow;
    QSize m_size;



signals:

public slots:

    void slotNow(int i);

};

#endif // ITEMROTATE_H
