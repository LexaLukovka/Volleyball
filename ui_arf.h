/********************************************************************************
** Form generated from reading UI file 'arf.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
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
    QLabel *label_2;

    void setupUi(QWidget *ArF)
    {
        if (ArF->objectName().isEmpty())
            ArF->setObjectName(QStringLiteral("ArF"));
        ArF->resize(307, 358);
        label = new QLabel(ArF);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 0, 291, 361));
        label_2 = new QLabel(ArF);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 325, 241, 31));
        label_2->setStyleSheet(QLatin1String("font: 20pt \"Book Antiqua\";\n"
"background-image: url(:/new/prefix1/Button);\n"
"color: rgb(252, 253, 255);"));

        retranslateUi(ArF);

        QMetaObject::connectSlotsByName(ArF);
    } // setupUi

    void retranslateUi(QWidget *ArF)
    {
        ArF->setWindowTitle(QApplication::translate("ArF", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("ArF", "TextLabel", Q_NULLPTR));
        label_2->setText(QApplication::translate("ArF", "  OLEG TURIKOV", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ArF: public Ui_ArF {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARF_H
