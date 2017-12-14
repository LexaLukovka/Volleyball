#include "gamescene.h"
#include "ui_gamescene.h"

#include <QKeyEvent>
#include <qkeysequence.h>
#include <QGraphicsSceneMouseEvent>
#include <QFontDatabase>
#include <ctime>
#include <QTime>
#include <QTimer>
#include <QMutex>
#ifdef Q_OS_WIN
#include <windows.h> // for Sleep
#endif



#define  Platdorm_Move_SP 6;
#define RAD 0.4;

int GoalFlag = 1;
static int goal1=-1,goal2 =0;
static int PartGoal1=0,PartGoal2 =0;


b2Body*Userbody;
b2BodyDef bdefff ;
b2World*world2;
QSizeF size2;
bool HeigthFlag = false;
bool HeigthFlag2 = false;

bool isCreated = false;

int PlayerFlag;
b2Body*Userbody2;
b2BodyDef bdefff2;

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
    setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);

    world=new b2World(b2Vec2(0.00f,10.00f));


    //  Gscene = new QGraphicsScene(0,0,1400,600,this);
    Gscene = new Scene(0,0,8,6,world);

    ui->graphicsView->setScene(Gscene);

    // ui->graphicsView->setStyleSheet("background-image: url(:/new/prefix1/Back)center;"
    //                                " background-repeat:no-repeat");


    // ui->graphicsView->setStyleSheet("background-image: url(:/images/"); //button back

    // Gscene->addRect(Gscene->sceneRect());

    //////Comment*
    /*Left*/   Gscene->addItem(new Walls(world,QSizeF(20, 0),QPointF(0,3),90));
    /*Right*/ Gscene->addItem(new Walls(world,QSizeF(20, 0),QPointF(8,3),90));
    /*Bottom*/  Gscene->addItem(new Walls(world,QSizeF(20,0),QPointF(4,5),0));
    /*Top*/   Gscene->addItem(new Walls(world,QSizeF(20,0),QPointF(4,0),0));
    /*Center*/ Gscene->addItem(new Walls(world,QSizeF(4,0.1),QPointF(3.6,4.35),90));

    //    Gscene->addItem(new Walls(world,QSizeF(4,0.1),QPointF(7,6),90));




    Player *pl = new Player(world,QSizeF(0.75,0.75),QPointF(1,4),0,1);

    Player2 *pl2 = new Player2(world,QSizeF(0.75,0.75),QPointF(6,4),0,2);




    //    QGraphicsItem::setFlag(QGraphicsItem::ItemIsFocusable);

    Gscene->addItem(pl);
    Gscene->addItem(pl2);

    ATimer = new QTimer(this);
    connect(ATimer,SIGNAL(timeout()),Gscene,SLOT(advance()));
    ATimer->start(1000/60);






    Rnd = new QTimer(this);
    connect(Rnd,SIGNAL(timeout()),this,SLOT(Generation()));
    Rnd->start(2000);





    setFocus();
    focusPolicy();



}

GameScene::~GameScene()
{
    delete ui;
}

void GameScene::Generation()
{


    // BaseObj* check = ( new BaseObj(world,0.4,QPointF(2,1)));
    BaseObj *ball;
    Walls *platform;

    if(GoalFlag==1&&isCreated==false){
        ball = new BaseObj(world,0.25,QPointF(1.5,3));
        platform = new Walls(world,QSizeF(0,0),QPointF(1.5,3.5),0);

        Gscene->addItem(ball);
        Gscene->addItem(platform);

        isCreated = true;
        goal1++;

    }

    if(GoalFlag==2&&isCreated==false){
        ball = new BaseObj(world,0.25,QPointF(5.5,1));
        platform = new Walls(world,QSizeF(0,0),QPointF(5.5,3.5),0);
        Gscene->addItem(ball);
        Gscene->addItem(platform);
        isCreated = true;
        goal2++;
    }

    if(goal1>=5){
        goal1=0;
        goal2=0;
        PartGoal2++;
        ui->player1->setText(QString::number(PartGoal2));
    }
    if(goal2>=5){
        goal1=0;
        goal2=0;
        PartGoal1++;
        ui->player2->setText(QString::number(PartGoal1));
    }
    QString sgoal1 = QString::number(goal1);
    QString sgoal2 = QString::number(goal2);
    ui->label->setText(sgoal1+":"+sgoal2);


}





///////////////////////////////////////######## * BASE OBJ * #########/////////////////////////////////////


