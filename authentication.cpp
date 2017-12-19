#include "authentication.h"
#include "ui_authentication.h"

#include <QDebug>
#include <gamescene.h>
#include <mainwindow.h>

Authentication::Authentication(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Authentication)
{
    ui->setupUi(this);



    // Инициализация рекордного окна
    gameScene = new GameScene();
    // получаем к слоту запуска главного окна по кнопке в рекодном окне
    connect(ui->pushButton_2, SIGNAL(clicked()), gameScene, SLOT(show()));

    connect(gameScene, &GameScene::firstWindow, this, &MainWindow::show);


    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(onButtonSend())); // подключаем клик по кнопке к определенному нами слоту
    connect(this, SIGNAL(sendData(QString)), gameScene, SLOT(recieveData(QString))); // подключение сигнала к слоту нашей формы

}

Authentication::~Authentication()
{
    delete ui;
}


void Authentication::on_pushButton_clicked()
{
    this->close();
    emit firstWindow();// вызываем сигнал на открытие главного окна
}


void Authentication::on_pushButton_2_clicked()
{
    QString name_1=ui->lineEdit->text();
    QString name_2=ui->lineEdit_2->text();

    emit signal_varible(name_1, name_2);

    gameScene->show();
    this->close();
}
void Authentication::onButtonSend(){
     emit sendData(ui->lineEdit->text()+" "+ui->lineEdit_2->text()); // вызываем сигнал, в котором передаём введённые данные
}
