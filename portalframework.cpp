#include "portalframework.h"
#include "ui_portalframework.h"

PortalFrameWork::PortalFrameWork(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PortalFrameWork)
{
    ui->setupUi(this);
}

PortalFrameWork::~PortalFrameWork()
{
    delete ui;
}
