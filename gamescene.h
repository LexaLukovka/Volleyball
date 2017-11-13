#ifndef GAMESCENE_H
#define GAMESCENE_H

#include <QWidget>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsItem>

#include <QKeyEvent>

#include <QGraphicsPixmapItem>
#include <QGraphicsRectItem>

#include <QMainWindow>
#include <QToolBar>
#include <QMenuBar>
#include <QAction>
#include <QLabel>
#include <QImage>
#include <QString>
#include <QTimer>
#include <ctime>

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
    explicit GameScene(QWidget *parent = 0);
    ~GameScene();

private slots:
   void Generation();

  void MaxB();


private:
    Ui::GameScene *ui;

    Scene * Gscene;

/* ” ¿«¿“≈À‹ —÷≈Õ€ */

    QTimer *ATimer; /*“¿…Ã≈– ƒÀﬂ  ¿ƒ–Œ¬  */

    QTimer *GTimer; /*“¿…Ã≈– ƒÀﬂ —œ¿¬Õ¿  */

    QTimer *Rnd;

    b2World*world;


    // QWidget interface
protected:


    /*–≈‘¿ “Œ–»Õ√ ƒŒ¡¿¬Àﬂ≈Ã Ã≈“Œƒ Õ¿∆¿“»ﬂ Ã€ÿ»  */
};

///////////////////////////////////////######## * BASE OBJ * #########/////////////////////////////////////




class BaseObj:public QGraphicsEllipseItem {

public:

     BaseObj(b2World *world,qreal Radius,QPointF initPos);
     ~BaseObj();

private:
     QTimer *DTimer;
     b2Body*body;

public:
  void advance(int phase);



  int YSP=2;
  int XSP=0;

protected:

};
///////////////////////////////////////######## * PLAT OBJ * #########/////////////////////////////////////

class Player: public QGraphicsRectItem{

private:

    int XSP;
    b2Body*Userbody;
    b2BodyDef bdefff ;
    b2World*world2;
    QSizeF size2;

public:

    Player(b2World*world,QSizeF size,QPointF initPos,qreal angle );
    ~Player();

public:
    void advance(int phase);


protected:
    void keyPressEvent(QKeyEvent *event);

   void keyReleaseEvent(QKeyEvent *event);
  void CreateObjFunc();

    // QGraphicsItem interface


};

///////////////////////////////////////######## * PLAT OBJ 2 * #########/////////////////////////////////////

class Walls: public QGraphicsRectItem{

private:


    b2Body*body;

public:

    Walls(b2World*world,QSizeF size,QPointF initPos,qreal angle );
    ~Walls();

public:


protected:


    // QGraphicsItem interface


};

#endif // GAMESCENE_H