BaseObj::BaseObj(b2World *world,qreal Radius,QPointF initPos):QGraphicsPixmapItem(0)
{
    //setRect(-fromB2(Radius),-fromB2(Radius),fromB2(Radius*2),fromB2(Radius*2));


    // QColor color =  QColor (rand()%255,rand()%255,rand()%255);
    //setBrush(QBrush(Qt::green));
    setPixmap(QPixmap(":/images/images/ball1.png"));

    //setPos(rand()%(OsX - pixmap().width()),0);

    setPos(fromB2(initPos.x()/2),fromB2(initPos.y()/2));

    b2BodyDef bodyDef;
    bodyDef.type = b2_dynamicBody;
    bodyDef.position.Set(initPos.x(),initPos.y());
    bodyDef.linearDamping = 1;


    body = world->CreateBody(&bodyDef);


    b2CircleShape shape;
    shape.m_radius=Radius;
    b2FixtureDef fixture ;
    fixture.shape=&shape;
    fixture.restitution=0.5;
    fixture.density=0.2;
    body->CreateFixture(&fixture);

    b2Vec2 vel = body->GetLinearVelocity();
    vel = body->GetLinearVelocity();

    if (vel.Length()>7) body->SetLinearVelocity(7/vel.Length() * vel );

}
void BaseObj::qSleep(int ms)
{
    //QTEST_ASSERT(ms > 0);

#ifdef Q_OS_WIN
    Sleep(uint(ms));
#else
    struct timespec ts = { ms / 1000, (ms % 1000) * 1000 * 1000 };
    nanosleep(&ts, NULL);
#endif
}


BaseObj::~BaseObj()
{


    body->GetWorld()->DestroyBody(body);

}

void BaseObj::advance(int phase){
    b2Vec2 pos = body->GetPosition();
    b2Vec2 vel = body->GetLinearVelocity();

    if (phase){
        setPos(fromB2( body->GetPosition().x),fromB2(body->GetPosition().y));
        if (data(0).toBool()&&pos.y>=4.5){
           // qSleep(500);
            if(pos.x>=3.2){GoalFlag=1;}
            else {GoalFlag=2;}
            isCreated=false;
            delete this;
        }
    }
}

int BaseObj::ballpos(BaseObj *obj){
    return this->body->GetPosition().y;
}



///////////////////////////////////////######## * Player * #########/////////////////////////////////////

Player::Player(b2World*world,QSizeF size,QPointF initPos,qreal angle,int PlFlag ) : QGraphicsPixmapItem(0)
{
    PlayerFlag=PlFlag;
    // setBrush(QBrush(Qt::red));
    setPixmap(QPixmap(":/images/images/player1.png"));

    size2=size;
    //   setRect(-fromB2(size.width()/2 ),-fromB2(size.height()/2),fromB2(size.width()),fromB2(size.height()));
    world2=world;
    //setPixmap(QPixmap(":/new/prefix1/Plat"));
    // setPos(rand()%(OsX - pixmap().width()),0);
    //QGraphicsPixmapItem pix;

    //////Comment*
    setPos(fromB2(initPos.x()),fromB2(initPos.y()));
    //2 4
    bdefff.position.Set(initPos.x(),initPos.y());
    bdefff.angle = 3.14*angle/180 ;
    bdefff.type = b2_kinematicBody;


    b2CircleShape c;
    // c.m_radius=RAD;
    // c.m_p.Set(0,13/30.f);
    b2PolygonShape shape;
    shape.SetAsBox(size.width()/2,size.height()/2);
    Userbody = world2->CreateBody(&bdefff);
    Userbody->CreateFixture(&shape,1.0f);
    Userbody->CreateFixture(&c,1.0f);
    Userbody->SetFixedRotation(true);
}

Player2::Player2(b2World*world, QSizeF size, QPointF initPos, qreal angle, int PFlag):QGraphicsPixmapItem(0)
{
    PlayerFlag=PFlag;
    // setBrush(QBrush(Qt::red));
    setPixmap(QPixmap(":/images/images/player2.png"));

    size2=size;
    //   setRect(-fromB2(size.width()/2 ),-fromB2(size.height()/2),fromB2(size.width()),fromB2(size.height()));
    world2=world;
    //setPixmap(QPixmap(":/new/prefix1/Plat"));
    // setPos(rand()%(OsX - pixmap().width()),0);
    //QGraphicsPixmapItem pix;

    //////Comment*
    setPos(fromB2(initPos.x()),fromB2(initPos.y()));
    //2 4
    bdefff2.position.Set(initPos.x(),initPos.y());
    bdefff2.angle = 3.14*angle/180;
    bdefff2.type = b2_kinematicBody;


    b2CircleShape c;
    // c.m_radius=RAD;
    // c.m_p.Set(0,13/30.f);
    b2PolygonShape shape;
    shape.SetAsBox(size.width()/2,size.height()/2);

    Userbody2 = world2->CreateBody(&bdefff2);
    Userbody2->CreateFixture(&shape,1.0f);
    // c.m_radius=25/30.f;
    //  c.m_p.Set(0,-20/30.f);
    Userbody2->CreateFixture(&c,1.0f);
    Userbody2->SetFixedRotation(true);
}

