#ifndef NEWORDER_H
#define NEWORDER_H

#include <QDialog>
#include<QDate>
namespace Ui {
class NewOrder;
}

class NewOrder : public QDialog
{
    Q_OBJECT

public:
    explicit NewOrder(QWidget *parent = nullptr);
    ~NewOrder();
    QDate get_date();
    void setdate(QDate);
    QDate tmpdate;
private slots:

    void on_confirm_accepted();


private:
    Ui::NewOrder *ui;
    ;
};

#endif // NEWORDER_H
