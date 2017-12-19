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
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QGraphicsView *graphicsView;
    QPushButton *volume;
    QPushButton *pushButton_4;

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
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        MainWindow->setTabShape(QTabWidget::Rounded);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(309, 190, 181, 41));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setAutoFillBackground(false);
        pushButton->setStyleSheet(QLatin1String("background-color: transparent;\n"
"border: 0;"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(310, 300, 181, 41));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QLatin1String("background-color: transparent;\n"
"border: 0;"));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(310, 340, 181, 41));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setStyleSheet(QLatin1String("background-color: transparent;\n"
"border: 0;"));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 800, 600));
        graphicsView->setStyleSheet(QLatin1String("background-image: url(\":/images/images/background-menu3.png\");\n"
"background-repeat: no-repeat;"));
        volume = new QPushButton(centralWidget);
        volume->setObjectName(QStringLiteral("volume"));
        volume->setGeometry(QRect(689, 20, 91, 51));
        volume->setCursor(QCursor(Qt::PointingHandCursor));
        volume->setStyleSheet(QLatin1String("background-image: url(\":/images/images/volume.png\");\n"
"background-repeat: no-repeat;\n"
"border: 0;"));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(310, 240, 181, 41));
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_4->setAutoFillBackground(false);
        pushButton_4->setStyleSheet(QLatin1String("background-color: transparent;\n"
"border: 0;"));
        MainWindow->setCentralWidget(centralWidget);
        graphicsView->raise();
        pushButton->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        volume->raise();
        pushButton_4->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Welcome to Volleyball game", 0));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        volume->setText(QString());
        pushButton_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
