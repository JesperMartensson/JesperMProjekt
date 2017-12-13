#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include <QDialog>

namespace Ui {
class Department;
}

class Department : public QDialog
{
    Q_OBJECT

public:
    explicit Department(QWidget *parent = 0);
    ~Department();

private:
    Ui::Department *ui;
};

#endif // DEPARTMENT_H
