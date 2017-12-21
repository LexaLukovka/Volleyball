/********************************************************************************
** Form generated from reading UI file 'winner.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINNER_H
#define UI_WINNER_H

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

class Ui_Winner
{
public:
    QPushButton *YES;
    QLabel *winner;
    QPushButton *NO;
    QGraphicsView *graphicsView;

    void setupUi(QWidget *Winner)
    {
        if (Winner->objectName().isEmpty())
            Winner->setObjectName(QStringLiteral("Winner"));
        Winner->resize(400, 300);
        Winner->setStyleSheet(QStringLiteral(""));
        YES = new QPushButton(Winner);
        YES->setObjectName(QStringLiteral("YES"));
        YES->setGeometry(QRect(90, 260, 80, 25));
        YES->setStyleSheet(QLatin1String("font-weight: bold;\n"
"font-size: 12px;\n"
"color: #fff;\n"
"background-color: #ffb204;\n"
"\n"
""));
        winner = new QLabel(Winner);
        winner->setObjectName(QStringLiteral("winner"));
        winner->setGeometry(QRect(136, 178, 125, 27));
        winner->setStyleSheet(QStringLiteral("background-color: transparent;"));
        NO = new QPushButton(Winner);
        NO->setObjectName(QStringLiteral("NO"));
        NO->setGeometry(QRect(230, 260, 80, 25));
        NO->setAutoFillBackground(false);
        NO->setStyleSheet(QLatin1String("font-weight: bold;\n"
"font-size: 12px;\n"
"color: #fff;\n"
"background-color: #ffb204;\n"
""));
        graphicsView = new QGraphicsView(Winner);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 400, 300));
        graphicsView->setStyleSheet(QStringLiteral("background-image: url(\":/images/images/winner.png\");"));
        graphicsView->raise();
        YES->raise();
        winner->raise();
        NO->raise();

        retranslateUi(Winner);

        QMetaObject::connectSlotsByName(Winner);
    } // setupUi

    void retranslateUi(QWidget *Winner)
    {
        Winner->setWindowTitle(QApplication::translate("Winner", "Form", 0));
        YES->setText(QApplication::translate("Winner", "\320\224\320\220", 0));
        winner->setText(QString());
        NO->setText(QApplication::translate("Winner", "\320\235\320\225\320\242", 0));
    } // retranslateUi

};

namespace Ui {
    class Winner: public Ui_Winner {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINNER_H
