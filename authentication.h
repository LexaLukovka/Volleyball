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
    void on_pushButton_clicked();
    void onButtonSend();

public slots:
    void on_pushButton_2_clicked();

private:
    Ui::Authentication *ui;
    GameScene *gameScene;
};

#endif // AUTHENTICATION_H
