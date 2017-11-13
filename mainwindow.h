#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsItem>

#include <QtMultimedia/QAudioOutput>
//#include <QMediaPlayer>
#include <QDir>
#include <QUrl>

#include <QGraphicsPixmapItem>
#include <QGraphicsRectItem>

#include <QMainWindow>
#include <QToolBar>
#include <QMenuBar>
#include <QAction>
#include <QLabel>
#include <QImage>
#include <QString>
#include "gamescene.h"
#include "arf.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
  GameScene * Gform;
  ArF * Gform2;
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
