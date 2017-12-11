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

private:
    Ui::PortalFrameWork *ui;
};

#endif // PORTALFRAMEWORK_H
