#include "portalframework.h"
#include "ui_portalframework.h"
#include <QMessageBox>
#include "employee.h"
#include "department.h"
#include "project.h"


PortalFrameWork::PortalFrameWork(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PortalFrameWork)
{
    ui->setupUi(this);

    ui->listWidget_employees->addItem("Employee 1");
    ui->listWidget_employees->addItem("Employee 2");
    ui->listWidget_employees->addItem("Employee 3");
    ui->listWidget_employees->addItem("Employee 4");

    ui->listWidget_departments->addItem("Department 1");
    ui->listWidget_departments->addItem("Department 2");
    ui->listWidget_departments->addItem("Department 3");

    ui->listWidget_projects->addItem("Project 1");
    ui->listWidget_projects->addItem("Project 2");
    ui->listWidget_projects->addItem("Project 3");
}

PortalFrameWork::~PortalFrameWork()
{
    delete ui;
}

void PortalFrameWork::on_pushButton_employees_clicked()
{
    Employee employee;
   // hide();
    employee.setModal(true);
    employee.exec();
}

void PortalFrameWork::on_pushButton_department_clicked()
{
    Department department;
   // hide();
    department.setModal(true);
    department.exec();
}

void PortalFrameWork::on_pushButton_projects_clicked()
{
    Project project;
   // hide();
    project.setModal(true);
    project.exec();
}


