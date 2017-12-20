#ifndef AUTHENTICATION_H
#define AUTHENTICATION_H

#include <QWidget>

#include <gamescene.h>

namespace Ui {
class Authentication;
}

class Authentication : public QWidget
{
    Q_OBJECT

public:
    explicit Authentication(QWidget *parent = 0);
    ~Authentication();

signals:
    void firstWindow();
    void signal_varible(QString name_1, QString name_2);
    void sendData(QString str);
private slots:
    void on_startGame_clicked();
    void on_back_clicked();
    void onButtonSend();
public slots:
    void pl1_change();
    void pl2_change();
private:
    Ui::Authentication *ui;
    GameScene *gameScene;
};

#endif // AUTHENTICATION_H
