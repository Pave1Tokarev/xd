#include "neworder.h"
#include "ui_neworder.h"
#include<QDate>
#include<QString>
NewOrder::NewOrder(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewOrder)
{
    ui->setupUi(this);

}

NewOrder::~NewOrder()
{
    delete ui;
}

void NewOrder::on_confirm_accepted()
{
    QString lt=ui->dateedit->toPlainText();
    std::string ht=lt.toStdString();
    QDate dt(stoi(std::to_string(ht[6]+ht[7]+ht[8]+ht[9])),stoi(std::to_string(ht[3]+ht[4])),stoi(std::to_string(ht[0]+ht[1])));
    tmpdate=dt;

}
QDate NewOrder::get_date(){
    return tmpdate;
}
void NewOrder::setdate(QDate a){
    tmpdate=a;
}
