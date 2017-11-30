#include "arf.h"
#include "ui_arf.h"

ArF::ArF(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ArF)
{
    ui->setupUi(this);

    ui->label->setPixmap(QPixmap(":/images/background.png"));
ui->label->setScaledContents(true);


}

ArF::~ArF()
{
    delete ui;
}
