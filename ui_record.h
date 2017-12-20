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
    QPushButton *back;
    QPushButton *show_mysql;
    QPushButton *show_json;
    QTableView *tableView;
    QGraphicsView *graphicsView;

    void setupUi(QWidget *Record)
    {
        if (Record->objectName().isEmpty())
            Record->setObjectName(QStringLiteral("Record"));
        Record->resize(800, 600);
        Record->setMaximumSize(QSize(800, 600));
        back = new QPushButton(Record);
        back->setObjectName(QStringLiteral("back"));
        back->setGeometry(QRect(10, 10, 30, 50));
        back->setCursor(QCursor(Qt::PointingHandCursor));
        back->setStyleSheet(QLatin1String("background-image: url(\":/images/images/arrow-right.png\");\n"
"background-repeat: no-repeat;\n"
"border: 0;"));
        show_mysql = new QPushButton(Record);
        show_mysql->setObjectName(QStringLiteral("show_mysql"));
        show_mysql->setGeometry(QRect(90, 60, 151, 23));
        QFont font;
        font.setPointSize(10);
        show_mysql->setFont(font);
        show_json = new QPushButton(Record);
        show_json->setObjectName(QStringLiteral("show_json"));
        show_json->setGeometry(QRect(580, 60, 131, 23));
        show_json->setFont(font);
        tableView = new QTableView(Record);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(170, 110, 443, 431));
        tableView->setLayoutDirection(Qt::LeftToRight);
        tableView->setFrameShape(QFrame::VLine);
        tableView->setFrameShadow(QFrame::Sunken);
        graphicsView = new QGraphicsView(Record);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 800, 600));
        graphicsView->setMaximumSize(QSize(800, 600));
        graphicsView->setStyleSheet(QStringLiteral("background-image: url(\":/images/images/background-empty.png\") ;"));
        graphicsView->raise();
        back->raise();
        show_mysql->raise();
        show_json->raise();
        tableView->raise();

        retranslateUi(Record);

        QMetaObject::connectSlotsByName(Record);
    } // setupUi

    void retranslateUi(QWidget *Record)
    {
        Record->setWindowTitle(QApplication::translate("Record", "Form", 0));
        back->setText(QString());
        show_mysql->setText(QApplication::translate("Record", "Show parties (MYSQL)", 0));
        show_json->setText(QApplication::translate("Record", "Show Scors (JSON)", 0));
    } // retranslateUi

};

namespace Ui {
    class Record: public Ui_Record {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECORD_H
