/********************************************************************************
** Form generated from reading UI file 'vacateapply.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VACATEAPPLY_H
#define UI_VACATEAPPLY_H

#include <QtCore/QDate>
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
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_vacateApply
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label;
    QLabel *label_tips;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_id;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *lineEdit_name;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QDateTimeEdit *dateTimeEdit_action;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QDateTimeEdit *dateTimeEdit_end;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer;
    QLabel *label_6;
    QLineEdit *lineEdit_day;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_8;
    QLineEdit *lineEdit_cause;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *vacateApply)
    {
        if (vacateApply->objectName().isEmpty())
            vacateApply->setObjectName(QStringLiteral("vacateApply"));
        vacateApply->resize(615, 472);
        gridLayout = new QGridLayout(vacateApply);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label = new QLabel(vacateApply);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_8->addWidget(label);

        label_tips = new QLabel(vacateApply);
        label_tips->setObjectName(QStringLiteral("label_tips"));
        label_tips->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_8->addWidget(label_tips);


        gridLayout->addLayout(horizontalLayout_8, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(vacateApply);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit_id = new QLineEdit(vacateApply);
        lineEdit_id->setObjectName(QStringLiteral("lineEdit_id"));

        horizontalLayout->addWidget(lineEdit_id);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_5 = new QLabel(vacateApply);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_4->addWidget(label_5);

        lineEdit_name = new QLineEdit(vacateApply);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));

        horizontalLayout_4->addWidget(lineEdit_name);


        gridLayout->addLayout(horizontalLayout_4, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(vacateApply);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        dateTimeEdit_action = new QDateTimeEdit(vacateApply);
        dateTimeEdit_action->setObjectName(QStringLiteral("dateTimeEdit_action"));
        dateTimeEdit_action->setDate(QDate(2018, 1, 1));

        horizontalLayout_2->addWidget(dateTimeEdit_action);


        gridLayout->addLayout(horizontalLayout_2, 3, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(vacateApply);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        dateTimeEdit_end = new QDateTimeEdit(vacateApply);
        dateTimeEdit_end->setObjectName(QStringLiteral("dateTimeEdit_end"));
        dateTimeEdit_end->setDate(QDate(2018, 1, 1));

        horizontalLayout_3->addWidget(dateTimeEdit_end);


        gridLayout->addLayout(horizontalLayout_3, 4, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer = new QSpacerItem(475, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        label_6 = new QLabel(vacateApply);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMaximumSize(QSize(25, 25));

        horizontalLayout_7->addWidget(label_6);

        lineEdit_day = new QLineEdit(vacateApply);
        lineEdit_day->setObjectName(QStringLiteral("lineEdit_day"));
        lineEdit_day->setMaximumSize(QSize(51, 25));

        horizontalLayout_7->addWidget(lineEdit_day);

        label_7 = new QLabel(vacateApply);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMaximumSize(QSize(25, 25));

        horizontalLayout_7->addWidget(label_7);


        gridLayout->addLayout(horizontalLayout_7, 5, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_8 = new QLabel(vacateApply);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_6->addWidget(label_8);

        lineEdit_cause = new QLineEdit(vacateApply);
        lineEdit_cause->setObjectName(QStringLiteral("lineEdit_cause"));

        horizontalLayout_6->addWidget(lineEdit_cause);


        gridLayout->addLayout(horizontalLayout_6, 6, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        pushButton = new QPushButton(vacateApply);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_5->addWidget(pushButton);


        gridLayout->addLayout(horizontalLayout_5, 7, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 203, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 8, 0, 1, 1);


        retranslateUi(vacateApply);

        QMetaObject::connectSlotsByName(vacateApply);
    } // setupUi

    void retranslateUi(QDialog *vacateApply)
    {
        vacateApply->setWindowTitle(QApplication::translate("vacateApply", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("vacateApply", "<html><head/><body><p><span style=\" font-size:20pt; color:#f57900;\">\350\257\267\345\201\207\347\224\263\350\257\267\357\274\232</span></p></body></html>", Q_NULLPTR));
        label_tips->setText(QString());
        label_2->setText(QApplication::translate("vacateApply", "\345\221\230\345\267\245\345\217\267\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("vacateApply", "\345\220\215\347\247\260\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("vacateApply", "\345\274\200\345\247\213\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        dateTimeEdit_action->setDisplayFormat(QApplication::translate("vacateApply", "yyyy-MM-dd hh:mm", Q_NULLPTR));
        label_4->setText(QApplication::translate("vacateApply", "\347\273\223\346\235\237\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        dateTimeEdit_end->setDisplayFormat(QApplication::translate("vacateApply", "yyyy-MM-dd hh:mm", Q_NULLPTR));
        label_6->setText(QApplication::translate("vacateApply", "\345\205\261", Q_NULLPTR));
        label_7->setText(QApplication::translate("vacateApply", "\345\244\251", Q_NULLPTR));
        label_8->setText(QApplication::translate("vacateApply", "\350\257\267\345\201\207\345\216\237\345\233\240\357\274\232", Q_NULLPTR));
        pushButton->setText(QApplication::translate("vacateApply", "\346\217\220\344\272\244", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class vacateApply: public Ui_vacateApply {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VACATEAPPLY_H
