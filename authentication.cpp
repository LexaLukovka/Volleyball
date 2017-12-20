#include "authentication.h"
#include "ui_authentication.h"

#include <QDebug>
#include <gamescene.h>
#include <mainwindow.h>

QString player1Skin = "player1";
QString player2Skin = "player2";

Authentication::Authentication(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Authentication)
{
    ui->setupUi(this);



    // Инициализация рекордного окна
    gameScene = new GameScene();
    // получаем к слоту запуска главного окна по кнопке в рекодном окне
    connect(ui->startGame, SIGNAL(clicked()), gameScene, SLOT(show()));

    connect(ui->pl1_l, SIGNAL(clicked()), this, SLOT(pl1_change()));
    connect(ui->pl1_r, SIGNAL(clicked()), this, SLOT(pl1_change()));
    connect(ui->pl2_l, SIGNAL(clicked()), this, SLOT(pl2_change()));
    connect(ui->pl2_r, SIGNAL(clicked()), this, SLOT(pl2_change()));


    connect(gameScene, &GameScene::firstWindow, this, &MainWindow::show);


    connect(ui->startGame, SIGNAL(clicked()), this, SLOT(onButtonSend())); // подключаем клик по кнопке к определенному нами слоту
    connect(this, SIGNAL(sendData(QString)), gameScene, SLOT(recieveData(QString))); // подключение сигнала к слоту нашей формы
}

Authentication::~Authentication()
{
    delete ui;
}


void Authentication::onButtonSend(){
     emit sendData(ui->lineEdit->text()+"&"+ui->lineEdit_2->text()+"&"+player1Skin+"&"+player2Skin); // вызываем сигнал, в котором передаём введённые данные
}

void Authentication::pl1_change(){
    if(player1Skin=="player1"){
        ui->player1->setPixmap(QPixmap(":/images/images/player3.png"));
        player1Skin="player3";
    }
    else if(player1Skin=="player3"){
        ui->player1->setPixmap(QPixmap(":/images/images/player1.png"));
        player1Skin="player1";
    }

}

void Authentication::pl2_change(){
    if(player2Skin=="player2"){
        ui->player2->setPixmap(QPixmap(":/images/images/player4.png"));
        player2Skin="player4";
    }
    else if(player2Skin=="player4"){
        ui->player2->setPixmap(QPixmap(":/images/images/player2.png"));
        player2Skin="player2";
    }
}

void Authentication::on_startGame_clicked()
{
    QString name_1=ui->lineEdit->text();
    QString name_2=ui->lineEdit_2->text();

    emit signal_varible(name_1, name_2);

    gameScene->show();
    this->close();
}

void Authentication::on_back_clicked()
{
        this->close();
        emit firstWindow();// вызываем сигнал на открытие главного окна
}
