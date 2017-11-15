#include "gamescene.h"
#include "ui_gamescene.h"

#include <QKeyEvent>
#include <qkeysequence.h>
#include <QGraphicsSceneMouseEvent>
#include <ctime>
#include <SFML/Graphics.hpp>


#define  Platdorm_Move_SP 6;
#define RAD 0.4;

qreal fromB2(qreal value){

    return value*SCALE;

}


qreal toB2(qreal value){

    return value/SCALE;
}


GameScene::GameScene(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GameScene)
{
    ui->setupUi(this);



    world=new b2World(b2Vec2(0.00f,10.00f));


    //  Gscene = new QGraphicsScene(0,0,1400,600,this);
    Gscene = new Scene(0,0,14,8,world);
    ui->graphicsView->setScene(Gscene);

    // ui->graphicsView->setStyleSheet("background-image: url(:/new/prefix1/Back)center;"
    //                                " background-repeat:no-repeat");


    ui->graphicsView->setStyleSheet("background-image: url(:/new/prefix1/Back)");

    // Gscene->addRect(Gscene->sceneRect());

    //////Comment*
    /*Left*/   Gscene->addItem(new Walls(world,QSizeF(14,0.1),QPointF(-0.5,4),90));
    /*Right*/ Gscene->addItem(new Walls(world,QSizeF(14,0.1),QPointF(13.3,4),90));
    /*Bottom*/  Gscene->addItem(new Walls(world,QSizeF(14,0.1),QPointF(7,7.5),0));
    /*Top*/   Gscene->addItem(new Walls(world,QSizeF(14,0.1),QPointF(7,0.3),0));
    Gscene->addItem(new Walls(world,QSizeF(4,0.1),QPointF(7,6),90));


    Player *pl = new Player(world,QSizeF(0.7,1),QPointF(6,6),0);

    Gscene->addItem(pl);

    Gscene->setStickyFocus(true);


    ATimer = new QTimer(this);
    connect(ATimer,SIGNAL(timeout()),Gscene,SLOT(advance()));
    ATimer->start(1000/60);



    connect (ui->pushButton,SIGNAL(clicked()),Gscene,SLOT(MaxB()));


    Rnd = new QTimer(this);
    //connect(Rnd,SIGNAL(timeout()),this,SLOT(Generation()));
    Rnd->start(1000);


}

GameScene::~GameScene()
{
    delete ui;
}


void GameScene::Generation()
{

}

void GameScene::MaxB()
{
    showMaximized();
}


///////////////////////////////////////######## * BASE OBJ * #########/////////////////////////////////////


BaseObj::BaseObj(b2World *world,qreal Radius,QPointF initPos):QGraphicsEllipseItem(0)
{
    setRect(-fromB2(Radius),-fromB2(Radius),fromB2(Radius*2),fromB2(Radius*2));


    // QColor color =  QColor (rand()%255,rand()%255,rand()%255);
    setBrush(QBrush(Qt::green));

    //setPos(rand()%(OsX - pixmap().width()),0);

    setPos(fromB2(initPos.x()),fromB2(initPos.y()));

    b2BodyDef bodyDef;
    bodyDef.type = b2_dynamicBody;
    bodyDef.position.Set(initPos.x(),initPos.y());
    bodyDef.linearDamping = 1;


    body = world->CreateBody(&bodyDef);


    b2CircleShape shape;
    shape.m_radius=Radius;

    b2FixtureDef fixture ;
    fixture.shape=&shape;
    fixture.restitution=0.95;
    fixture.density=0.2;
    body->CreateFixture(&fixture);



}

BaseObj::~BaseObj()
{


    body->GetWorld()->DestroyBody(body);

}



void BaseObj::advance(int phase)
{ b2Vec2 pos = body->GetPosition();

    if (phase){

        setPos(fromB2( body->GetPosition().x),fromB2(body->GetPosition().y));
        if(pos.y>=6.95){

            // body->GetWorld()->DestroyBody(body);
            delete this;

        }

        //  if(data(0).toBool()){

        //    delete this;


        //}

    }
}



///////////////////////////////////////######## * Player * #########/////////////////////////////////////

Player::Player(b2World*world,QSizeF size,QPointF initPos,qreal angle ) : QGraphicsRectItem(0)
{
    setBrush(QBrush(Qt::red));
    size2=size;
    setRect(-fromB2(size.width()/2 ),-fromB2(size.height()/2),fromB2(size.width()),fromB2(size.height()));

    world2=world;
    //setPixmap(QPixmap(":/new/prefix1/Plat"));
    // setPos(rand()%(OsX - pixmap().width()),0);
    //QGraphicsPixmapItem pix;

    //////Comment*
    setPos(fromB2( 4),fromB2(6));

    bdefff.position.Set(4,6);
    bdefff.angle = 3.14*angle/180;
    bdefff.type = b2_kinematicBody;
    b2CircleShape c;
    // c.m_radius=RAD;
    // c.m_p.Set(0,13/30.f);
    b2PolygonShape shape;
    shape.SetAsBox(size.width()/2,size.height()/2);

    Userbody = world2->CreateBody(&bdefff);
    Userbody->CreateFixture(&shape,5);
    // c.m_radius=25/30.f;
    //  c.m_p.Set(0,-20/30.f);
    Userbody->CreateFixture(&c,1.0f);
    Userbody->SetFixedRotation(true);



    setFlag(QGraphicsItem::ItemIsFocusable);
    setFocus();



}

