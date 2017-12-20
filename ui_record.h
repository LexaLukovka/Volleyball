/********************************************************************************
** Form generated from reading UI file 'record.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECORD_H
#define UI_RECORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Record
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QTableView *tableView;
    QGraphicsView *graphicsView;

    void setupUi(QWidget *Record)
    {
        if (Record->objectName().isEmpty())
            Record->setObjectName(QStringLiteral("Record"));
        Record->resize(800, 600);
        Record->setMaximumSize(QSize(800, 600));
        pushButton = new QPushButton(Record);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 30, 50));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QLatin1String("background-image: url(\":/images/images/arrow-right.png\");\n"
"background-repeat: no-repeat;\n"
"border: 0;"));
        pushButton_2 = new QPushButton(Record);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(90, 60, 151, 23));
        QFont font;
        font.setPointSize(10);
        pushButton_2->setFont(font);
        pushButton_3 = new QPushButton(Record);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(580, 60, 131, 23));
        pushButton_3->setFont(font);
        tableView = new QTableView(Record);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(170, 110, 443, 431));
        tableView->setLayoutDirection(Qt::LeftToRight);
        tableView->setFrameShape(QFrame::VLine);
        graphicsView = new QGraphicsView(Record);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 800, 600));
        graphicsView->setMaximumSize(QSize(800, 600));
        graphicsView->setStyleSheet(QStringLiteral("background-image: url(\":/images/images/background-empty.png\") ;"));
        graphicsView->raise();
        pushButton->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        tableView->raise();

        retranslateUi(Record);

        QMetaObject::connectSlotsByName(Record);
    } // setupUi

    void retranslateUi(QWidget *Record)
    {
        Record->setWindowTitle(QApplication::translate("Record", "Form", 0));
        pushButton->setText(QString());
        pushButton_2->setText(QApplication::translate("Record", "Show parties (MYSQL)", 0));
        pushButton_3->setText(QApplication::translate("Record", "Show Scors (JSON)", 0));
    } // retranslateUi

};

namespace Ui {
    class Record: public Ui_Record {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECORD_H
