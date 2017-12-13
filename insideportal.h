#ifndef INSIDEPORTAL_H
#define INSIDEPORTAL_H

#include <QMainWindow>

namespace Ui {
class InsidePortal;
}

class InsidePortal : public QMainWindow
{
    Q_OBJECT

public:
    explicit InsidePortal(QWidget *parent = 0);
    ~InsidePortal();

private:
    Ui::InsidePortal *ui;
};

#endif // INSIDEPORTAL_H
