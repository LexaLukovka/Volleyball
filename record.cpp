#include "record.h"
#include "ui_record.h"

Record::Record(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Record)
{
    ui->setupUi(this);
}


Record::~Record()
{
    delete ui;
}

void Record::on_pushButton_clicked()
{
    this->close();
    emit firstWindow();// ???????? ?????? ?? ???????? ???????? ????
}

void Record::on_pushButton_2_clicked()
{
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setUserName("root");
    db.setDatabaseName("voleyball");
    db.setPassword("root");
    db.setHostName("localhost");
    db.setPort(3306);

    if(db.open()){
        model = new QSqlTableModel(this, db);
        model->setTable("volleyball");//??? ???????
        model->select();//???????? ???????? ?? ????
        ui->tableView->setModel(model);
    }

    else
        QMessageBox::information(nullptr, "info", db.lastError().text());
}

void Record::on_pushButton_3_clicked()
{
//    globPath = QFileDialog::getOpenFileName(nullptr,"","D:\\Institut\\Kod\\2 Kurs\\Kursova\\Testdb\\testdb", "*.json");
    globPath = "./db.json";
    file.setFileName(globPath);

    if(file.open(QIODevice::ReadOnly|QFile::Text)){
        doc = QJsonDocument::fromJson(QByteArray(file.readAll()),&docError);
        file.close();
        if(docError.errorString().toInt()==QJsonParseError::NoError)
        {
            QStandardItemModel *model = new QStandardItemModel(nullptr);
            model->setHorizontalHeaderLabels(QStringList()<<"Player_1"<<"Score_1"<<"Score_2"<<"Player_2");

            docArr = QJsonValue(doc.object().value("players")).toArray();
            for(int i=0;i<docArr.count();i++){
                QStandardItem *item_col_1 = new QStandardItem(docArr.at(i).toObject().value("Player_1").toString());
                QStandardItem *item_col_2= new QStandardItem(QString::number(docArr.at(i).toObject().value("Score_1").toInt()));
                QStandardItem *item_col_3= new QStandardItem(QString::number(docArr.at(i).toObject().value("Score_2").toInt()));
                QStandardItem *item_col_4 = new QStandardItem(docArr.at(i).toObject().value("Player_2").toString());


                model->appendRow(QList<QStandardItem*>()<<item_col_1<<item_col_2<<item_col_3<<item_col_4);

                ui->tableView->setModel(model);
//                ui->tableView->resizeColumnsToContents();
            }
        }
    }
    else
        QMessageBox::information(nullptr, "info", "File is't open for read");

}
