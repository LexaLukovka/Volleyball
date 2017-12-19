#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMediaPlayer>

bool bvolume = true;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);

    music = new QMediaPlayer;
    music->setMedia(QUrl("qrc:/music/music.mp3"));
    music->setVolume(50);
    music->play();



    /////////////////////////////////

    //Gform=new GameScene();
    //auth = new Authentication();
    Gform2=new ArF();
    ////////////////////////////////

    //connect(ui->pushButton,SIGNAL(clicked()),auth,SLOT(on_pushButton_clicked()));
    connect(ui->pushButton_2,SIGNAL(clicked()),Gform2,SLOT(show()));
    connect(ui->pushButton_3,SIGNAL(clicked()),this,SLOT(close()));
    //connect(ui->pushButton_3,SIGNAL(clicked()),Gform,SLOT(close()));
    connect(ui->pushButton_3,SIGNAL(clicked()),Gform2,SLOT(close()));
    connect(ui->volume,SIGNAL(clicked()),this,SLOT(volume()));


    // ������������� ���������� ����
    showRecord = new Record();
    // �������� � ����� ������� �������� ���� �� ������ � �������� ����
    connect(showRecord, &Record::firstWindow, this, &MainWindow::show);

    // ������������� ���������� ����
    authWindow = new Authentication();
    // �������� � ����� ������� �������� ���� �� ������ � �������� ����
    connect(authWindow, &Authentication::firstWindow, this, &MainWindow::show);

}

void MainWindow::volume(){
    if(bvolume){
        ui->volume->setStyleSheet(QLatin1String("background-image: url(\":/images/images/no-volume.png\");\n"
                                                "background-repeat: no-repeat;\n"
                                                "border: 0"));
        music->setVolume(0);
    }else if(!bvolume){
        ui->volume->setStyleSheet(QLatin1String("background-image: url(\":/images/images/volume.png\");\n"
                                                "background-repeat: no-repeat;\n"
                                                "border: 0"));
        music->setVolume(50);
    }
     bvolume=!bvolume;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_4_clicked()
{
    showRecord->show();
    this->close();
}

void MainWindow::on_pushButton_clicked()
{
    authWindow->show();
    this->close();
}
