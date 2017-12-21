#include "winner.h"
#include "ui_winner.h"

Winner::Winner(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Winner)
{
    ui->setupUi(this);
}

Winner::~Winner()
{
    delete ui;
}

void Winner::on_YES_clicked()
{
    this->close();
}

void Winner::on_NO_clicked()
{
    this->close();
}
