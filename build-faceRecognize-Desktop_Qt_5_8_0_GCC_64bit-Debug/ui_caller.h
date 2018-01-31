/********************************************************************************
** Form generated from reading UI file 'caller.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALLER_H
#define UI_CALLER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_caller
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QLabel *label_tips;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *lineEdit_name;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *lineEdit_obj;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QDateTimeEdit *dateTimeEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QTextEdit *textEdit;

    void setupUi(QDialog *caller)
    {
        if (caller->objectName().isEmpty())
            caller->setObjectName(QStringLiteral("caller"));
        caller->resize(814, 439);
        gridLayout = new QGridLayout(caller);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_2 = new QLabel(caller);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_5->addWidget(label_2);

        label_tips = new QLabel(caller);
        label_tips->setObjectName(QStringLiteral("label_tips"));
        label_tips->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_tips);


        gridLayout->addLayout(horizontalLayout_5, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(caller);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        lineEdit_name = new QLineEdit(caller);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));

        horizontalLayout->addWidget(lineEdit_name);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(caller);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        lineEdit_obj = new QLineEdit(caller);
        lineEdit_obj->setObjectName(QStringLiteral("lineEdit_obj"));

        horizontalLayout_2->addWidget(lineEdit_obj);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_5 = new QLabel(caller);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_3->addWidget(label_5);

        dateTimeEdit = new QDateTimeEdit(caller);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));
        dateTimeEdit->setDateTime(QDateTime(QDate(2018, 1, 9), QTime(0, 0, 0)));

        horizontalLayout_3->addWidget(dateTimeEdit);


        gridLayout->addLayout(horizontalLayout_3, 3, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_6 = new QLabel(caller);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_4->addWidget(label_6);

        pushButton = new QPushButton(caller);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMaximumSize(QSize(105, 31));

        horizontalLayout_4->addWidget(pushButton);

        pushButton_3 = new QPushButton(caller);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMaximumSize(QSize(105, 31));

        horizontalLayout_4->addWidget(pushButton_3);


        gridLayout->addLayout(horizontalLayout_4, 4, 0, 1, 1);

        textEdit = new QTextEdit(caller);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        gridLayout->addWidget(textEdit, 5, 0, 1, 1);


        retranslateUi(caller);

        QMetaObject::connectSlotsByName(caller);
    } // setupUi

    void retranslateUi(QDialog *caller)
    {
        caller->setWindowTitle(QApplication::translate("caller", "\350\256\277\345\256\242\347\256\241\347\220\206", Q_NULLPTR));
        label_2->setText(QApplication::translate("caller", "<html><head/><body><p><span style=\" font-size:16pt; color:#f57900;\">\350\256\277\345\256\242\347\231\273\350\256\260\357\274\232</span></p></body></html>", Q_NULLPTR));
        label_tips->setText(QString());
        label_3->setText(QApplication::translate("caller", "\345\247\223\345\220\215 \357\274\232        ", Q_NULLPTR));
        label_4->setText(QApplication::translate("caller", "\350\256\277\351\227\256\345\257\271\350\261\241 \357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("caller", "\346\235\245\350\256\277\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        dateTimeEdit->setDisplayFormat(QApplication::translate("caller", "yyyy-MM-dd hh:mm:ss", Q_NULLPTR));
        label_6->setText(QApplication::translate("caller", "\346\235\245\350\256\277\347\274\230\347\224\261 \357\274\232", Q_NULLPTR));
        pushButton->setText(QApplication::translate("caller", "\345\274\200\351\227\250", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("caller", "\347\231\273\350\256\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class caller: public Ui_caller {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALLER_H
