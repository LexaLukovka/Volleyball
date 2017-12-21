#ifndef RECORD_H
#define RECORD_H

#include <QWidget>

#include <QDebug>

#include <QFile>

#include <QStandardItem>
#include <QMessageBox>
#include <QTableWidgetItem>

#include <QtSql/QSqlDatabase>//дл€ хроанени€ св€зи с базой данных
#include <QSqlTableModel> //таблична€ модель
#include <QtSql/QSqlError>

#include <QJsonObject>
#include <QJsonArray>
#include <QJsonParseError>

namespace Ui {
class Record;
}

class Record : public QWidget
{
    Q_OBJECT

public:
    explicit Record(QWidget *parent = 0);
    ~Record();

signals:
    void firstWindow();

private slots:
    void on_back_clicked();
    void on_show_json_clicked();
    void on_show_mysql_clicked();
private:
    Ui::Record *ui;


   QSqlDatabase db;
   QSqlTableModel *model;

    QJsonDocument doc;
    QJsonArray docArr;
    QJsonParseError docError;
    QString globPath;
    QFile file;
};

#endif // RECORD_H
