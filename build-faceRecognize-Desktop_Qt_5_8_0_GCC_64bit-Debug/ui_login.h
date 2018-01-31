/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *username;
    QLineEdit *lineEdit_username;
    QHBoxLayout *horizontalLayout_2;
    QLabel *passwd;
    QLineEdit *lineEdit_passwd;
    QLabel *label;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QStringLiteral("login"));
        login->resize(290, 173);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(login->sizePolicy().hasHeightForWidth());
        login->setSizePolicy(sizePolicy);
        login->setMinimumSize(QSize(280, 150));
        login->setMaximumSize(QSize(400, 300));
        gridLayout = new QGridLayout(login);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        username = new QLabel(login);
        username->setObjectName(QStringLiteral("username"));

        horizontalLayout->addWidget(username);

        lineEdit_username = new QLineEdit(login);
        lineEdit_username->setObjectName(QStringLiteral("lineEdit_username"));

        horizontalLayout->addWidget(lineEdit_username);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        passwd = new QLabel(login);
        passwd->setObjectName(QStringLiteral("passwd"));

        horizontalLayout_2->addWidget(passwd);

        lineEdit_passwd = new QLineEdit(login);
        lineEdit_passwd->setObjectName(QStringLiteral("lineEdit_passwd"));
        lineEdit_passwd->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lineEdit_passwd);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 2);

        label = new QLabel(login);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 2, 0, 1, 2);

        pushButton_2 = new QPushButton(login);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 3, 0, 1, 1);

        pushButton = new QPushButton(login);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 3, 1, 1, 1);


        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QApplication::translate("login", "Dialog", Q_NULLPTR));
        username->setText(QApplication::translate("login", "\345\270\220\345\217\267\357\274\232", Q_NULLPTR));
        passwd->setText(QApplication::translate("login", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        label->setText(QString());
        pushButton_2->setText(QApplication::translate("login", "\345\217\226\346\266\210", Q_NULLPTR));
        pushButton->setText(QApplication::translate("login", "\347\231\273\345\275\225", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
