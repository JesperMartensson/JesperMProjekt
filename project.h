#ifndef PROJECT_H
#define PROJECT_H

#include <QDialog>

namespace Ui {
class Project;
}

class Project : public QDialog
{
    Q_OBJECT

public:
    explicit Project(QWidget *parent = 0);
    ~Project();

private:
    Ui::Project *ui;
};

#endif // PROJECT_H
