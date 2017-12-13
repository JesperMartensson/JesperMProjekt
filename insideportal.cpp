#include "insideportal.h"
#include "ui_insideportal.h"

InsidePortal::InsidePortal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::InsidePortal)
{
    ui->setupUi(this);
}

InsidePortal::~InsidePortal()
{
    delete ui;
}