Player::~Player()
{
    Userbody->GetWorld()->DestroyBody(Userbody);
}



void Player::advance(int phase)
{
    if(phase){

        // setPos(fromB2(7),fromB2(XSP));
        setRotation(fromB2(Userbody->GetAngle()));
        Userbody->SetAngularDamping(Userbody->GetAngularDamping());
        Userbody->SetAngularVelocity(Userbody->GetAngularVelocity());
        setPos(fromB2(Userbody->GetPosition().x),fromB2(Userbody->GetPosition().y));


        // moveBy(XSP,0);


        foreach(QGraphicsItem *Item,  collidingItems()){
            // Item->setData(0,true);
        }

        b2Vec2 vel = Userbody->GetLinearVelocity();
        b2Vec2 pos = Userbody->GetPosition();
        //////Comment*
        if(pos.y<=2){
            //  vel.y=0;

            Userbody->SetLinearVelocity(vel);


        }
        //////Comment*
        if(pos.y>=6){
            vel.y=0;

            Userbody->SetLinearVelocity(vel);

        }

    }
}

void Player::keyPressEvent(QKeyEvent *event)
{
    b2Vec2 pos = Userbody->GetPosition();
    b2Vec2 vel = Userbody->GetLinearVelocity();


    switch (event->key()){
    case Qt::Key_Left:
        vel.x=-5;
        break;
    case Qt::Key_Right:
        vel.x=5;
        break;
    case Qt::Key_Up:
        //////Comment*
        if(pos.y>=3)vel.y=-13;
        break;

    }
    Userbody->SetLinearVelocity(vel);




}

void Player::keyReleaseEvent(QKeyEvent *event)
{
    b2Vec2 pos = Userbody->GetPosition();
    b2Vec2 vel = Userbody->GetLinearVelocity();
    switch (event->key()){
    case Qt::Key_Left:
        vel.x=0;
        break;
    case Qt::Key_Right:
        vel.x=0;
        break;
    case Qt::Key_Up:
        //////Comment*
        if(pos.y<6){

            vel.y=6;

        }
        else vel.y=0;

        break;

    }
    Userbody->SetLinearVelocity(vel);
    //CreateObjFunc();
}


///////////////////////////////////////######## * Walls* #########/////////////////////////////////////

Walls::Walls(b2World*world,QSizeF size,QPointF initPos,qreal angle ) : QGraphicsRectItem(0)
{


    setRect(-fromB2(size.width()/2 ),-fromB2(size.height()/2),fromB2(size.width()),fromB2(size.height()));
    setBrush(QBrush(Qt::red));
    setPos(fromB2( initPos.x()),fromB2(initPos.y()));
    setRotation(angle);

    b2BodyDef bodyDef;
    bodyDef.type = b2_staticBody;
    bodyDef.position.Set(initPos.x(),initPos.y());
    bodyDef.angle = 3.14*angle/180;

    body = world->CreateBody(&bodyDef);

    b2PolygonShape shape;
    shape.SetAsBox(size.width()/2,size.height()/2);

    body->CreateFixture(&shape,0.0f);




}

Walls::~Walls()
{
    body->GetWorld()->DestroyBody(body);
}

void Walls::advance(int phase)
{
    //  if(!phase){

    //  foreach (QGraphicsItem*item,collidingItems()) {
    //    item->setData(0,true);
    //  }
    // }

}




///////////////////////////////////////######## * BOX2D * #########/////////////////////////////////////


// b2Vec2 gravity(0.00f,10.00f);
// b2World * world= new b2World(gravity);



Scene::Scene(qreal x, qreal y, qreal width, qreal height, b2World *world)
    :QGraphicsScene(fromB2(x),fromB2(y),fromB2(width),fromB2(height))
{
    this->world=world;
}

void Scene::advance()
{
    //srand(time(0));
    world->Step(1.00f/60.00,6,2);
    QGraphicsScene::advance();
}

void Scene::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    //addItem(new BaseObj(world,0.2,QPointF(toB2(event->scenePos().x()),toB2(event->scenePos().y()))));
    // addItem(new PlatObj(world,QSizeF(6,0.2),QPointF(toB2(event->scenePos().x()),toB2(event->scenePos().y())),0));
    addItem(new BaseObj(world,0.4,QPointF(toB2(event->scenePos().x()),toB2(event->scenePos().y()))));
}

///////////////////////////////////////////////////////////////////////////////////////////////////
