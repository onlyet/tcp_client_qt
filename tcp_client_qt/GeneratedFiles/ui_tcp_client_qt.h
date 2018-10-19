/********************************************************************************
** Form generated from reading UI file 'tcp_client_qt.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCP_CLIENT_QT_H
#define UI_TCP_CLIENT_QT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tcp_client_qtClass
{
public:

    void setupUi(QWidget *tcp_client_qtClass)
    {
        if (tcp_client_qtClass->objectName().isEmpty())
            tcp_client_qtClass->setObjectName(QStringLiteral("tcp_client_qtClass"));
        tcp_client_qtClass->resize(600, 400);

        retranslateUi(tcp_client_qtClass);

        QMetaObject::connectSlotsByName(tcp_client_qtClass);
    } // setupUi

    void retranslateUi(QWidget *tcp_client_qtClass)
    {
        tcp_client_qtClass->setWindowTitle(QApplication::translate("tcp_client_qtClass", "tcp_client_qt", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class tcp_client_qtClass: public Ui_tcp_client_qtClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCP_CLIENT_QT_H
