/********************************************************************************
** Form generated from reading UI file 'joystickwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JOYSTICKWINDOW_H
#define UI_JOYSTICKWINDOW_H

#include <QtCore/QVariant>
#include <QtQuickWidgets/QQuickWidget>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_JoystickWindow
{
public:
    QWidget *centralWidget;
    QQuickWidget *quickWidget;
    QLabel *pressedButton;

    void setupUi(QMainWindow *VirtualInputDevice)
    {
        if (VirtualInputDevice->objectName().isEmpty())
            VirtualInputDevice->setObjectName(QString::fromUtf8("VirtualInputDevice"));
        VirtualInputDevice->resize(461, 419);
        centralWidget = new QWidget(VirtualInputDevice);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        quickWidget = new QQuickWidget(centralWidget);
        quickWidget->setObjectName(QString::fromUtf8("quickWidget"));
        quickWidget->setGeometry(QRect(0, 0, 411, 381));
        quickWidget->setResizeMode(QQuickWidget::SizeRootObjectToView);
        pressedButton = new QLabel(centralWidget);
        pressedButton->setObjectName(QString::fromUtf8("pressedButton"));
        pressedButton->setGeometry(QRect(10, 400, 331, 17));
        VirtualInputDevice->setCentralWidget(centralWidget);

        retranslateUi(VirtualInputDevice);

        QMetaObject::connectSlotsByName(VirtualInputDevice);
    } // setupUi

    void retranslateUi(QMainWindow *VirtualInputDevice)
    {
        VirtualInputDevice->setWindowTitle(QApplication::translate("JoystickWindow", "TOD VirtualInputDevice", nullptr));
        pressedButton->setText(QApplication::translate("JoystickWindow", "Button:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JoystickWindow: public Ui_JoystickWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JOYSTICKWINDOW_H
