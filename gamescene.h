#ifndef GAMESCENE_H
#define GAMESCENE_H

#include <QWidget>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsItem>

#include <QDebug>

#include <QFile>
#include <QFileDialog>

#include <QStandardItem>
#include <QMessageBox>

#include <QKeyEvent>

#include <QGraphicsPixmapItem>
#include <QGraphicsRectItem>

#include <QMainWindow>
#include <QToolBar>
#include <QMenuBar>
#include <QAction>
#include <QLabel>
#include <QImage>
#include <QMovie>
#include <QString>
#include <QTimer>
#include <QTime>
#include <ctime>

#include <QtSql/QSqlDatabase>//для хроанения связи с базой данных
#include <QtSql/QSqlQueryModel> //для хранения данных с базы даных и передачи этих данных
#include <QtSql/QSqlQuery> //с помощью которого можно создавать запросы на языке SQL
#include <QSqlTableModel>//табличная модель
#include <QtSql/QSqlError>

#include <QJsonObject>
#include <QJsonArray>
#include <QJsonParseError>




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




    // QGraphicsScene interface
protected:


    // QGraphicsScene interface
protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event);

    // QGraphicsScene interface

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

private slots:
    void Generation();
    void on_pushButton_clicked();
    void animate();

signals:
    void firstWindow();
public slots:
    void recieveData(QString str);
private:
    Ui::GameScene *ui;

    QSqlDatabase db;

    QJsonDocument doc;
    QJsonArray docArr;
    QJsonParseError docError;
    QString globPath;
    QFile file;

    Scene * Gscene;
    Scene * Gscene2;

    /* пїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅ пїЅпїЅпїЅпїЅпїЅ */

    QTimer *ATimer; /*пїЅпїЅпїЅпїЅпїЅпїЅ пїЅпїЅпїЅ пїЅпїЅпїЅпїЅпїЅпїЅ  */
    QTimer *GTimer; /*пїЅпїЅпїЅпїЅпїЅпїЅ пїЅпїЅпїЅ пїЅпїЅпїЅпїЅпїЅпїЅ  */
    QTimer *Rnd;
    QTimer *TimerAnimate;

    b2World*world;

    // QWidget interface
protected:

    /*пїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅ пїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅ пїЅпїЅпїЅпїЅпїЅ пїЅпїЅпїЅпїЅпїЅпїЅпїЅ пїЅпїЅпїЅпїЅ  */
};

///////////////////////////////////////######## * BASE OBJ * #########/////////////////////////////////////




class BaseObj:public QGraphicsPixmapItem{

public:
    BaseObj(b2World *world,qreal Radius,QPointF initPos);
   void qSleep(int ms);
    ~BaseObj();
private:
    QTimer *DTimer;
    b2Body *body;
public:
    void advance(int phase);
    int YSP=2;
    int XSP=0;
     b2Body *ball;

protected:

};
///////////////////////////////////////######## * Player * #########/////////////////////////////////////

class Player: public QGraphicsPixmapItem{

public:
    Player(b2World*world,QSizeF size,QPointF initPos,qreal angle,int PlFlag );
    ~Player();
    void advance(int phase);
public:
    //пїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅ пїЅпїЅпїЅпїЅпїЅпїЅ

private :

private slots:
    //void Generation2();
protected:


    // QGraphicsItem interface


};

class Player2:public QGraphicsPixmapItem{
private:

public:
    Player2(b2World*world,QSizeF size,QPointF initPos,qreal angle, int PFlag);
    ~Player2();
    void advance(int phase);

};

///////////////////////////////////////######## * PLAT OBJ 2 * #########/////////////////////////////////////

class Walls: public QGraphicsRectItem{

private:
    b2Body*body;
public:
    Walls(b2World*world,QSizeF size,QPointF initPos,qreal angle);
    void advance(int phase);
    void deletewall();
    ~Walls();
public:

protected:
    // QGraphicsItem interface


};

#endif // GAMESCENE_H
