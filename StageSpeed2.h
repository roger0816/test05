#ifndef STAGESPEED2_H
#define STAGESPEED2_H

#include <QWidget>

namespace Ui {
class StageSpeed2;
}

class StageSpeed2 : public QWidget
{
    Q_OBJECT

public:
    explicit StageSpeed2(QWidget *parent = 0);
    ~StageSpeed2();

private:
    Ui::StageSpeed2 *ui;
};

#endif // STAGESPEED2_H
