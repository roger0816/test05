#ifndef ITEMNUM_H
#define ITEMNUM_H

#include <QWidget>
#include <QResizeEvent>

namespace Ui {
class ItemNum;
}

class ItemNum : public QWidget
{
    Q_OBJECT

public:
    explicit ItemNum(QWidget *parent = 0);
    ~ItemNum();
    void resizeEvent(QResizeEvent *);
    

private:
    Ui::ItemNum *ui;
    
public slots:
    void slotNum(float f);
};

#endif // ITEMNUM_H
