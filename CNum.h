#ifndef CNUM_H
#define CNUM_H

#include <QWidget>

namespace Ui {
class CNum;
}

class CNum : public QWidget
{
    Q_OBJECT

public:
    explicit CNum(QWidget *parent = 0);
    ~CNum();

private:
    Ui::CNum *ui;
};

#endif // CNUM_H
