/********************************************************************************
** Form generated from reading UI file 'stffinfoinsert.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STFFINFOINSERT_H
#define UI_STFFINFOINSERT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_stffinfoInsert
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLabel *label_insert_tips;
    QHBoxLayout *horizontalLayout;
    QLabel *label_15;
    QLineEdit *lineEdit_id;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_16;
    QLineEdit *lineEdit_name;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_19;
    QLineEdit *lineEdit_tel_2;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_18;
    QLineEdit *lineEdit_emil_2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_11;
    QComboBox *comboBox_3;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_17;
    QLineEdit *lineEdit_jobtitle_2;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_20;
    QLineEdit *lineEdit_startTime_2;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_21;
    QLineEdit *lineEdit_leader;
    QCommandLinkButton *takephoto_commandLinkButton;
    QHBoxLayout *horizontalLayout_14;
    QSpacerItem *horizontalSpacer;
    QPushButton *insertButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *stffinfoInsert)
    {
        if (stffinfoInsert->objectName().isEmpty())
            stffinfoInsert->setObjectName(QStringLiteral("stffinfoInsert"));
        stffinfoInsert->resize(897, 593);
        gridLayout = new QGridLayout(stffinfoInsert);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_5 = new QLabel(stffinfoInsert);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(0, 32));
        label_5->setMaximumSize(QSize(16777215, 32));

        horizontalLayout_3->addWidget(label_5);

        label_insert_tips = new QLabel(stffinfoInsert);
        label_insert_tips->setObjectName(QStringLiteral("label_insert_tips"));
        label_insert_tips->setMinimumSize(QSize(0, 41));
        label_insert_tips->setMaximumSize(QSize(16777215, 41));
        label_insert_tips->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_insert_tips);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_15 = new QLabel(stffinfoInsert);
        label_15->setObjectName(QStringLiteral("label_15"));

        horizontalLayout->addWidget(label_15);

        lineEdit_id = new QLineEdit(stffinfoInsert);
        lineEdit_id->setObjectName(QStringLiteral("lineEdit_id"));

        horizontalLayout->addWidget(lineEdit_id);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_16 = new QLabel(stffinfoInsert);
        label_16->setObjectName(QStringLiteral("label_16"));

        horizontalLayout_2->addWidget(label_16);

        lineEdit_name = new QLineEdit(stffinfoInsert);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));

        horizontalLayout_2->addWidget(lineEdit_name);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_19 = new QLabel(stffinfoInsert);
        label_19->setObjectName(QStringLiteral("label_19"));

        horizontalLayout_10->addWidget(label_19);

        lineEdit_tel_2 = new QLineEdit(stffinfoInsert);
        lineEdit_tel_2->setObjectName(QStringLiteral("lineEdit_tel_2"));

        horizontalLayout_10->addWidget(lineEdit_tel_2);


        gridLayout->addLayout(horizontalLayout_10, 3, 0, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_18 = new QLabel(stffinfoInsert);
        label_18->setObjectName(QStringLiteral("label_18"));

        horizontalLayout_11->addWidget(label_18);

        lineEdit_emil_2 = new QLineEdit(stffinfoInsert);
        lineEdit_emil_2->setObjectName(QStringLiteral("lineEdit_emil_2"));

        horizontalLayout_11->addWidget(lineEdit_emil_2);


        gridLayout->addLayout(horizontalLayout_11, 4, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_11 = new QLabel(stffinfoInsert);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_9->addWidget(label_11);

        comboBox_3 = new QComboBox(stffinfoInsert);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));

        horizontalLayout_9->addWidget(comboBox_3);


        gridLayout->addLayout(horizontalLayout_9, 5, 0, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_17 = new QLabel(stffinfoInsert);
        label_17->setObjectName(QStringLiteral("label_17"));

        horizontalLayout_13->addWidget(label_17);

        lineEdit_jobtitle_2 = new QLineEdit(stffinfoInsert);
        lineEdit_jobtitle_2->setObjectName(QStringLiteral("lineEdit_jobtitle_2"));

        horizontalLayout_13->addWidget(lineEdit_jobtitle_2);


        gridLayout->addLayout(horizontalLayout_13, 6, 0, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_20 = new QLabel(stffinfoInsert);
        label_20->setObjectName(QStringLiteral("label_20"));

        horizontalLayout_12->addWidget(label_20);

        lineEdit_startTime_2 = new QLineEdit(stffinfoInsert);
        lineEdit_startTime_2->setObjectName(QStringLiteral("lineEdit_startTime_2"));

        horizontalLayout_12->addWidget(lineEdit_startTime_2);


        gridLayout->addLayout(horizontalLayout_12, 7, 0, 1, 1);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label_21 = new QLabel(stffinfoInsert);
        label_21->setObjectName(QStringLiteral("label_21"));

        horizontalLayout_15->addWidget(label_21);

        lineEdit_leader = new QLineEdit(stffinfoInsert);
        lineEdit_leader->setObjectName(QStringLiteral("lineEdit_leader"));

        horizontalLayout_15->addWidget(lineEdit_leader);


        gridLayout->addLayout(horizontalLayout_15, 8, 0, 1, 1);

        takephoto_commandLinkButton = new QCommandLinkButton(stffinfoInsert);
        takephoto_commandLinkButton->setObjectName(QStringLiteral("takephoto_commandLinkButton"));
        QFont font;
        font.setFamily(QStringLiteral("AR PL UMing TW MBE"));
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        takephoto_commandLinkButton->setFont(font);

        gridLayout->addWidget(takephoto_commandLinkButton, 9, 0, 1, 1);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer);

        insertButton = new QPushButton(stffinfoInsert);
        insertButton->setObjectName(QStringLiteral("insertButton"));

        horizontalLayout_14->addWidget(insertButton);


        gridLayout->addLayout(horizontalLayout_14, 10, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 174, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 11, 0, 1, 1);

        takephoto_commandLinkButton->raise();

        retranslateUi(stffinfoInsert);

        QMetaObject::connectSlotsByName(stffinfoInsert);
    } // setupUi

    void retranslateUi(QDialog *stffinfoInsert)
    {
        stffinfoInsert->setWindowTitle(QApplication::translate("stffinfoInsert", "Dialog", Q_NULLPTR));
        label_5->setText(QApplication::translate("stffinfoInsert", "<html><head/><body><p><span style=\" font-size:16pt; font-style:italic; color:#c4a000;\">\345\221\230\345\267\245\344\277\241\346\201\257\345\275\225\345\205\245\357\274\232</span></p></body></html>", Q_NULLPTR));
        label_insert_tips->setText(QString());
        label_15->setText(QApplication::translate("stffinfoInsert", "\345\221\230\345\267\245\345\217\267\357\274\232               ", Q_NULLPTR));
        label_16->setText(QApplication::translate("stffinfoInsert", "\345\247\223\345\220\215\357\274\232                    ", Q_NULLPTR));
        label_19->setText(QApplication::translate("stffinfoInsert", "\347\224\265\350\257\235\357\274\232                    ", Q_NULLPTR));
        label_18->setText(QApplication::translate("stffinfoInsert", "Emile\357\274\232                  ", Q_NULLPTR));
        label_11->setText(QApplication::translate("stffinfoInsert", "\351\203\250\351\227\250\357\274\232", Q_NULLPTR));
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("stffinfoInsert", "\344\272\272\345\212\233\350\265\204\346\272\220\351\203\250", Q_NULLPTR)
         << QApplication::translate("stffinfoInsert", "\350\264\242\345\212\241\351\203\250", Q_NULLPTR)
         << QApplication::translate("stffinfoInsert", "\346\212\200\346\234\257\347\240\224\345\217\221\351\203\250", Q_NULLPTR)
         << QApplication::translate("stffinfoInsert", "ALL", Q_NULLPTR)
        );
        label_17->setText(QApplication::translate("stffinfoInsert", "\350\201\214\347\247\260\357\274\232                     ", Q_NULLPTR));
        label_20->setText(QApplication::translate("stffinfoInsert", "\345\205\245\350\201\214\346\227\266\351\227\264\357\274\232             ", Q_NULLPTR));
        label_21->setText(QApplication::translate("stffinfoInsert", "\347\233\264\347\263\273\351\242\206\345\257\274\345\221\230\345\267\245\345\217\267\357\274\232", Q_NULLPTR));
        takephoto_commandLinkButton->setText(QApplication::translate("stffinfoInsert", "\347\205\247\347\211\207\346\234\252\351\207\207\351\233\206\350\257\267\351\207\207\351\233\206\347\205\247\347\211\207", Q_NULLPTR));
        insertButton->setText(QApplication::translate("stffinfoInsert", "\345\275\225\345\205\245", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class stffinfoInsert: public Ui_stffinfoInsert {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STFFINFOINSERT_H
