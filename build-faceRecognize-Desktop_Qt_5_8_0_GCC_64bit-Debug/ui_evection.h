/********************************************************************************
** Form generated from reading UI file 'evection.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVECTION_H
#define UI_EVECTION_H

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
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_evection
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QSpinBox *spinBox_year;
    QLabel *label_4;
    QSpinBox *spinBox_month;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QTableWidget *tableWidget;
    QLabel *label_tips;

    void setupUi(QDialog *evection)
    {
        if (evection->objectName().isEmpty())
            evection->setObjectName(QStringLiteral("evection"));
        evection->resize(735, 451);
        gridLayout = new QGridLayout(evection);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(evection);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 2);

        label_2 = new QLabel(evection);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(evection);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        spinBox_year = new QSpinBox(evection);
        spinBox_year->setObjectName(QStringLiteral("spinBox_year"));
        spinBox_year->setMinimum(1990);
        spinBox_year->setMaximum(2100);
        spinBox_year->setValue(2018);

        horizontalLayout->addWidget(spinBox_year);

        label_4 = new QLabel(evection);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);

        spinBox_month = new QSpinBox(evection);
        spinBox_month->setObjectName(QStringLiteral("spinBox_month"));
        spinBox_month->setMinimum(1);
        spinBox_month->setMaximum(12);

        horizontalLayout->addWidget(spinBox_month);


        gridLayout->addLayout(horizontalLayout, 1, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_5 = new QLabel(evection);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_2->addWidget(label_5);

        lineEdit = new QLineEdit(evection);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMaxLength(32767);
        lineEdit->setFrame(true);
        lineEdit->setAlignment(Qt::AlignCenter);
        lineEdit->setDragEnabled(false);

        horizontalLayout_2->addWidget(lineEdit);


        gridLayout->addLayout(horizontalLayout_2, 1, 2, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_6 = new QLabel(evection);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_3->addWidget(label_6);

        comboBox = new QComboBox(evection);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout_3->addWidget(comboBox);


        gridLayout->addLayout(horizontalLayout_3, 1, 3, 1, 1);

        pushButton = new QPushButton(evection);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 1, 4, 1, 1);

        tableWidget = new QTableWidget(evection);
        if (tableWidget->columnCount() < 10)
            tableWidget->setColumnCount(10);
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
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        if (tableWidget->rowCount() < 7)
            tableWidget->setRowCount(7);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget->setItem(0, 1, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget->setItem(0, 2, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget->setItem(0, 3, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget->setItem(0, 4, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget->setItem(0, 5, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget->setItem(0, 6, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget->setItem(1, 0, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget->setItem(1, 1, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidget->setItem(1, 2, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidget->setItem(1, 3, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidget->setItem(1, 4, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableWidget->setItem(1, 5, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableWidget->setItem(1, 6, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableWidget->setItem(2, 0, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tableWidget->setItem(2, 1, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tableWidget->setItem(2, 2, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tableWidget->setItem(2, 3, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        tableWidget->setItem(2, 4, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        tableWidget->setItem(2, 5, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        tableWidget->setItem(2, 6, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        tableWidget->setItem(3, 0, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        tableWidget->setItem(3, 1, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        tableWidget->setItem(3, 2, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        tableWidget->setItem(3, 3, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        tableWidget->setItem(3, 4, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        tableWidget->setItem(3, 5, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        tableWidget->setItem(3, 6, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        tableWidget->setItem(4, 0, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        tableWidget->setItem(4, 1, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        tableWidget->setItem(4, 2, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        tableWidget->setItem(4, 3, __qtablewidgetitem48);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        tableWidget->setItem(4, 4, __qtablewidgetitem49);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        tableWidget->setItem(4, 5, __qtablewidgetitem50);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        tableWidget->setItem(4, 6, __qtablewidgetitem51);
        QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
        tableWidget->setItem(5, 0, __qtablewidgetitem52);
        QTableWidgetItem *__qtablewidgetitem53 = new QTableWidgetItem();
        tableWidget->setItem(5, 1, __qtablewidgetitem53);
        QTableWidgetItem *__qtablewidgetitem54 = new QTableWidgetItem();
        tableWidget->setItem(5, 2, __qtablewidgetitem54);
        QTableWidgetItem *__qtablewidgetitem55 = new QTableWidgetItem();
        tableWidget->setItem(5, 3, __qtablewidgetitem55);
        QTableWidgetItem *__qtablewidgetitem56 = new QTableWidgetItem();
        tableWidget->setItem(5, 4, __qtablewidgetitem56);
        QTableWidgetItem *__qtablewidgetitem57 = new QTableWidgetItem();
        tableWidget->setItem(5, 5, __qtablewidgetitem57);
        QTableWidgetItem *__qtablewidgetitem58 = new QTableWidgetItem();
        tableWidget->setItem(5, 6, __qtablewidgetitem58);
        QTableWidgetItem *__qtablewidgetitem59 = new QTableWidgetItem();
        tableWidget->setItem(6, 0, __qtablewidgetitem59);
        QTableWidgetItem *__qtablewidgetitem60 = new QTableWidgetItem();
        tableWidget->setItem(6, 1, __qtablewidgetitem60);
        QTableWidgetItem *__qtablewidgetitem61 = new QTableWidgetItem();
        tableWidget->setItem(6, 2, __qtablewidgetitem61);
        QTableWidgetItem *__qtablewidgetitem62 = new QTableWidgetItem();
        tableWidget->setItem(6, 3, __qtablewidgetitem62);
        QTableWidgetItem *__qtablewidgetitem63 = new QTableWidgetItem();
        tableWidget->setItem(6, 4, __qtablewidgetitem63);
        QTableWidgetItem *__qtablewidgetitem64 = new QTableWidgetItem();
        tableWidget->setItem(6, 5, __qtablewidgetitem64);
        QTableWidgetItem *__qtablewidgetitem65 = new QTableWidgetItem();
        tableWidget->setItem(6, 6, __qtablewidgetitem65);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        gridLayout->addWidget(tableWidget, 2, 0, 1, 5);

        label_tips = new QLabel(evection);
        label_tips->setObjectName(QStringLiteral("label_tips"));
        label_tips->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_tips, 0, 2, 1, 3);


        retranslateUi(evection);

        QMetaObject::connectSlotsByName(evection);
    } // setupUi

    void retranslateUi(QDialog *evection)
    {
        evection->setWindowTitle(QApplication::translate("evection", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("evection", "<html><head/><body><p><span style=\" font-size:20pt; color:#c4a000;\">\345\207\272\345\267\256\350\256\260\345\275\225\346\237\245\350\257\242\357\274\232</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("evection", "\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("evection", "\345\271\264\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("evection", "\346\234\210\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("evection", "\345\221\230\345\267\245\345\217\267:", Q_NULLPTR));
        lineEdit->setInputMask(QString());
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QApplication::translate("evection", "20180100", Q_NULLPTR));
        label_6->setText(QApplication::translate("evection", "\345\256\241\346\240\270\347\212\266\346\200\201\357\274\232", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("evection", "\346\234\252\345\256\241\346\211\271", Q_NULLPTR)
         << QApplication::translate("evection", "\345\267\262\345\220\214\346\204\217", Q_NULLPTR)
         << QApplication::translate("evection", "\345\267\262\346\213\222\347\273\235", Q_NULLPTR)
         << QApplication::translate("evection", "ALL", Q_NULLPTR)
        );
        pushButton->setText(QApplication::translate("evection", "\346\237\245\350\257\242", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("evection", "\345\221\230\345\267\245\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("evection", "\345\247\223\345\220\215", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("evection", "\350\265\267\345\247\213\346\227\266\351\227\264", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("evection", "\347\273\223\346\235\237\346\227\266\351\227\264", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("evection", "\345\207\272\345\267\256\345\244\251\346\225\260", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("evection", "\345\207\272\345\267\256\345\234\260\347\202\271", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("evection", "\345\207\272\345\267\256\345\216\237\345\233\240", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("evection", "\345\256\241\346\211\271\347\212\266\346\200\201", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("evection", "\345\256\241\346\211\271\344\272\272id", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("evection", "\345\256\241\346\211\271\346\227\266\351\227\264", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem10->setText(QApplication::translate("evection", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem11->setText(QApplication::translate("evection", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem12->setText(QApplication::translate("evection", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem13->setText(QApplication::translate("evection", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem14->setText(QApplication::translate("evection", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem15->setText(QApplication::translate("evection", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem16->setText(QApplication::translate("evection", "7", Q_NULLPTR));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->item(0, 0);
        ___qtablewidgetitem17->setText(QApplication::translate("evection", "201801", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->item(0, 1);
        ___qtablewidgetitem18->setText(QApplication::translate("evection", "\345\274\240\344\270\211", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->item(0, 2);
        ___qtablewidgetitem19->setText(QApplication::translate("evection", "2018/01/02", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget->item(0, 3);
        ___qtablewidgetitem20->setText(QApplication::translate("evection", "2018/01/05", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget->item(0, 4);
        ___qtablewidgetitem21->setText(QApplication::translate("evection", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget->item(0, 5);
        ___qtablewidgetitem22->setText(QApplication::translate("evection", "\344\270\212\346\265\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget->item(0, 6);
        ___qtablewidgetitem23->setText(QApplication::translate("evection", "\346\212\200\346\234\257\346\224\257\346\214\201", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget->item(1, 0);
        ___qtablewidgetitem24->setText(QApplication::translate("evection", "201801", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget->item(1, 1);
        ___qtablewidgetitem25->setText(QApplication::translate("evection", "\345\274\240\344\270\211", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget->item(1, 2);
        ___qtablewidgetitem26->setText(QApplication::translate("evection", "2018/01/02", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidget->item(1, 3);
        ___qtablewidgetitem27->setText(QApplication::translate("evection", "2018/01/05", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidget->item(1, 4);
        ___qtablewidgetitem28->setText(QApplication::translate("evection", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem29 = tableWidget->item(1, 5);
        ___qtablewidgetitem29->setText(QApplication::translate("evection", "\344\270\212\346\265\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem30 = tableWidget->item(1, 6);
        ___qtablewidgetitem30->setText(QApplication::translate("evection", "\346\212\200\346\234\257\346\224\257\346\214\201", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem31 = tableWidget->item(2, 0);
        ___qtablewidgetitem31->setText(QApplication::translate("evection", "201801", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem32 = tableWidget->item(2, 1);
        ___qtablewidgetitem32->setText(QApplication::translate("evection", "\345\274\240\344\270\211", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem33 = tableWidget->item(2, 2);
        ___qtablewidgetitem33->setText(QApplication::translate("evection", "2018/01/02", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem34 = tableWidget->item(2, 3);
        ___qtablewidgetitem34->setText(QApplication::translate("evection", "2018/01/05", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem35 = tableWidget->item(2, 4);
        ___qtablewidgetitem35->setText(QApplication::translate("evection", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem36 = tableWidget->item(2, 5);
        ___qtablewidgetitem36->setText(QApplication::translate("evection", "\344\270\212\346\265\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem37 = tableWidget->item(2, 6);
        ___qtablewidgetitem37->setText(QApplication::translate("evection", "\346\212\200\346\234\257\346\224\257\346\214\201", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem38 = tableWidget->item(3, 0);
        ___qtablewidgetitem38->setText(QApplication::translate("evection", "201801", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem39 = tableWidget->item(3, 1);
        ___qtablewidgetitem39->setText(QApplication::translate("evection", "\345\274\240\344\270\211", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem40 = tableWidget->item(3, 2);
        ___qtablewidgetitem40->setText(QApplication::translate("evection", "2018/01/02", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem41 = tableWidget->item(3, 3);
        ___qtablewidgetitem41->setText(QApplication::translate("evection", "2018/01/05", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem42 = tableWidget->item(3, 4);
        ___qtablewidgetitem42->setText(QApplication::translate("evection", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem43 = tableWidget->item(3, 5);
        ___qtablewidgetitem43->setText(QApplication::translate("evection", "\344\270\212\346\265\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem44 = tableWidget->item(3, 6);
        ___qtablewidgetitem44->setText(QApplication::translate("evection", "\346\212\200\346\234\257\346\224\257\346\214\201", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem45 = tableWidget->item(4, 0);
        ___qtablewidgetitem45->setText(QApplication::translate("evection", "201801", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem46 = tableWidget->item(4, 1);
        ___qtablewidgetitem46->setText(QApplication::translate("evection", "\345\274\240\344\270\211", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem47 = tableWidget->item(4, 2);
        ___qtablewidgetitem47->setText(QApplication::translate("evection", "2018/01/02", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem48 = tableWidget->item(4, 3);
        ___qtablewidgetitem48->setText(QApplication::translate("evection", "2018/01/05", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem49 = tableWidget->item(4, 4);
        ___qtablewidgetitem49->setText(QApplication::translate("evection", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem50 = tableWidget->item(4, 5);
        ___qtablewidgetitem50->setText(QApplication::translate("evection", "\344\270\212\346\265\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem51 = tableWidget->item(4, 6);
        ___qtablewidgetitem51->setText(QApplication::translate("evection", "\346\212\200\346\234\257\346\224\257\346\214\201", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem52 = tableWidget->item(5, 0);
        ___qtablewidgetitem52->setText(QApplication::translate("evection", "201801", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem53 = tableWidget->item(5, 1);
        ___qtablewidgetitem53->setText(QApplication::translate("evection", "\345\274\240\344\270\211", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem54 = tableWidget->item(5, 2);
        ___qtablewidgetitem54->setText(QApplication::translate("evection", "2018/01/02", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem55 = tableWidget->item(5, 3);
        ___qtablewidgetitem55->setText(QApplication::translate("evection", "2018/01/05", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem56 = tableWidget->item(5, 4);
        ___qtablewidgetitem56->setText(QApplication::translate("evection", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem57 = tableWidget->item(5, 5);
        ___qtablewidgetitem57->setText(QApplication::translate("evection", "\344\270\212\346\265\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem58 = tableWidget->item(5, 6);
        ___qtablewidgetitem58->setText(QApplication::translate("evection", "\346\212\200\346\234\257\346\224\257\346\214\201", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem59 = tableWidget->item(6, 0);
        ___qtablewidgetitem59->setText(QApplication::translate("evection", "201801", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem60 = tableWidget->item(6, 1);
        ___qtablewidgetitem60->setText(QApplication::translate("evection", "\345\274\240\344\270\211", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem61 = tableWidget->item(6, 2);
        ___qtablewidgetitem61->setText(QApplication::translate("evection", "2018/01/02", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem62 = tableWidget->item(6, 3);
        ___qtablewidgetitem62->setText(QApplication::translate("evection", "2018/01/05", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem63 = tableWidget->item(6, 4);
        ___qtablewidgetitem63->setText(QApplication::translate("evection", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem64 = tableWidget->item(6, 5);
        ___qtablewidgetitem64->setText(QApplication::translate("evection", "\344\270\212\346\265\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem65 = tableWidget->item(6, 6);
        ___qtablewidgetitem65->setText(QApplication::translate("evection", "\346\212\200\346\234\257\346\224\257\346\214\201", Q_NULLPTR));
        tableWidget->setSortingEnabled(__sortingEnabled);

        label_tips->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class evection: public Ui_evection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVECTION_H
