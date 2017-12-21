/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *Start_Game;
    QPushButton *About;
    QPushButton *Exit;
    QGraphicsView *graphicsView;
    QPushButton *volume;
    QPushButton *Records;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(800, 600));
        MainWindow->setMaximumSize(QSize(800, 600));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/images/icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        MainWindow->setTabShape(QTabWidget::Rounded);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Start_Game = new QPushButton(centralWidget);
        Start_Game->setObjectName(QStringLiteral("Start_Game"));
        Start_Game->setGeometry(QRect(309, 190, 181, 41));
        Start_Game->setCursor(QCursor(Qt::PointingHandCursor));
        Start_Game->setAutoFillBackground(false);
        Start_Game->setStyleSheet(QLatin1String("background-color: transparent;\n"
"border: 0;"));
        About = new QPushButton(centralWidget);
        About->setObjectName(QStringLiteral("About"));
        About->setGeometry(QRect(310, 300, 181, 41));
        About->setCursor(QCursor(Qt::PointingHandCursor));
        About->setStyleSheet(QLatin1String("background-color: transparent;\n"
"border: 0;"));
        Exit = new QPushButton(centralWidget);
        Exit->setObjectName(QStringLiteral("Exit"));
        Exit->setGeometry(QRect(310, 340, 181, 41));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Exit->sizePolicy().hasHeightForWidth());
        Exit->setSizePolicy(sizePolicy1);
        Exit->setCursor(QCursor(Qt::PointingHandCursor));
        Exit->setStyleSheet(QLatin1String("background-color: transparent;\n"
"border: 0;"));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 800, 600));
        graphicsView->setStyleSheet(QLatin1String("background-image: url(\":/images/images/background-menu.png\");\n"
"background-repeat: no-repeat;"));
        volume = new QPushButton(centralWidget);
        volume->setObjectName(QStringLiteral("volume"));
        volume->setGeometry(QRect(689, 20, 91, 51));
        volume->setCursor(QCursor(Qt::PointingHandCursor));
        volume->setStyleSheet(QLatin1String("background-image: url(\":/images/images/volume.png\");\n"
"background-repeat: no-repeat;\n"
"border: 0;"));
        Records = new QPushButton(centralWidget);
        Records->setObjectName(QStringLiteral("Records"));
        Records->setGeometry(QRect(310, 240, 181, 41));
        Records->setCursor(QCursor(Qt::PointingHandCursor));
        Records->setAutoFillBackground(false);
        Records->setStyleSheet(QLatin1String("background-color: transparent;\n"
"border: 0;"));
        MainWindow->setCentralWidget(centralWidget);
        graphicsView->raise();
        Start_Game->raise();
        About->raise();
        Exit->raise();
        volume->raise();
        Records->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Welcome to Volleyball game", 0));
        Start_Game->setText(QString());
        About->setText(QString());
        Exit->setText(QString());
        volume->setText(QString());
        Records->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
