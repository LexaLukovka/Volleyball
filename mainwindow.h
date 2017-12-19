#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsItem>

#include <QtMultimedia/QAudioOutput>
#include <QMediaPlayer>
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
#include <QObject>
#include <QString>
#include "gamescene.h"
#include "arf.h"
#include "record.h"
#include "authentication.h"

#include <QJsonObject>
#include <QJsonArray>
#include <QJsonParseError>
#include <QFile>
#include <QFileDialog>
#include <QStandardItem>
#include <QMessageBox>

#include <QtSql>



namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
 // GameScene * Gform;
  ArF * Gform2;
 // Authentication *auth;
  QMediaPlayer *music;
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
  void volume();
  void on_pushButton_clicked();

private slots:

  void on_pushButton_4_clicked();



private:
    Ui::MainWindow *ui;
    Record *showRecord;
    Authentication *authWindow;
};

#endif // MAINWINDOW_H
