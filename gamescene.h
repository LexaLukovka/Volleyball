#ifndef GAMESCENE_H
#define GAMESCENE_H

#include <QWidget>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsItem>

#include <QFile>

#include <QMessageBox>

#include <QKeyEvent>

#include <QGraphicsPixmapItem>
#include <QGraphicsRectItem>

#include <QMainWindow>
#include <QLabel>
#include <QString>
#include <QTimer>


#include <QtSql/QSqlDatabase>//для хроанения связи с базой данных
#include <QtSql/QSqlQuery> //с помощью которого можно создавать запросы на языке SQL
#include <QtSql/QSqlError>

#include <QJsonObject>
#include <QJsonArray>
#include <QJsonParseError>
#include <QMessageBox>
#include "winner.h"

#include <Box2D/Box2D.h>
#define SCALE 100;

namespace Ui {
class GameScene;
}

class Scene : public QGraphicsScene {
    Q_OBJECT
public :
    Scene (qreal x,qreal y ,qreal width,qreal height,b2World *world);

public slots :
    void advance();
private:
    b2World*world;
};

class GameScene : public QWidget
{
    Q_OBJECT

public:
    int PartGoal1=0, PartGoal2=0;
    int Goal_1=0, Goal_2=0;

    explicit GameScene(QWidget *parent = 0);
    void writeToSql();
    void writeToJson();
    void keyPressEvent(QKeyEvent *event);
    void keyReleaseEvent(QKeyEvent *event);
    ~GameScene();
private:
    Ui::GameScene *ui;

    Winner *winnerWindow;

    QSqlDatabase db;

    QJsonDocument doc;
    QJsonArray docArr;
    QJsonParseError docError;
    QString globPath;
    QFile file;

    Scene * Gscene;
    Scene * Gscene2;

    QTimer *ATimer;
    QTimer *GTimer;
    QTimer *Rnd;
    QTimer *TimerAnimate;
    b2World*world;
private slots:
    void Generation();
    void on_back_clicked();
    void animate();
public slots:
    void recieveData(QString str);
signals:
    void firstWindow();
};

///////////////////////////////////////######## * Ball * #########/////////////////////////////////////

class Ball_obj:public QGraphicsPixmapItem{
public:
    Ball_obj(b2World *world,qreal Radius,QPointF initPos);
    void qSleep(int ms);
    void advance(int phase);
    int YSP=2;
    int XSP=0;
    ~Ball_obj();
private:
    QTimer *DTimer;
    b2Body *body;

};
///////////////////////////////////////######## * Player * #########/////////////////////////////////////

class Player_1: public QGraphicsPixmapItem{
public:
    Player_1(b2World*world,QSizeF size,QPointF initPos,qreal angle,int PlFlag );
    ~Player_1();
    void advance(int phase);
};

class Player_2:public QGraphicsPixmapItem{
public:
    Player_2(b2World*world,QSizeF size,QPointF initPos,qreal angle, int PFlag);
    ~Player_2();
    void advance(int phase);
};

///////////////////////////////////////######## * PLAT OBJ 2 * #########/////////////////////////////////////

class Walls: public QGraphicsRectItem{
private:
    b2Body*body;
public:
    Walls(b2World*world,QSizeF size,QPointF initPos,qreal angle);
    void advance(int phase);
    ~Walls();
};

#endif // GAMESCENE_H
