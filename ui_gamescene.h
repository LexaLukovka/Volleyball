/********************************************************************************
** Form generated from reading UI file 'gamescene.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMESCENE_H
#define UI_GAMESCENE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameScene
{
public:
    QGraphicsView *graphicsView;
    QLabel *score;
    QLabel *player1;
    QLabel *player2;
    QPushButton *back;
    QLabel *pl1_score_2;
    QLabel *pl1_score_1;
    QLabel *pl2_score_1;
    QLabel *pl2_score_2;

    void setupUi(QWidget *GameScene)
    {
        if (GameScene->objectName().isEmpty())
            GameScene->setObjectName(QStringLiteral("GameScene"));
        GameScene->resize(800, 600);
        graphicsView = new QGraphicsView(GameScene);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 800, 600));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(graphicsView->sizePolicy().hasHeightForWidth());
        graphicsView->setSizePolicy(sizePolicy);
        graphicsView->setMinimumSize(QSize(800, 600));
        graphicsView->setMaximumSize(QSize(800, 600));
        graphicsView->setBaseSize(QSize(0, 0));
        graphicsView->setLayoutDirection(Qt::LeftToRight);
        graphicsView->setAutoFillBackground(false);
        graphicsView->setStyleSheet(QLatin1String("background-image: url(\":/images/images/background.png\");\n"
"background-repeat: no-repeat;\n"
""));
        graphicsView->setFrameShape(QFrame::NoFrame);
        graphicsView->setLineWidth(0);
        graphicsView->setMidLineWidth(0);
        graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView->setTransformationAnchor(QGraphicsView::AnchorViewCenter);
        score = new QLabel(GameScene);
        score->setObjectName(QStringLiteral("score"));
        score->setGeometry(QRect(336, 40, 131, 61));
        QFont font;
        font.setFamily(QStringLiteral("Ravie"));
        font.setPointSize(26);
        score->setFont(font);
        score->setStyleSheet(QStringLiteral("color: #f0f0f0"));
        score->setTextFormat(Qt::RichText);
        score->setAlignment(Qt::AlignCenter);
        player1 = new QLabel(GameScene);
        player1->setObjectName(QStringLiteral("player1"));
        player1->setGeometry(QRect(130, 10, 101, 20));
        QFont font1;
        font1.setFamily(QStringLiteral("Ravie"));
        font1.setPointSize(12);
        player1->setFont(font1);
        player1->setStyleSheet(QStringLiteral("color: #ffffff"));
        player2 = new QLabel(GameScene);
        player2->setObjectName(QStringLiteral("player2"));
        player2->setGeometry(QRect(570, 10, 101, 20));
        player2->setFont(font1);
        player2->setStyleSheet(QStringLiteral("color:  #ffffff"));
        back = new QPushButton(GameScene);
        back->setObjectName(QStringLiteral("back"));
        back->setGeometry(QRect(10, 10, 30, 50));
        back->setCursor(QCursor(Qt::PointingHandCursor));
        back->setStyleSheet(QLatin1String("background-image: url(\":/images/images/arrow-right.png\");\n"
"background-repeat: no-repeat;\n"
"border: 0;"));
        pl1_score_2 = new QLabel(GameScene);
        pl1_score_2->setObjectName(QStringLiteral("pl1_score_2"));
        pl1_score_2->setGeometry(QRect(280, 40, 50, 55));
        QFont font2;
        font2.setPointSize(10);
        pl1_score_2->setFont(font2);
        pl1_score_2->setPixmap(QPixmap(QString::fromUtf8(":/images/images/cocktail-empty.png")));
        pl1_score_1 = new QLabel(GameScene);
        pl1_score_1->setObjectName(QStringLiteral("pl1_score_1"));
        pl1_score_1->setGeometry(QRect(220, 40, 50, 55));
        pl1_score_1->setFont(font2);
        pl1_score_1->setPixmap(QPixmap(QString::fromUtf8(":/images/images/cocktail-empty.png")));
        pl2_score_1 = new QLabel(GameScene);
        pl2_score_1->setObjectName(QStringLiteral("pl2_score_1"));
        pl2_score_1->setGeometry(QRect(470, 40, 50, 55));
        pl2_score_1->setFont(font2);
        pl2_score_1->setPixmap(QPixmap(QString::fromUtf8(":/images/images/cocktail-empty.png")));
        pl2_score_2 = new QLabel(GameScene);
        pl2_score_2->setObjectName(QStringLiteral("pl2_score_2"));
        pl2_score_2->setGeometry(QRect(530, 40, 50, 55));
        pl2_score_2->setFont(font2);
        pl2_score_2->setPixmap(QPixmap(QString::fromUtf8(":/images/images/cocktail-empty.png")));

        retranslateUi(GameScene);

        QMetaObject::connectSlotsByName(GameScene);
    } // setupUi

    void retranslateUi(QWidget *GameScene)
    {
        GameScene->setWindowTitle(QApplication::translate("GameScene", "Game", 0));
        score->setText(QApplication::translate("GameScene", "0:0", 0));
        player1->setText(QApplication::translate("GameScene", "Player1", 0));
        player2->setText(QApplication::translate("GameScene", "Player2", 0));
        back->setText(QString());
        pl1_score_2->setText(QString());
        pl1_score_1->setText(QString());
        pl2_score_1->setText(QString());
        pl2_score_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GameScene: public Ui_GameScene {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMESCENE_H
