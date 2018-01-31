/********************************************************************************
** Form generated from reading UI file 'facelogin.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FACELOGIN_H
#define UI_FACELOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_faceLogin
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QDialog *faceLogin)
    {
        if (faceLogin->objectName().isEmpty())
            faceLogin->setObjectName(QStringLiteral("faceLogin"));
        faceLogin->resize(531, 426);
        label = new QLabel(faceLogin);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(9, 9, 513, 331));
        label_2 = new QLabel(faceLogin);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 379, 371, 41));
        pushButton = new QPushButton(faceLogin);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(420, 374, 89, 41));

        retranslateUi(faceLogin);
        QObject::connect(pushButton, SIGNAL(clicked()), faceLogin, SLOT(close()));

        QMetaObject::connectSlotsByName(faceLogin);
    } // setupUi

    void retranslateUi(QDialog *faceLogin)
    {
        faceLogin->setWindowTitle(QApplication::translate("faceLogin", "Dialog", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QApplication::translate("faceLogin", "tips: \350\257\267\344\277\235\346\214\201\346\255\243\350\204\270\345\244\204\344\272\216\345\233\276\345\203\217\344\270\255\345\277\203", Q_NULLPTR));
        pushButton->setText(QApplication::translate("faceLogin", "\351\200\200\345\207\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class faceLogin: public Ui_faceLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FACELOGIN_H
