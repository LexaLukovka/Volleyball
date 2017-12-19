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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Authentication
{
public:
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Authentication)
    {
        if (Authentication->objectName().isEmpty())
            Authentication->setObjectName(QStringLiteral("Authentication"));
        Authentication->resize(553, 300);
        QFont font;
        font.setPointSize(10);
        Authentication->setFont(font);
        lineEdit = new QLineEdit(Authentication);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(70, 200, 141, 20));
        lineEdit_2 = new QLineEdit(Authentication);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(360, 200, 141, 20));
        lineEdit_2->setFont(font);
        pushButton = new QPushButton(Authentication);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(0, 0, 75, 23));
        pushButton_2 = new QPushButton(Authentication);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(240, 100, 75, 23));
        pushButton_2->setFont(font);

        retranslateUi(Authentication);

        QMetaObject::connectSlotsByName(Authentication);
    } // setupUi

    void retranslateUi(QWidget *Authentication)
    {
        Authentication->setWindowTitle(QApplication::translate("Authentication", "Form", 0));
        pushButton->setText(QApplication::translate("Authentication", "Back", 0));
        pushButton_2->setText(QApplication::translate("Authentication", "Game", 0));
    } // retranslateUi

};

namespace Ui {
    class Authentication: public Ui_Authentication {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHENTICATION_H
