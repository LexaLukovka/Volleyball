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



    aboutWindow=new About();

    connect(ui->About,SIGNAL(clicked()),aboutWindow,SLOT(show()));
    connect(ui->Exit,SIGNAL(clicked()),this,SLOT(close()));
    connect(ui->volume,SIGNAL(clicked()),this,SLOT(volume()));


    // »нициализаци€ рекордного окна
    showRecord = new Record();
    // получаем к слоту запуска главного окна по кнопке в рекодном окне
    connect(showRecord, &Record::firstWindow, this, &MainWindow::show);

    // »нициализаци€ рекордного окна
    authWindow = new Authentication();
    // получаем к слоту запуска главного окна по кнопке в рекодном окне
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

void MainWindow::on_Records_clicked()
{
    showRecord->show();
    this->close();
}

void MainWindow::on_Start_Game_clicked()
{
    authWindow->show();
    this->close();
}