Player::~Player()
{
    Userbody->GetWorld()->DestroyBody(Userbody);
}

Player2::~Player2()
{
    Userbody2->GetWorld()->DestroyBody(Userbody2);
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
        if(pos.y>=4){
            vel.y=0;
            HeigthFlag=false;
            Userbody->SetLinearVelocity(vel);
        }
        //////Comment*
        if(pos.y<=2){
            vel.y=2;
            HeigthFlag = true;
            Userbody->SetLinearVelocity(vel);
        }
        if(pos.x<=0){

            vel.x=0;
            Userbody->SetLinearVelocity(vel);
        }
        if(pos.x>=7.3){

            vel.x=0;
            Userbody->SetLinearVelocity(vel);
        }
        if(pos.x>=3.2){

            vel.x=0;
            Userbody->SetLinearVelocity(vel);
        }


    }
}

void Player2::advance(int phase)
{
    if(phase){
        // setPos(fromB2(7),fromB2(XSP));
        setRotation(fromB2(Userbody2->GetAngle()));
        Userbody2->SetAngularDamping(Userbody2->GetAngularDamping());
        Userbody2->SetAngularVelocity(Userbody2->GetAngularVelocity());
        setPos(fromB2(Userbody2->GetPosition().x),fromB2(Userbody2->GetPosition().y));


        // moveBy(XSP,0);


        foreach(QGraphicsItem *Item,  collidingItems()){
            // Item->setData(0,true);
        }

        b2Vec2 vel2 = Userbody2->GetLinearVelocity();
        b2Vec2 pos2 = Userbody2->GetPosition();
        //////Comment*
        if(pos2.y>=4){
            vel2.y=0;
            HeigthFlag2=false;
            Userbody2->SetLinearVelocity(vel2);
        }
        //////Comment*
        if(pos2.y<=2){
            vel2.y=2;
            HeigthFlag2 = true;
            Userbody2->SetLinearVelocity(vel2);
        }
        if(pos2.x<=0){

            vel2.x=0;
            Userbody2->SetLinearVelocity(vel2);
        }
        if(pos2.x>=7.3){

            vel2.x=0;
            Userbody2->SetLinearVelocity(vel2);
        }
        if(pos2.x<=4){

            vel2.x=0;
            Userbody2->SetLinearVelocity(vel2);
        }


    }
}

void GameScene::keyPressEvent(QKeyEvent *event)
{
    //    setFocus();
    b2Vec2 pos = Userbody->GetPosition();
    b2Vec2 vel = Userbody->GetLinearVelocity();
    b2Vec2 pos2 = Userbody2->GetPosition();
    b2Vec2 vel2 = Userbody2->GetLinearVelocity();
    switch (event->key()){
    case Qt::Key_A:
        if(pos.x>=0)
            vel.x=-5;
        break;
    case Qt::Key_D:
        if(pos.x<=7.3)
            if(pos.x<=3){
                vel.x=5;
            }
        break;
    case Qt::Key_W:
        //////Comment*

        if(HeigthFlag==false){
            HeigthFlag=true;
            if(pos.y>2&&(pos.x>=0||pos.x<=7.3)){ vel.y=-6; pos.y=2;}
        }
        break;
    case Qt::Key_Left:
        if(pos2.x>=4.17)
            vel2.x=-5;
        break;
    case Qt::Key_Right:
        if(pos2.x<=7.3)

            vel2.x=5;
        break;
    case Qt::Key_Up:
        //////Comment*

        if(HeigthFlag2==false){
            HeigthFlag2=true;
            if(pos2.y>2&&(pos2.x>=0||pos2.x<=7.3)){ vel2.y=-6; pos2.y=2;}
        }
        break;

    }
    Userbody->SetLinearVelocity(vel);
    Userbody2->SetLinearVelocity(vel2);
}

