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

    void setupUi(QWidget *Record)
    {
        if (Record->objectName().isEmpty())
            Record->setObjectName(QStringLiteral("Record"));
        Record->resize(446, 349);
        pushButton = new QPushButton(Record);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(0, 0, 75, 23));
        pushButton_2 = new QPushButton(Record);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(80, 60, 75, 23));
        pushButton_3 = new QPushButton(Record);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(260, 60, 75, 23));
        tableView = new QTableView(Record);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(90, 110, 256, 192));

        retranslateUi(Record);

        QMetaObject::connectSlotsByName(Record);
    } // setupUi

    void retranslateUi(QWidget *Record)
    {
        Record->setWindowTitle(QApplication::translate("Record", "Form", 0));
        pushButton->setText(QApplication::translate("Record", "Back", 0));
        pushButton_2->setText(QApplication::translate("Record", "Show MYSQL", 0));
        pushButton_3->setText(QApplication::translate("Record", "Show JSON", 0));
    } // retranslateUi

};

namespace Ui {
    class Record: public Ui_Record {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECORD_H
