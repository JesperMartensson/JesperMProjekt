#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "portalframework.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();

    if (username == "test" && password == "test")
    {
        PortalFrameWork portalFrameWork;
        hide();
        portalFrameWork.setModal(true);
        portalFrameWork.exec();
    }
    else
    {
        QMessageBox::warning(this, "Login", "Wrong username or password");
    }
}
