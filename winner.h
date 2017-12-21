#ifndef WINNER_H
#define WINNER_H

#include <QWidget>

//#include "gamescene.h"

namespace Ui {
class Winner;
}

class Winner : public QWidget
{
    Q_OBJECT

public:
    explicit Winner(QWidget *parent = 0);
    ~Winner();
signals:
    void firstWindow();
private slots:
    void on_YES_clicked();
    void on_NO_clicked();
private:
    Ui::Winner *ui;
};

#endif // WINNER_H
