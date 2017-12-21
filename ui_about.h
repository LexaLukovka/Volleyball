/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_About
{
public:
    QDialogButtonBox *buttonBox;
    QGraphicsView *graphicsView;

    void setupUi(QDialog *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName(QStringLiteral("About"));
        About->resize(400, 300);
        About->setMinimumSize(QSize(400, 300));
        About->setMaximumSize(QSize(400, 300));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/images/icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        About->setWindowIcon(icon);
        buttonBox = new QDialogButtonBox(About);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(160, 250, 80, 25));
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);
        graphicsView = new QGraphicsView(About);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 400, 300));
        graphicsView->setStyleSheet(QStringLiteral("background-image: url(\":/images/images/about.png\");"));
        graphicsView->raise();
        buttonBox->raise();

        retranslateUi(About);

        QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QDialog *About)
    {
        About->setWindowTitle(QApplication::translate("About", "Developers", 0));
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
