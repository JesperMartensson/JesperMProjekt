#include "department.h"
#include "ui_department.h"

Department::Department(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Department)
{
    ui->setupUi(this);
}

Department::~Department()
{
    delete ui;
}
