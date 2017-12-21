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
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/images/icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Record->setWindowIcon(icon);
        back = new QPushButton(Record);
        back->setObjectName(QStringLiteral("back"));
        back->setGeometry(QRect(10, 10, 30, 50));
        back->setCursor(QCursor(Qt::PointingHandCursor));
        back->setStyleSheet(QLatin1String("background-image: url(\":/images/images/arrow-right.png\");\n"
"background-repeat: no-repeat;\n"
"border: 0;"));
        show_mysql = new QPushButton(Record);
        show_mysql->setObjectName(QStringLiteral("show_mysql"));
        show_mysql->setGeometry(QRect(200, 130, 180, 30));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        show_mysql->setFont(font);
        show_mysql->setCursor(QCursor(Qt::PointingHandCursor));
        show_mysql->setStyleSheet(QLatin1String("background-color: #cb5555;\n"
"border: 2px solid white;\n"
"color: #fff;"));
        show_json = new QPushButton(Record);
        show_json->setObjectName(QStringLiteral("show_json"));
        show_json->setGeometry(QRect(430, 130, 180, 30));
        show_json->setFont(font);
        show_json->setCursor(QCursor(Qt::PointingHandCursor));
        show_json->setStyleSheet(QLatin1String("background-color: #cb5555;\n"
"border: 2px solid white;\n"
"color: #fff;"));
        tableView = new QTableView(Record);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setEnabled(true);
        tableView->setGeometry(QRect(220, 199, 370, 310));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy);
        tableView->setMinimumSize(QSize(0, 0));
        tableView->setMaximumSize(QSize(370, 310));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI"));
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        tableView->setFont(font1);
        tableView->setLayoutDirection(Qt::LeftToRight);
        tableView->setAutoFillBackground(false);
        tableView->setStyleSheet(QLatin1String("background-color: transparent;\n"
"color: #fff;\n"
"border: 0;"));
        tableView->setFrameShape(QFrame::NoFrame);
        tableView->setFrameShadow(QFrame::Plain);
        tableView->setLineWidth(0);
        tableView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableView->setAutoScroll(false);
        tableView->setAutoScrollMargin(0);
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView->setTabKeyNavigation(false);
        tableView->setProperty("showDropIndicator", QVariant(false));
        tableView->setDragEnabled(false);
        tableView->setDragDropOverwriteMode(false);
        tableView->setAlternatingRowColors(false);
        tableView->setSelectionMode(QAbstractItemView::NoSelection);
        tableView->setTextElideMode(Qt::ElideNone);
        tableView->setShowGrid(false);
        tableView->setGridStyle(Qt::NoPen);
        tableView->setSortingEnabled(false);
        tableView->setWordWrap(true);
        tableView->setCornerButtonEnabled(false);
        tableView->horizontalHeader()->setCascadingSectionResizes(false);
        tableView->horizontalHeader()->setHighlightSections(false);
        tableView->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableView->horizontalHeader()->setStretchLastSection(false);
        tableView->verticalHeader()->setVisible(false);
        tableView->verticalHeader()->setHighlightSections(false);
        tableView->verticalHeader()->setMinimumSectionSize(5);
        graphicsView = new QGraphicsView(Record);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 800, 600));
        graphicsView->setMaximumSize(QSize(800, 600));
        graphicsView->setStyleSheet(QStringLiteral("background-image: url(\":/images/images/background-records.png\");"));
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
        Record->setWindowTitle(QApplication::translate("Record", "Records", 0));
        back->setText(QString());
        show_mysql->setText(QApplication::translate("Record", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \320\277\320\260\321\200\321\202\320\270\320\270 (MYSQL)", 0));
        show_json->setText(QApplication::translate("Record", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \320\276\321\207\320\272\320\270 (JSON)", 0));
    } // retranslateUi

};

namespace Ui {
    class Record: public Ui_Record {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECORD_H
