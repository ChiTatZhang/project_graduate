/********************************************************************************
** Form generated from reading UI file 'attendence.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATTENDENCE_H
#define UI_ATTENDENCE_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_attendence
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QDateEdit *dateEdit;
    QRadioButton *radioButton;
    QFrame *line;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QSpinBox *spinBox;
    QLabel *label_5;
    QSpinBox *spinBox_2;
    QRadioButton *radioButton_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QTableWidget *tableWidget;
    QLabel *label_tips;

    void setupUi(QDialog *attendence)
    {
        if (attendence->objectName().isEmpty())
            attendence->setObjectName(QStringLiteral("attendence"));
        attendence->resize(744, 450);
        gridLayout = new QGridLayout(attendence);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(attendence);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 2);

        label_3 = new QLabel(attendence);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(635, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 1, 1, 3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        dateEdit = new QDateEdit(attendence);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setDate(QDate(2018, 1, 9));

        verticalLayout->addWidget(dateEdit);

        radioButton = new QRadioButton(attendence);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setChecked(true);

        verticalLayout->addWidget(radioButton);


        gridLayout->addLayout(verticalLayout, 2, 0, 1, 2);

        line = new QFrame(attendence);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 2, 2, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(attendence);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFrameShape(QFrame::NoFrame);
        label_4->setFrameShadow(QFrame::Raised);

        horizontalLayout_2->addWidget(label_4);

        spinBox = new QSpinBox(attendence);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setMinimum(1900);
        spinBox->setMaximum(2500);
        spinBox->setValue(2018);

        horizontalLayout_2->addWidget(spinBox);

        label_5 = new QLabel(attendence);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_2->addWidget(label_5);

        spinBox_2 = new QSpinBox(attendence);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setMinimum(1);
        spinBox_2->setMaximum(12);

        horizontalLayout_2->addWidget(spinBox_2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        radioButton_2 = new QRadioButton(attendence);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        verticalLayout_2->addWidget(radioButton_2);


        gridLayout->addLayout(verticalLayout_2, 2, 3, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(attendence);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(attendence);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 2);

        pushButton = new QPushButton(attendence);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 3, 3, 1, 1);

        tableWidget = new QTableWidget(attendence);
        if (tableWidget->columnCount() < 7)
            tableWidget->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        if (tableWidget->rowCount() < 8)
            tableWidget->setRowCount(8);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(7, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setItem(0, 1, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget->setItem(0, 2, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget->setItem(0, 3, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget->setItem(0, 4, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget->setItem(0, 5, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget->setItem(0, 6, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget->setItem(1, 0, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget->setItem(1, 1, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget->setItem(1, 2, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget->setItem(1, 3, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidget->setItem(1, 4, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidget->setItem(1, 5, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidget->setItem(1, 6, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableWidget->setItem(2, 0, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableWidget->setItem(2, 1, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableWidget->setItem(2, 2, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tableWidget->setItem(2, 3, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tableWidget->setItem(2, 4, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tableWidget->setItem(2, 5, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        tableWidget->setItem(2, 6, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        tableWidget->setItem(3, 0, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        tableWidget->setItem(3, 1, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        tableWidget->setItem(3, 2, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        tableWidget->setItem(3, 3, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        tableWidget->setItem(3, 4, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        tableWidget->setItem(3, 5, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        tableWidget->setItem(3, 6, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        tableWidget->setItem(4, 0, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        tableWidget->setItem(4, 1, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        tableWidget->setItem(4, 2, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        tableWidget->setItem(4, 3, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        tableWidget->setItem(4, 4, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        tableWidget->setItem(4, 5, __qtablewidgetitem48);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        tableWidget->setItem(4, 6, __qtablewidgetitem49);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        tableWidget->setItem(5, 0, __qtablewidgetitem50);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        tableWidget->setItem(5, 1, __qtablewidgetitem51);
        QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
        tableWidget->setItem(5, 2, __qtablewidgetitem52);
        QTableWidgetItem *__qtablewidgetitem53 = new QTableWidgetItem();
        tableWidget->setItem(5, 3, __qtablewidgetitem53);
        QTableWidgetItem *__qtablewidgetitem54 = new QTableWidgetItem();
        tableWidget->setItem(5, 4, __qtablewidgetitem54);
        QTableWidgetItem *__qtablewidgetitem55 = new QTableWidgetItem();
        tableWidget->setItem(5, 5, __qtablewidgetitem55);
        QTableWidgetItem *__qtablewidgetitem56 = new QTableWidgetItem();
        tableWidget->setItem(5, 6, __qtablewidgetitem56);
        QTableWidgetItem *__qtablewidgetitem57 = new QTableWidgetItem();
        tableWidget->setItem(6, 0, __qtablewidgetitem57);
        QTableWidgetItem *__qtablewidgetitem58 = new QTableWidgetItem();
        tableWidget->setItem(6, 1, __qtablewidgetitem58);
        QTableWidgetItem *__qtablewidgetitem59 = new QTableWidgetItem();
        tableWidget->setItem(6, 2, __qtablewidgetitem59);
        QTableWidgetItem *__qtablewidgetitem60 = new QTableWidgetItem();
        tableWidget->setItem(6, 3, __qtablewidgetitem60);
        QTableWidgetItem *__qtablewidgetitem61 = new QTableWidgetItem();
        tableWidget->setItem(6, 4, __qtablewidgetitem61);
        QTableWidgetItem *__qtablewidgetitem62 = new QTableWidgetItem();
        tableWidget->setItem(6, 5, __qtablewidgetitem62);
        QTableWidgetItem *__qtablewidgetitem63 = new QTableWidgetItem();
        tableWidget->setItem(6, 6, __qtablewidgetitem63);
        QTableWidgetItem *__qtablewidgetitem64 = new QTableWidgetItem();
        tableWidget->setItem(7, 0, __qtablewidgetitem64);
        QTableWidgetItem *__qtablewidgetitem65 = new QTableWidgetItem();
        tableWidget->setItem(7, 1, __qtablewidgetitem65);
        QTableWidgetItem *__qtablewidgetitem66 = new QTableWidgetItem();
        tableWidget->setItem(7, 2, __qtablewidgetitem66);
        QTableWidgetItem *__qtablewidgetitem67 = new QTableWidgetItem();
        tableWidget->setItem(7, 3, __qtablewidgetitem67);
        QTableWidgetItem *__qtablewidgetitem68 = new QTableWidgetItem();
        tableWidget->setItem(7, 4, __qtablewidgetitem68);
        QTableWidgetItem *__qtablewidgetitem69 = new QTableWidgetItem();
        tableWidget->setItem(7, 5, __qtablewidgetitem69);
        QTableWidgetItem *__qtablewidgetitem70 = new QTableWidgetItem();
        tableWidget->setItem(7, 6, __qtablewidgetitem70);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        gridLayout->addWidget(tableWidget, 4, 0, 1, 4);

        label_tips = new QLabel(attendence);
        label_tips->setObjectName(QStringLiteral("label_tips"));
        label_tips->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_tips, 0, 3, 1, 1);


        retranslateUi(attendence);

        QMetaObject::connectSlotsByName(attendence);
    } // setupUi

    void retranslateUi(QDialog *attendence)
    {
        attendence->setWindowTitle(QApplication::translate("attendence", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("attendence", "<html><head/><body><p><span style=\" font-size:20pt; color:#c4a000;\">\345\207\272\345\213\244\350\256\260\345\275\225\346\237\245\350\257\242:</span></p></body></html>", Q_NULLPTR));
        label_3->setText(QApplication::translate("attendence", "\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        radioButton->setText(QApplication::translate("attendence", "\345\271\264\346\234\210\346\227\245\346\237\245\350\257\242", Q_NULLPTR));
        label_4->setText(QApplication::translate("attendence", "\345\271\264\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("attendence", "\346\234\210\357\274\232", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("attendence", "\345\271\264\346\234\210\346\237\245\350\257\242", Q_NULLPTR));
        label_2->setText(QApplication::translate("attendence", "\345\221\230\345\267\245\345\217\267\357\274\232", Q_NULLPTR));
        pushButton->setText(QApplication::translate("attendence", "\346\237\245\350\257\242", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("attendence", "\345\221\230\345\267\245\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("attendence", "\345\247\223\345\220\215", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("attendence", "\346\227\245\346\234\237", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("attendence", "\344\270\212\347\217\255\346\227\266\351\227\264", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("attendence", "\344\270\213\347\217\255\346\227\266\351\227\264", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("attendence", "\345\267\245\346\227\266/h", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("attendence", "\350\200\203\345\213\244\347\212\266\346\200\201", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem7->setText(QApplication::translate("attendence", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem8->setText(QApplication::translate("attendence", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem9->setText(QApplication::translate("attendence", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem10->setText(QApplication::translate("attendence", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem11->setText(QApplication::translate("attendence", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem12->setText(QApplication::translate("attendence", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem13->setText(QApplication::translate("attendence", "7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem14->setText(QApplication::translate("attendence", "8", Q_NULLPTR));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->item(0, 0);
        ___qtablewidgetitem15->setText(QApplication::translate("attendence", "201801", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->item(0, 1);
        ___qtablewidgetitem16->setText(QApplication::translate("attendence", "\345\274\240\344\270\211", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->item(0, 2);
        ___qtablewidgetitem17->setText(QApplication::translate("attendence", "2018/01/02", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->item(0, 3);
        ___qtablewidgetitem18->setText(QApplication::translate("attendence", "08:32:02", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->item(0, 4);
        ___qtablewidgetitem19->setText(QApplication::translate("attendence", "18:02:03", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget->item(0, 5);
        ___qtablewidgetitem20->setText(QApplication::translate("attendence", "9.5h", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget->item(0, 6);
        ___qtablewidgetitem21->setText(QApplication::translate("attendence", "\346\255\243\345\270\270", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget->item(1, 0);
        ___qtablewidgetitem22->setText(QApplication::translate("attendence", "201801", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget->item(1, 1);
        ___qtablewidgetitem23->setText(QApplication::translate("attendence", "\345\274\240\344\270\211", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget->item(1, 2);
        ___qtablewidgetitem24->setText(QApplication::translate("attendence", "2018/01/02", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget->item(1, 3);
        ___qtablewidgetitem25->setText(QApplication::translate("attendence", "08:32:02", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget->item(1, 4);
        ___qtablewidgetitem26->setText(QApplication::translate("attendence", "18:02:03", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidget->item(1, 5);
        ___qtablewidgetitem27->setText(QApplication::translate("attendence", "9.5h", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidget->item(1, 6);
        ___qtablewidgetitem28->setText(QApplication::translate("attendence", "\346\255\243\345\270\270", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem29 = tableWidget->item(2, 0);
        ___qtablewidgetitem29->setText(QApplication::translate("attendence", "201801", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem30 = tableWidget->item(2, 1);
        ___qtablewidgetitem30->setText(QApplication::translate("attendence", "\345\274\240\344\270\211", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem31 = tableWidget->item(2, 2);
        ___qtablewidgetitem31->setText(QApplication::translate("attendence", "2018/01/02", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem32 = tableWidget->item(2, 3);
        ___qtablewidgetitem32->setText(QApplication::translate("attendence", "08:32:02", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem33 = tableWidget->item(2, 4);
        ___qtablewidgetitem33->setText(QApplication::translate("attendence", "18:02:03", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem34 = tableWidget->item(2, 5);
        ___qtablewidgetitem34->setText(QApplication::translate("attendence", "9.5h", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem35 = tableWidget->item(2, 6);
        ___qtablewidgetitem35->setText(QApplication::translate("attendence", "\346\255\243\345\270\270", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem36 = tableWidget->item(3, 0);
        ___qtablewidgetitem36->setText(QApplication::translate("attendence", "201801", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem37 = tableWidget->item(3, 1);
        ___qtablewidgetitem37->setText(QApplication::translate("attendence", "\345\274\240\344\270\211", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem38 = tableWidget->item(3, 2);
        ___qtablewidgetitem38->setText(QApplication::translate("attendence", "2018/01/02", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem39 = tableWidget->item(3, 3);
        ___qtablewidgetitem39->setText(QApplication::translate("attendence", "08:32:02", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem40 = tableWidget->item(3, 4);
        ___qtablewidgetitem40->setText(QApplication::translate("attendence", "18:02:03", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem41 = tableWidget->item(3, 5);
        ___qtablewidgetitem41->setText(QApplication::translate("attendence", "9.5h", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem42 = tableWidget->item(3, 6);
        ___qtablewidgetitem42->setText(QApplication::translate("attendence", "\346\255\243\345\270\270", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem43 = tableWidget->item(4, 0);
        ___qtablewidgetitem43->setText(QApplication::translate("attendence", "201801", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem44 = tableWidget->item(4, 1);
        ___qtablewidgetitem44->setText(QApplication::translate("attendence", "\345\274\240\344\270\211", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem45 = tableWidget->item(4, 2);
        ___qtablewidgetitem45->setText(QApplication::translate("attendence", "2018/01/02", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem46 = tableWidget->item(4, 3);
        ___qtablewidgetitem46->setText(QApplication::translate("attendence", "08:32:02", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem47 = tableWidget->item(4, 4);
        ___qtablewidgetitem47->setText(QApplication::translate("attendence", "18:02:03", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem48 = tableWidget->item(4, 5);
        ___qtablewidgetitem48->setText(QApplication::translate("attendence", "9.5h", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem49 = tableWidget->item(4, 6);
        ___qtablewidgetitem49->setText(QApplication::translate("attendence", "\346\255\243\345\270\270", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem50 = tableWidget->item(5, 0);
        ___qtablewidgetitem50->setText(QApplication::translate("attendence", "201801", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem51 = tableWidget->item(5, 1);
        ___qtablewidgetitem51->setText(QApplication::translate("attendence", "\345\274\240\344\270\211", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem52 = tableWidget->item(5, 2);
        ___qtablewidgetitem52->setText(QApplication::translate("attendence", "2018/01/02", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem53 = tableWidget->item(5, 3);
        ___qtablewidgetitem53->setText(QApplication::translate("attendence", "08:32:02", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem54 = tableWidget->item(5, 4);
        ___qtablewidgetitem54->setText(QApplication::translate("attendence", "18:02:03", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem55 = tableWidget->item(5, 5);
        ___qtablewidgetitem55->setText(QApplication::translate("attendence", "9.5h", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem56 = tableWidget->item(5, 6);
        ___qtablewidgetitem56->setText(QApplication::translate("attendence", "\346\255\243\345\270\270", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem57 = tableWidget->item(6, 0);
        ___qtablewidgetitem57->setText(QApplication::translate("attendence", "201801", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem58 = tableWidget->item(6, 1);
        ___qtablewidgetitem58->setText(QApplication::translate("attendence", "\345\274\240\344\270\211", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem59 = tableWidget->item(6, 2);
        ___qtablewidgetitem59->setText(QApplication::translate("attendence", "2018/01/02", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem60 = tableWidget->item(6, 3);
        ___qtablewidgetitem60->setText(QApplication::translate("attendence", "08:32:02", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem61 = tableWidget->item(6, 4);
        ___qtablewidgetitem61->setText(QApplication::translate("attendence", "18:02:03", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem62 = tableWidget->item(6, 5);
        ___qtablewidgetitem62->setText(QApplication::translate("attendence", "9.5h", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem63 = tableWidget->item(6, 6);
        ___qtablewidgetitem63->setText(QApplication::translate("attendence", "\346\255\243\345\270\270", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem64 = tableWidget->item(7, 0);
        ___qtablewidgetitem64->setText(QApplication::translate("attendence", "201801", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem65 = tableWidget->item(7, 1);
        ___qtablewidgetitem65->setText(QApplication::translate("attendence", "\345\274\240\344\270\211", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem66 = tableWidget->item(7, 2);
        ___qtablewidgetitem66->setText(QApplication::translate("attendence", "2018/01/02", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem67 = tableWidget->item(7, 3);
        ___qtablewidgetitem67->setText(QApplication::translate("attendence", "08:32:02", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem68 = tableWidget->item(7, 4);
        ___qtablewidgetitem68->setText(QApplication::translate("attendence", "18:02:03", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem69 = tableWidget->item(7, 5);
        ___qtablewidgetitem69->setText(QApplication::translate("attendence", "9.5h", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem70 = tableWidget->item(7, 6);
        ___qtablewidgetitem70->setText(QApplication::translate("attendence", "\346\255\243\345\270\270", Q_NULLPTR));
        tableWidget->setSortingEnabled(__sortingEnabled);

        label_tips->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class attendence: public Ui_attendence {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATTENDENCE_H
