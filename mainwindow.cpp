#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    showMaximized();

    QPixmap Pix1(":/images/background.PNG");
    ui->label->setPixmap(Pix1);
    ui->label->setScaledContents(true);
    this->statusBar()->setSizeGripEnabled(false);




    //QMediaPlayer *player = new QMediaPlayer;
    //player->setMedia(QUrl::fromLocalFile(QDir::toNativeSeparators("E:\\K.mp3")));
    //player->setVolume(50);

    //player->play();



    /////////////////////////////////

    Gform=new GameScene();
    Gform2=new ArF();
    ////////////////////////////////

    connect(ui->pushButton,SIGNAL(clicked()),Gform,SLOT(show()));
    connect(ui->pushButton_2,SIGNAL(clicked()),Gform2,SLOT(show()));






}

MainWindow::~MainWindow()
{
    delete ui;
}