void GameScene::keyReleaseEvent(QKeyEvent *event)
{
    setFocus();
    b2Vec2 pos = Userbody->GetPosition();
    b2Vec2 vel = Userbody->GetLinearVelocity();
    b2Vec2 pos2 = Userbody2->GetPosition();
    b2Vec2 vel2 = Userbody2->GetLinearVelocity();
    switch (event->key()){
    case Qt::Key_A:
        vel.x=0;
        break;
    case Qt::Key_D:

        vel.x=0;
        break;
    case Qt::Key_W:
        //////Comment*
        if(pos.y<4){
            pos.y=4;
            vel.y=4;
        }
        else vel.y=0;
        break;
    case Qt::Key_Left:
        vel2.x=0;
        break;
    case Qt::Key_Right:

        vel2.x=0;
        break;
    case Qt::Key_Up:
        //////Comment*
        if(pos2.y<4){
            pos2.y=4;
            vel2.y=4;
        }
        else vel2.y=0;
        break;

    }
    Userbody->SetLinearVelocity(vel);
    Userbody2->SetLinearVelocity(vel2);

}

//void Player2::keyPressEvent(QKeyEvent *event)
//{
//    b2Vec2 pos = Userbody->GetPosition();
//    b2Vec2 vel = Userbody->GetLinearVelocity();

//    switch (event->key()){
//    case Qt::Key_A:
//        if(pos.x>=0)
//             if(pos.x>=4){
//            vel.x=-5;
//             }
//        break;
//    case Qt::Key_D:
//        if(pos.x<=7.3)

//            vel.x=5;
//        break;
//    case Qt::Key_W:
//        //////Comment*

//         if(HeigthFlag==false){
//             HeigthFlag=true;
//        if(pos.y>2&&(pos.x>=0||pos.x<=7.3)){ vel.y=-6; pos.y=2;}
//                         }
//        break;

//    }
//    Userbody->SetLinearVelocity(vel);
//}

//void Player2::keyReleaseEvent(QKeyEvent *event)
//{
//    b2Vec2 pos = Userbody->GetPosition();
//    b2Vec2 vel = Userbody->GetLinearVelocity();

//    switch (event->key()){
//    case Qt::Key_A:
//        vel.x=0;
//        break;
//    case Qt::Key_D:

//        vel.x=0;
//        break;
//    case Qt::Key_W:
//        //////Comment*
//        if(pos.y<4){
//            pos.y=4;
//            vel.y=4;
//        }
//        else vel.y=0;
//        break;
//    }
//    Userbody->SetLinearVelocity(vel);
//}





///////////////////////////////////////######## * Walls* #########/////////////////////////////////////

Walls::Walls(b2World*world,QSizeF size,QPointF initPos,qreal angle ) : QGraphicsRectItem(0)
{
    setRect(-fromB2(size.width()/2),-fromB2(size.height()/2),fromB2(size.width()),fromB2(size.height()));
    setBrush(QBrush(Qt::transparent));
    setPen(QPen(Qt::transparent));

    setPos(fromB2( initPos.x()),fromB2(initPos.y()));
    setRotation(angle);

    b2BodyDef bodyDef;
    bodyDef.type = b2_staticBody;
    bodyDef.position.Set(initPos.x(),initPos.y());
    bodyDef.angle = 3.14*angle/180;

    body = world->CreateBody(&bodyDef);

    b2PolygonShape shape;
    shape.SetAsBox(size.width()/2,size.height()/2);

    body->CreateFixture(&shape,1.0f);
}

void Walls::deletewall(){
    delete this;
}

Walls::~Walls()
{
    body->GetWorld()->DestroyBody(body);
}

void Walls::advance(int phase)
{
    if(!phase){

        foreach (QGraphicsItem*item,collidingItems()) {
            item->setData(0,true);
        }
    }

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


    world->Step(1.00f/60.00,8,3);
    QGraphicsScene::advance();

}

void Scene::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    //addItem(new BaseObj(world,0.2,QPointF(toB2(event->scenePos().x()),toB2(event->scenePos().y()))));
    // addItem(new PlatObj(world,QSizeF(6,0.2),QPointF(toB2(event->scenePos().x()),toB2(event->scenePos().y())),0));
    // addItem(new BaseObj(world,0.4,QPointF(toB2(event->scenePos().x()),toB2(event->scenePos().y()))));

}

///////////////////////////////////////////////////////////////////////////////////////////////////
