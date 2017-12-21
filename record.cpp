#include "record.h"
#include "ui_record.h"

Record::Record(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Record)
{
    ui->setupUi(this);

    ui->tableView->setStyleSheet("QHeaderView::section {background-color: transparent; color: #fff; solid; height: 40px; font-weight: bold; font-size: 16px;}"
                                 "QHeaderView {background-color: transparent; border-bottom-width: 2px; border-bottom-color: #fff; border-bottom-style: solid; margin-bottom: 10px;}"
                                 "QTableView {background-color: transparent; color: #fff;}");
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

Record::~Record()
{
    delete ui;
}

void Record::on_back_clicked()
{
    this->close();
    emit firstWindow();
}

void Record::on_show_json_clicked()
{
    globPath = "db.json";
    file.setFileName(globPath);

    if(file.open(QIODevice::ReadOnly|QFile::Text)){
        doc = QJsonDocument::fromJson(QByteArray(file.readAll()),&docError);
        file.close();
        if(docError.errorString().toInt()==QJsonParseError::NoError)
        {
            QStandardItemModel *model = new QStandardItemModel(nullptr);
            model->setHorizontalHeaderLabels(QStringList()<<"Player1"<<"Score1"<<"Score2"<<"Player2");

            docArr = QJsonValue(doc.object().value("players")).toArray();
            for(int i=0;i<docArr.count();i++){
                QStandardItem *item_col_1 = new QStandardItem(docArr.at(i).toObject().value("Player_1").toString());
                QStandardItem *item_col_2= new QStandardItem(QString::number(docArr.at(i).toObject().value("Score_1").toInt()));
                QStandardItem *item_col_3= new QStandardItem(QString::number(docArr.at(i).toObject().value("Score_2").toInt()));
                QStandardItem *item_col_4 = new QStandardItem(docArr.at(i).toObject().value("Player_2").toString());

                model->appendRow(QList<QStandardItem*>()<<item_col_1<<item_col_2<<item_col_3<<item_col_4);

                ui->tableView->setModel(model);
            }
        }
    }
    else
        QMessageBox::information(nullptr, "info", "File is't open for read");

}

void Record::on_show_mysql_clicked()
{
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setUserName("root");
    db.setDatabaseName("voleyball");
    db.setPassword("root");
    db.setHostName("localhost");
    db.setPort(3306);

    if(db.open()){
        model = new QSqlTableModel(this, db);
        model->setTable("volleyball");
        model->select();
        ui->tableView->setModel(model);
    }

    else
        QMessageBox::information(nullptr, "info", db.lastError().text());
}
