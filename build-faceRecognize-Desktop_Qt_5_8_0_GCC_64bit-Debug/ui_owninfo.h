/********************************************************************************
** Form generated from reading UI file 'owninfo.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OWNINFO_H
#define UI_OWNINFO_H

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
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ownInfo
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_5;
    QLabel *label_tips;
    QHBoxLayout *horizontalLayout;
    QLabel *label_15;
    QLineEdit *lineEdit_id;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_16;
    QLineEdit *lineEdit_name;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_19;
    QLineEdit *lineEdit_tel;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_18;
    QLineEdit *lineEdit_emil;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_11;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_17;
    QLineEdit *lineEdit_jobtitle;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_20;
    QLineEdit *lineEdit_startTime;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_21;
    QLineEdit *lineEdit_authority;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_22;
    QLineEdit *lineEdit_passwd;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer;
    QPushButton *cacleButton;
    QPushButton *tijiaoButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *ownInfo)
    {
        if (ownInfo->objectName().isEmpty())
            ownInfo->setObjectName(QStringLiteral("ownInfo"));
        ownInfo->resize(804, 717);
        gridLayout = new QGridLayout(ownInfo);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_5 = new QLabel(ownInfo);
        label_5->setObjectName(QStringLiteral("label_5"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setMinimumSize(QSize(0, 32));
        label_5->setMaximumSize(QSize(16777215, 32));

        horizontalLayout_11->addWidget(label_5);

        label_tips = new QLabel(ownInfo);
        label_tips->setObjectName(QStringLiteral("label_tips"));
        sizePolicy.setHeightForWidth(label_tips->sizePolicy().hasHeightForWidth());
        label_tips->setSizePolicy(sizePolicy);
        label_tips->setMinimumSize(QSize(0, 32));
        label_tips->setMaximumSize(QSize(16777215, 32));
        label_tips->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_11->addWidget(label_tips);


        verticalLayout->addLayout(horizontalLayout_11);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_15 = new QLabel(ownInfo);
        label_15->setObjectName(QStringLiteral("label_15"));

        horizontalLayout->addWidget(label_15);

        lineEdit_id = new QLineEdit(ownInfo);
        lineEdit_id->setObjectName(QStringLiteral("lineEdit_id"));
        lineEdit_id->setEnabled(false);

        horizontalLayout->addWidget(lineEdit_id);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_16 = new QLabel(ownInfo);
        label_16->setObjectName(QStringLiteral("label_16"));

        horizontalLayout_2->addWidget(label_16);

        lineEdit_name = new QLineEdit(ownInfo);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));
        lineEdit_name->setEnabled(false);

        horizontalLayout_2->addWidget(lineEdit_name);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_19 = new QLabel(ownInfo);
        label_19->setObjectName(QStringLiteral("label_19"));

        horizontalLayout_3->addWidget(label_19);

        lineEdit_tel = new QLineEdit(ownInfo);
        lineEdit_tel->setObjectName(QStringLiteral("lineEdit_tel"));
        lineEdit_tel->setEnabled(false);

        horizontalLayout_3->addWidget(lineEdit_tel);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_18 = new QLabel(ownInfo);
        label_18->setObjectName(QStringLiteral("label_18"));

        horizontalLayout_4->addWidget(label_18);

        lineEdit_emil = new QLineEdit(ownInfo);
        lineEdit_emil->setObjectName(QStringLiteral("lineEdit_emil"));
        lineEdit_emil->setEnabled(false);

        horizontalLayout_4->addWidget(lineEdit_emil);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_11 = new QLabel(ownInfo);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_5->addWidget(label_11);

        comboBox = new QComboBox(ownInfo);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setEnabled(false);

        horizontalLayout_5->addWidget(comboBox);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_17 = new QLabel(ownInfo);
        label_17->setObjectName(QStringLiteral("label_17"));

        horizontalLayout_6->addWidget(label_17);

        lineEdit_jobtitle = new QLineEdit(ownInfo);
        lineEdit_jobtitle->setObjectName(QStringLiteral("lineEdit_jobtitle"));
        lineEdit_jobtitle->setEnabled(false);

        horizontalLayout_6->addWidget(lineEdit_jobtitle);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_20 = new QLabel(ownInfo);
        label_20->setObjectName(QStringLiteral("label_20"));

        horizontalLayout_7->addWidget(label_20);

        lineEdit_startTime = new QLineEdit(ownInfo);
        lineEdit_startTime->setObjectName(QStringLiteral("lineEdit_startTime"));
        lineEdit_startTime->setEnabled(false);

        horizontalLayout_7->addWidget(lineEdit_startTime);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_21 = new QLabel(ownInfo);
        label_21->setObjectName(QStringLiteral("label_21"));

        horizontalLayout_8->addWidget(label_21);

        lineEdit_authority = new QLineEdit(ownInfo);
        lineEdit_authority->setObjectName(QStringLiteral("lineEdit_authority"));
        lineEdit_authority->setEnabled(false);

        horizontalLayout_8->addWidget(lineEdit_authority);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_22 = new QLabel(ownInfo);
        label_22->setObjectName(QStringLiteral("label_22"));

        horizontalLayout_9->addWidget(label_22);

        lineEdit_passwd = new QLineEdit(ownInfo);
        lineEdit_passwd->setObjectName(QStringLiteral("lineEdit_passwd"));
        lineEdit_passwd->setEnabled(false);

        horizontalLayout_9->addWidget(lineEdit_passwd);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalSpacer = new QSpacerItem(399, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer);

        cacleButton = new QPushButton(ownInfo);
        cacleButton->setObjectName(QStringLiteral("cacleButton"));

        horizontalLayout_10->addWidget(cacleButton);

        tijiaoButton = new QPushButton(ownInfo);
        tijiaoButton->setObjectName(QStringLiteral("tijiaoButton"));

        horizontalLayout_10->addWidget(tijiaoButton);


        verticalLayout->addLayout(horizontalLayout_10);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 318, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);


        retranslateUi(ownInfo);

        QMetaObject::connectSlotsByName(ownInfo);
    } // setupUi

    void retranslateUi(QDialog *ownInfo)
    {
        ownInfo->setWindowTitle(QApplication::translate("ownInfo", "Dialog", Q_NULLPTR));
        label_5->setText(QApplication::translate("ownInfo", "<html><head/><body><p><span style=\" font-size:16pt; font-style:italic; color:#c4a000;\">\345\221\230\345\267\245\344\277\241\346\201\257\357\274\232</span></p></body></html>", Q_NULLPTR));
        label_tips->setText(QString());
        label_15->setText(QApplication::translate("ownInfo", "\345\221\230\345\267\245\345\217\267\357\274\232   ", Q_NULLPTR));
        label_16->setText(QApplication::translate("ownInfo", "\345\247\223\345\220\215\357\274\232        ", Q_NULLPTR));
        label_19->setText(QApplication::translate("ownInfo", "\347\224\265\350\257\235\357\274\232        ", Q_NULLPTR));
        label_18->setText(QApplication::translate("ownInfo", "Emile\357\274\232      ", Q_NULLPTR));
        label_11->setText(QApplication::translate("ownInfo", "\351\203\250\351\227\250\357\274\232", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("ownInfo", "\344\272\272\345\212\233\350\265\204\346\272\220\351\203\250", Q_NULLPTR)
         << QApplication::translate("ownInfo", "\350\264\242\345\212\241\351\203\250", Q_NULLPTR)
         << QApplication::translate("ownInfo", "\346\212\200\346\234\257\347\240\224\345\217\221\351\203\250", Q_NULLPTR)
         << QApplication::translate("ownInfo", "ALL", Q_NULLPTR)
        );
        label_17->setText(QApplication::translate("ownInfo", "\350\201\214\347\247\260\357\274\232         ", Q_NULLPTR));
        label_20->setText(QApplication::translate("ownInfo", "\345\205\245\350\201\214\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        label_21->setText(QApplication::translate("ownInfo", "\346\235\203\351\231\220\357\274\232", Q_NULLPTR));
        label_22->setText(QApplication::translate("ownInfo", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        cacleButton->setText(QApplication::translate("ownInfo", "\345\217\226\346\266\210", Q_NULLPTR));
        tijiaoButton->setText(QApplication::translate("ownInfo", "\344\277\256\346\224\271", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ownInfo: public Ui_ownInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OWNINFO_H
