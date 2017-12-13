#ifndef PORTALFRAMEWORK_H
#define PORTALFRAMEWORK_H

#include <QDialog>

namespace Ui {
class PortalFrameWork;
}

class PortalFrameWork : public QDialog
{
    Q_OBJECT

public:
    explicit PortalFrameWork(QWidget *parent = 0);
    ~PortalFrameWork();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_department_clicked();

    void on_pushButton_projects_clicked();

    void on_pushButton_employees_clicked();


private:
    Ui::PortalFrameWork *ui;
};

#endif // PORTALFRAMEWORK_H
