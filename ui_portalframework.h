/********************************************************************************
** Form generated from reading UI file 'portalframework.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PORTALFRAMEWORK_H
#define UI_PORTALFRAMEWORK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PortalFrameWork
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label;

    void setupUi(QDialog *PortalFrameWork)
    {
        if (PortalFrameWork->objectName().isEmpty())
            PortalFrameWork->setObjectName(QStringLiteral("PortalFrameWork"));
        PortalFrameWork->resize(640, 480);
        layoutWidget = new QWidget(PortalFrameWork);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 341, 101));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font;
        font.setPointSize(23);
        label_3->setFont(font);

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font1;
        font1.setPointSize(15);
        label_4->setFont(font1);

        verticalLayout_2->addWidget(label_4);

        label = new QLabel(PortalFrameWork);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 180, 271, 131));
        QFont font2;
        font2.setFamily(QStringLiteral("Vivaldi"));
        font2.setPointSize(22);
        label->setFont(font2);

        retranslateUi(PortalFrameWork);

        QMetaObject::connectSlotsByName(PortalFrameWork);
    } // setupUi

    void retranslateUi(QDialog *PortalFrameWork)
    {
        PortalFrameWork->setWindowTitle(QApplication::translate("PortalFrameWork", "Dialog", Q_NULLPTR));
        label_3->setText(QApplication::translate("PortalFrameWork", "Business portal", Q_NULLPTR));
        label_4->setText(QApplication::translate("PortalFrameWork", "'Name of Company'", Q_NULLPTR));
        label->setText(QApplication::translate("PortalFrameWork", "Welcome boss!", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PortalFrameWork: public Ui_PortalFrameWork {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PORTALFRAMEWORK_H
