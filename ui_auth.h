/********************************************************************************
** Form generated from reading UI file 'auth.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTH_H
#define UI_AUTH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Auth
{
public:
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;

    void setupUi(QWidget *Auth)
    {
        if (Auth->objectName().isEmpty())
            Auth->setObjectName(QStringLiteral("Auth"));
        Auth->resize(494, 300);
        lineEdit = new QLineEdit(Auth);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(40, 200, 141, 20));
        QFont font;
        font.setPointSize(10);
        lineEdit->setFont(font);
        lineEdit_2 = new QLineEdit(Auth);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(280, 200, 141, 20));

        retranslateUi(Auth);

        QMetaObject::connectSlotsByName(Auth);
    } // setupUi

    void retranslateUi(QWidget *Auth)
    {
        Auth->setWindowTitle(QApplication::translate("Auth", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class Auth: public Ui_Auth {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTH_H
