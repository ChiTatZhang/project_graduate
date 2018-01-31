/********************************************************************************
** Form generated from reading UI file 'getphoto.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETPHOTO_H
#define UI_GETPHOTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_getPhoto
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QListWidget *listWidget;
    QPushButton *pushButton_2;

    void setupUi(QDialog *getPhoto)
    {
        if (getPhoto->objectName().isEmpty())
            getPhoto->setObjectName(QStringLiteral("getPhoto"));
        getPhoto->resize(694, 446);
        label = new QLabel(getPhoto);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 30, 400, 300));
        pushButton = new QPushButton(getPhoto);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(410, 390, 89, 31));
        listWidget = new QListWidget(getPhoto);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(520, 20, 171, 421));
        pushButton_2 = new QPushButton(getPhoto);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(310, 390, 89, 31));

        retranslateUi(getPhoto);

        QMetaObject::connectSlotsByName(getPhoto);
    } // setupUi

    void retranslateUi(QDialog *getPhoto)
    {
        getPhoto->setWindowTitle(QApplication::translate("getPhoto", "Dialog", Q_NULLPTR));
        label->setText(QString());
        pushButton->setText(QApplication::translate("getPhoto", "\346\213\215\347\205\247", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("getPhoto", "\351\200\200\345\207\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class getPhoto: public Ui_getPhoto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETPHOTO_H
