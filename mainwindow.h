#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsItem>

#include <QMediaPlayer>
#include <QUrl>

#include <QGraphicsPixmapItem>
#include <QGraphicsRectItem>

#include <QLabel>
#include <QImage>
#include <QObject>
#include <QString>

#include <QJsonObject>
#include <QJsonArray>
#include <QJsonParseError>

#include <QFile>
#include <QMessageBox>

#include "gamescene.h"
#include "about.h"
#include "record.h"
#include "authentication.h"



namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    QMediaPlayer *music;
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void volume();

private slots:
    void on_Records_clicked();
    void on_Start_Game_clicked();

private:
    Ui::MainWindow *ui;
    Record *showRecord;
    Authentication *authWindow;
    About *aboutWindow;
};

#endif // MAINWINDOW_H
