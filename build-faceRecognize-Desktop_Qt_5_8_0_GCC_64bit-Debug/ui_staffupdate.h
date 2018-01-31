/********************************************************************************
** Form generated from reading UI file 'staffupdate.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAFFUPDATE_H
#define UI_STAFFUPDATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_staffUpdate
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLabel *label_tips;
    QHBoxLayout *horizontalLayout;
    QLabel *label_15;
    QLineEdit *lineEdit_id;
    QPushButton *okButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_16;
    QLineEdit *lineEdit_name;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_19;
    QLineEdit *lineEdit_tel;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_18;
    QLineEdit *lineEdit_emil;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_11;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_17;
    QLineEdit *lineEdit_jobtitle;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_20;
    QLineEdit *lineEdit_startTime;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_21;
    QLineEdit *lineEdit_authority;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_22;
    QLineEdit *lineEdit_passwd;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_23;
    QLineEdit *lineEdit_leader;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *tijiaoButton;
    QPushButton *cacleButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *staffUpdate)
    {
        if (staffUpdate->objectName().isEmpty())
            staffUpdate->setObjectName(QStringLiteral("staffUpdate"));
        staffUpdate->resize(592, 585);
        gridLayout = new QGridLayout(staffUpdate);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_5 = new QLabel(staffUpdate);
        label_5->setObjectName(QStringLiteral("label_5"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setMinimumSize(QSize(0, 32));
        label_5->setMaximumSize(QSize(16777215, 32));

        horizontalLayout_3->addWidget(label_5);

        label_tips = new QLabel(staffUpdate);
        label_tips->setObjectName(QStringLiteral("label_tips"));
        sizePolicy.setHeightForWidth(label_tips->sizePolicy().hasHeightForWidth());
        label_tips->setSizePolicy(sizePolicy);
        label_tips->setMinimumSize(QSize(0, 32));
        label_tips->setMaximumSize(QSize(16777215, 32));

        horizontalLayout_3->addWidget(label_tips);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_15 = new QLabel(staffUpdate);
        label_15->setObjectName(QStringLiteral("label_15"));

        horizontalLayout->addWidget(label_15);

        lineEdit_id = new QLineEdit(staffUpdate);
        lineEdit_id->setObjectName(QStringLiteral("lineEdit_id"));

        horizontalLayout->addWidget(lineEdit_id);

        okButton = new QPushButton(staffUpdate);
        okButton->setObjectName(QStringLiteral("okButton"));

        horizontalLayout->addWidget(okButton);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_16 = new QLabel(staffUpdate);
        label_16->setObjectName(QStringLiteral("label_16"));

        horizontalLayout_2->addWidget(label_16);

        lineEdit_name = new QLineEdit(staffUpdate);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));
        lineEdit_name->setEnabled(false);

        horizontalLayout_2->addWidget(lineEdit_name);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_19 = new QLabel(staffUpdate);
        label_19->setObjectName(QStringLiteral("label_19"));

        horizontalLayout_10->addWidget(label_19);

        lineEdit_tel = new QLineEdit(staffUpdate);
        lineEdit_tel->setObjectName(QStringLiteral("lineEdit_tel"));
        lineEdit_tel->setEnabled(false);

        horizontalLayout_10->addWidget(lineEdit_tel);


        gridLayout->addLayout(horizontalLayout_10, 3, 0, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_18 = new QLabel(staffUpdate);
        label_18->setObjectName(QStringLiteral("label_18"));

        horizontalLayout_11->addWidget(label_18);

        lineEdit_emil = new QLineEdit(staffUpdate);
        lineEdit_emil->setObjectName(QStringLiteral("lineEdit_emil"));
        lineEdit_emil->setEnabled(false);

        horizontalLayout_11->addWidget(lineEdit_emil);


        gridLayout->addLayout(horizontalLayout_11, 4, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_11 = new QLabel(staffUpdate);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_9->addWidget(label_11);

        comboBox = new QComboBox(staffUpdate);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setEnabled(false);

        horizontalLayout_9->addWidget(comboBox);


        gridLayout->addLayout(horizontalLayout_9, 5, 0, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_17 = new QLabel(staffUpdate);
        label_17->setObjectName(QStringLiteral("label_17"));

        horizontalLayout_13->addWidget(label_17);

        lineEdit_jobtitle = new QLineEdit(staffUpdate);
        lineEdit_jobtitle->setObjectName(QStringLiteral("lineEdit_jobtitle"));
        lineEdit_jobtitle->setEnabled(false);

        horizontalLayout_13->addWidget(lineEdit_jobtitle);


        gridLayout->addLayout(horizontalLayout_13, 6, 0, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_20 = new QLabel(staffUpdate);
        label_20->setObjectName(QStringLiteral("label_20"));

        horizontalLayout_12->addWidget(label_20);

        lineEdit_startTime = new QLineEdit(staffUpdate);
        lineEdit_startTime->setObjectName(QStringLiteral("lineEdit_startTime"));
        lineEdit_startTime->setEnabled(false);

        horizontalLayout_12->addWidget(lineEdit_startTime);


        gridLayout->addLayout(horizontalLayout_12, 7, 0, 1, 1);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label_21 = new QLabel(staffUpdate);
        label_21->setObjectName(QStringLiteral("label_21"));

        horizontalLayout_15->addWidget(label_21);

        lineEdit_authority = new QLineEdit(staffUpdate);
        lineEdit_authority->setObjectName(QStringLiteral("lineEdit_authority"));
        lineEdit_authority->setEnabled(false);

        horizontalLayout_15->addWidget(lineEdit_authority);


        gridLayout->addLayout(horizontalLayout_15, 8, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_22 = new QLabel(staffUpdate);
        label_22->setObjectName(QStringLiteral("label_22"));

        horizontalLayout_5->addWidget(label_22);

        lineEdit_passwd = new QLineEdit(staffUpdate);
        lineEdit_passwd->setObjectName(QStringLiteral("lineEdit_passwd"));
        lineEdit_passwd->setEnabled(false);

        horizontalLayout_5->addWidget(lineEdit_passwd);


        gridLayout->addLayout(horizontalLayout_5, 9, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_23 = new QLabel(staffUpdate);
        label_23->setObjectName(QStringLiteral("label_23"));

        horizontalLayout_6->addWidget(label_23);

        lineEdit_leader = new QLineEdit(staffUpdate);
        lineEdit_leader->setObjectName(QStringLiteral("lineEdit_leader"));
        lineEdit_leader->setEnabled(false);

        horizontalLayout_6->addWidget(lineEdit_leader);


        gridLayout->addLayout(horizontalLayout_6, 10, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(399, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        tijiaoButton = new QPushButton(staffUpdate);
        tijiaoButton->setObjectName(QStringLiteral("tijiaoButton"));

        horizontalLayout_4->addWidget(tijiaoButton);

        cacleButton = new QPushButton(staffUpdate);
        cacleButton->setObjectName(QStringLiteral("cacleButton"));

        horizontalLayout_4->addWidget(cacleButton);


        gridLayout->addLayout(horizontalLayout_4, 11, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 180, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 12, 0, 1, 1);


        retranslateUi(staffUpdate);

        QMetaObject::connectSlotsByName(staffUpdate);
    } // setupUi

    void retranslateUi(QDialog *staffUpdate)
    {
        staffUpdate->setWindowTitle(QApplication::translate("staffUpdate", "Dialog", Q_NULLPTR));
        label_5->setText(QApplication::translate("staffUpdate", "<html><head/><body><p><span style=\" font-size:16pt; font-style:italic; color:#c4a000;\">\345\221\230\345\267\245\344\277\241\346\201\257\357\274\232</span></p></body></html>", Q_NULLPTR));
        label_tips->setText(QString());
        label_15->setText(QApplication::translate("staffUpdate", "\344\277\256\346\224\271\347\232\204\345\221\230\345\267\245\345\217\267\357\274\232   ", Q_NULLPTR));
        okButton->setText(QApplication::translate("staffUpdate", "\347\241\256\345\256\232", Q_NULLPTR));
        label_16->setText(QApplication::translate("staffUpdate", "\345\247\223\345\220\215\357\274\232        ", Q_NULLPTR));
        label_19->setText(QApplication::translate("staffUpdate", "\347\224\265\350\257\235\357\274\232        ", Q_NULLPTR));
        label_18->setText(QApplication::translate("staffUpdate", "Emile\357\274\232      ", Q_NULLPTR));
        label_11->setText(QApplication::translate("staffUpdate", "\351\203\250\351\227\250\357\274\232", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("staffUpdate", "\344\272\272\345\212\233\350\265\204\346\272\220\351\203\250", Q_NULLPTR)
         << QApplication::translate("staffUpdate", "\350\264\242\345\212\241\351\203\250", Q_NULLPTR)
         << QApplication::translate("staffUpdate", "\346\212\200\346\234\257\347\240\224\345\217\221\351\203\250", Q_NULLPTR)
         << QApplication::translate("staffUpdate", "ALL", Q_NULLPTR)
        );
        label_17->setText(QApplication::translate("staffUpdate", "\350\201\214\347\247\260\357\274\232         ", Q_NULLPTR));
        label_20->setText(QApplication::translate("staffUpdate", "\345\205\245\350\201\214\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        label_21->setText(QApplication::translate("staffUpdate", "\346\235\203\351\231\220\357\274\232", Q_NULLPTR));
        label_22->setText(QApplication::translate("staffUpdate", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        label_23->setText(QApplication::translate("staffUpdate", "leader\357\274\232", Q_NULLPTR));
        tijiaoButton->setText(QApplication::translate("staffUpdate", "\346\217\220\344\272\244", Q_NULLPTR));
        cacleButton->setText(QApplication::translate("staffUpdate", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class staffUpdate: public Ui_staffUpdate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAFFUPDATE_H
