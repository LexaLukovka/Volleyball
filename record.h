#ifndef RECORD_H
#define RECORD_H

#include <QWidget>

#include <QDebug>

#include <QFile>
#include <QFileDialog>

#include <QStandardItem>
#include <QMessageBox>

#include <QtSql/QSqlDatabase>//��� ��������� ����� � ����� ������
#include <QtSql/QSqlQueryModel> //��� �������� ������ � ���� ����� � �������� ���� ������
#include <QtSql/QSqlQuery> //� ������� �������� ����� ��������� ������� �� ����� SQL
#include <QSqlTableModel>//��������� ������
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
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

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
