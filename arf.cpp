#include "arf.h"
#include "ui_arf.h"

ArF::ArF(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ArF)
{
    ui->setupUi(this);

    ui->label->setPixmap(QPixmap(":/new/prefix1/Number1"));
ui->label->setScaledContents(true);


}

ArF::~ArF()
{
    delete ui;
}
