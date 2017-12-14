/********************************************************************************
** Form generated from reading UI file 'arf.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARF_H
#define UI_ARF_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ArF
{
public:
    QLabel *label;

    void setupUi(QWidget *ArF)
    {
        if (ArF->objectName().isEmpty())
            ArF->setObjectName(QStringLiteral("ArF"));
        ArF->resize(307, 358);
        label = new QLabel(ArF);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 0, 291, 361));

        retranslateUi(ArF);

        QMetaObject::connectSlotsByName(ArF);
    } // setupUi

    void retranslateUi(QWidget *ArF)
    {
        ArF->setWindowTitle(QApplication::translate("ArF", "Form", 0));
        label->setText(QApplication::translate("ArF", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class ArF: public Ui_ArF {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARF_H
