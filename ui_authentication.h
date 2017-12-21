/********************************************************************************
** Form generated from reading UI file 'authentication.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHENTICATION_H
#define UI_AUTHENTICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Authentication
{
public:
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *startGame;
    QPushButton *back;
    QGraphicsView *graphicsView;
    QLabel *player1;
    QLabel *player2;
    QPushButton *pl1_r;
    QPushButton *pl2_r;
    QPushButton *pl2_l;
    QPushButton *pl1_l;

    void setupUi(QWidget *Authentication)
    {
        if (Authentication->objectName().isEmpty())
            Authentication->setObjectName(QStringLiteral("Authentication"));
        Authentication->resize(800, 600);
        Authentication->setMinimumSize(QSize(800, 600));
        Authentication->setMaximumSize(QSize(800, 600));
        QFont font;
        font.setPointSize(10);
        Authentication->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/images/icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Authentication->setWindowIcon(icon);
        Authentication->setStyleSheet(QStringLiteral(""));
        lineEdit = new QLineEdit(Authentication);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(110, 425, 150, 30));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        lineEdit->setFont(font1);
        lineEdit->setStyleSheet(QLatin1String("background-color: #ce5b5b;\n"
"border: 3px solid #fff; \n"
"color: #fff;\n"
"padding-left: 10px;"));
        lineEdit_2 = new QLineEdit(Authentication);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(550, 425, 150, 30));
        lineEdit_2->setFont(font1);
        lineEdit_2->setStyleSheet(QLatin1String("background-color: #ce5b5b;\n"
"border: 3px solid #fff; \n"
"color: #fff;\n"
"padding-left: 10px;"));
        startGame = new QPushButton(Authentication);
        startGame->setObjectName(QStringLiteral("startGame"));
        startGame->setGeometry(QRect(320, 222, 161, 161));
        startGame->setFont(font);
        startGame->setCursor(QCursor(Qt::PointingHandCursor));
        startGame->setStyleSheet(QLatin1String("background-color: transparent;\n"
"border: 0;"));
        back = new QPushButton(Authentication);
        back->setObjectName(QStringLiteral("back"));
        back->setGeometry(QRect(10, 10, 31, 51));
        back->setCursor(QCursor(Qt::PointingHandCursor));
        back->setStyleSheet(QLatin1String("background-image: url(\":/images/images/arrow-right.png\");\n"
"background-repeat: no-repeat;\n"
"border: 0;"));
        graphicsView = new QGraphicsView(Authentication);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 800, 600));
        graphicsView->setMaximumSize(QSize(800, 600));
        QFont font2;
        graphicsView->setFont(font2);
        graphicsView->setStyleSheet(QLatin1String("background-image:  url(\":/images/images/background-start.png\");\n"
"background-repeat: no-repeat;\n"
"text-transform: uppercase; "));
        player1 = new QLabel(Authentication);
        player1->setObjectName(QStringLiteral("player1"));
        player1->setGeometry(QRect(140, 280, 75, 142));
        player1->setPixmap(QPixmap(QString::fromUtf8(":/images/images/player1.png")));
        player2 = new QLabel(Authentication);
        player2->setObjectName(QStringLiteral("player2"));
        player2->setGeometry(QRect(580, 280, 75, 142));
        player2->setPixmap(QPixmap(QString::fromUtf8(":/images/images/player2.png")));
        pl1_r = new QPushButton(Authentication);
        pl1_r->setObjectName(QStringLiteral("pl1_r"));
        pl1_r->setGeometry(QRect(220, 340, 30, 50));
        pl1_r->setCursor(QCursor(Qt::PointingHandCursor));
        pl1_r->setStyleSheet(QLatin1String("border: 0;\n"
"background-image: url(\":/images/images/arrow-r.png\");"));
        pl2_r = new QPushButton(Authentication);
        pl2_r->setObjectName(QStringLiteral("pl2_r"));
        pl2_r->setGeometry(QRect(660, 340, 30, 50));
        pl2_r->setCursor(QCursor(Qt::PointingHandCursor));
        pl2_r->setStyleSheet(QLatin1String("border: 0;\n"
"background-image: url(\":/images/images/arrow-r.png\");"));
        pl2_l = new QPushButton(Authentication);
        pl2_l->setObjectName(QStringLiteral("pl2_l"));
        pl2_l->setGeometry(QRect(540, 340, 30, 50));
        pl2_l->setCursor(QCursor(Qt::PointingHandCursor));
        pl2_l->setStyleSheet(QLatin1String("border: 0;\n"
"background-image: url(\":/images/images/arrow-l.png\");"));
        pl1_l = new QPushButton(Authentication);
        pl1_l->setObjectName(QStringLiteral("pl1_l"));
        pl1_l->setGeometry(QRect(100, 340, 30, 50));
        pl1_l->setCursor(QCursor(Qt::PointingHandCursor));
        pl1_l->setStyleSheet(QLatin1String("border: 0;\n"
"background-image: url(\":/images/images/arrow-l.png\");"));
        graphicsView->raise();
        lineEdit->raise();
        lineEdit_2->raise();
        startGame->raise();
        back->raise();
        player1->raise();
        player2->raise();
        pl1_r->raise();
        pl2_r->raise();
        pl2_l->raise();
        pl1_l->raise();

        retranslateUi(Authentication);

        QMetaObject::connectSlotsByName(Authentication);
    } // setupUi

    void retranslateUi(QWidget *Authentication)
    {
        Authentication->setWindowTitle(QApplication::translate("Authentication", "Start new Game", 0));
        lineEdit->setInputMask(QString());
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QApplication::translate("Authentication", "Player1", 0));
        lineEdit_2->setInputMask(QString());
        lineEdit_2->setText(QString());
        lineEdit_2->setPlaceholderText(QApplication::translate("Authentication", "Player2", 0));
        startGame->setText(QString());
        back->setText(QString());
        player1->setText(QString());
        player2->setText(QString());
        pl1_r->setText(QString());
        pl2_r->setText(QString());
        pl2_l->setText(QString());
        pl1_l->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Authentication: public Ui_Authentication {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHENTICATION_H
