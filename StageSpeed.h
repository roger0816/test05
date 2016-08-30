#ifndef STAGESPEED_H
#define STAGESPEED_H

#include <QWidget>
#include <QResizeEvent>
#include "ItemRotate.h"
#include <QTimerEvent>
namespace Ui {
class StageSpeed;
}

class StageSpeed : public QWidget
{
    Q_OBJECT

public:
    explicit StageSpeed(QWidget *parent = 0);
    ~StageSpeed();
    void resizeEvent(QResizeEvent *);
    void timerEvent(QTimerEvent *);
    ItemRotate *m_rotate;

    int m_iSec;
    int m_iNow;

    int m_iWarninig;

    float m_fTotal;
    bool m_bIsAdd;

    bool m_bTimeShow;



    QStringList m_listPath;
    QString m_sNowPath;

    void setAllNum(float f);



private:
    Ui::StageSpeed *ui;
};

#endif // STAGESPEED_H
