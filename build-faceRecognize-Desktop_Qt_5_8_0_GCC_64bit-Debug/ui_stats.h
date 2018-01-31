/********************************************************************************
** Form generated from reading UI file 'stats.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATS_H
#define UI_STATS_H

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
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_stats
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
    QPushButton *pushButton;
    QTableWidget *tableWidget;
    QLabel *label_tips;

    void setupUi(QDialog *stats)
    {
        if (stats->objectName().isEmpty())
            stats->setObjectName(QStringLiteral("stats"));
        stats->resize(836, 448);
        gridLayout = new QGridLayout(stats);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(stats);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 2);

        label_2 = new QLabel(stats);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(stats);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        spinBox_year = new QSpinBox(stats);
        spinBox_year->setObjectName(QStringLiteral("spinBox_year"));
        spinBox_year->setMinimum(1990);
        spinBox_year->setMaximum(2100);
        spinBox_year->setValue(2018);

        horizontalLayout->addWidget(spinBox_year);

        label_4 = new QLabel(stats);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);

        spinBox_month = new QSpinBox(stats);
        spinBox_month->setObjectName(QStringLiteral("spinBox_month"));
        spinBox_month->setMinimum(1);
        spinBox_month->setMaximum(12);

        horizontalLayout->addWidget(spinBox_month);


        gridLayout->addLayout(horizontalLayout, 1, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_5 = new QLabel(stats);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_2->addWidget(label_5);

        lineEdit = new QLineEdit(stats);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMaxLength(32767);
        lineEdit->setFrame(true);
        lineEdit->setAlignment(Qt::AlignCenter);
        lineEdit->setDragEnabled(false);

        horizontalLayout_2->addWidget(lineEdit);


        gridLayout->addLayout(horizontalLayout_2, 1, 2, 1, 1);

        pushButton = new QPushButton(stats);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 1, 3, 1, 1);

        tableWidget = new QTableWidget(stats);
        if (tableWidget->columnCount() < 11)
            tableWidget->setColumnCount(11);
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
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(10, __qtablewidgetitem10);
        if (tableWidget->rowCount() < 7)
            tableWidget->setRowCount(7);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget->setItem(0, 1, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget->setItem(0, 2, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget->setItem(0, 3, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget->setItem(0, 4, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget->setItem(0, 5, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget->setItem(0, 6, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget->setItem(0, 7, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidget->setItem(0, 8, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidget->setItem(0, 9, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidget->setItem(0, 10, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableWidget->setItem(1, 0, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableWidget->setItem(1, 1, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableWidget->setItem(1, 2, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tableWidget->setItem(1, 3, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tableWidget->setItem(1, 4, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tableWidget->setItem(1, 5, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        tableWidget->setItem(1, 6, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        tableWidget->setItem(1, 7, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        tableWidget->setItem(1, 8, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        tableWidget->setItem(1, 9, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        tableWidget->setItem(1, 10, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        tableWidget->setItem(2, 0, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        tableWidget->setItem(2, 1, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        tableWidget->setItem(2, 2, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        tableWidget->setItem(2, 3, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        tableWidget->setItem(2, 4, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        tableWidget->setItem(2, 5, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        tableWidget->setItem(2, 6, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        tableWidget->setItem(2, 7, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        tableWidget->setItem(2, 8, __qtablewidgetitem48);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        tableWidget->setItem(2, 9, __qtablewidgetitem49);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        tableWidget->setItem(2, 10, __qtablewidgetitem50);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        tableWidget->setItem(3, 0, __qtablewidgetitem51);
        QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
        tableWidget->setItem(3, 1, __qtablewidgetitem52);
        QTableWidgetItem *__qtablewidgetitem53 = new QTableWidgetItem();
        tableWidget->setItem(3, 2, __qtablewidgetitem53);
        QTableWidgetItem *__qtablewidgetitem54 = new QTableWidgetItem();
        tableWidget->setItem(3, 3, __qtablewidgetitem54);
        QTableWidgetItem *__qtablewidgetitem55 = new QTableWidgetItem();
        tableWidget->setItem(3, 4, __qtablewidgetitem55);
        QTableWidgetItem *__qtablewidgetitem56 = new QTableWidgetItem();
        tableWidget->setItem(3, 5, __qtablewidgetitem56);
        QTableWidgetItem *__qtablewidgetitem57 = new QTableWidgetItem();
        tableWidget->setItem(3, 6, __qtablewidgetitem57);
        QTableWidgetItem *__qtablewidgetitem58 = new QTableWidgetItem();
        tableWidget->setItem(3, 7, __qtablewidgetitem58);
        QTableWidgetItem *__qtablewidgetitem59 = new QTableWidgetItem();
        tableWidget->setItem(3, 8, __qtablewidgetitem59);
        QTableWidgetItem *__qtablewidgetitem60 = new QTableWidgetItem();
        tableWidget->setItem(3, 9, __qtablewidgetitem60);
        QTableWidgetItem *__qtablewidgetitem61 = new QTableWidgetItem();
        tableWidget->setItem(3, 10, __qtablewidgetitem61);
        QTableWidgetItem *__qtablewidgetitem62 = new QTableWidgetItem();
        tableWidget->setItem(4, 0, __qtablewidgetitem62);
        QTableWidgetItem *__qtablewidgetitem63 = new QTableWidgetItem();
        tableWidget->setItem(4, 1, __qtablewidgetitem63);
        QTableWidgetItem *__qtablewidgetitem64 = new QTableWidgetItem();
        tableWidget->setItem(4, 2, __qtablewidgetitem64);
        QTableWidgetItem *__qtablewidgetitem65 = new QTableWidgetItem();
        tableWidget->setItem(4, 3, __qtablewidgetitem65);
        QTableWidgetItem *__qtablewidgetitem66 = new QTableWidgetItem();
        tableWidget->setItem(4, 4, __qtablewidgetitem66);
        QTableWidgetItem *__qtablewidgetitem67 = new QTableWidgetItem();
        tableWidget->setItem(4, 5, __qtablewidgetitem67);
        QTableWidgetItem *__qtablewidgetitem68 = new QTableWidgetItem();
        tableWidget->setItem(4, 6, __qtablewidgetitem68);
        QTableWidgetItem *__qtablewidgetitem69 = new QTableWidgetItem();
        tableWidget->setItem(4, 7, __qtablewidgetitem69);
        QTableWidgetItem *__qtablewidgetitem70 = new QTableWidgetItem();
        tableWidget->setItem(4, 8, __qtablewidgetitem70);
        QTableWidgetItem *__qtablewidgetitem71 = new QTableWidgetItem();
        tableWidget->setItem(4, 9, __qtablewidgetitem71);
        QTableWidgetItem *__qtablewidgetitem72 = new QTableWidgetItem();
        tableWidget->setItem(4, 10, __qtablewidgetitem72);
        QTableWidgetItem *__qtablewidgetitem73 = new QTableWidgetItem();
        tableWidget->setItem(5, 0, __qtablewidgetitem73);
        QTableWidgetItem *__qtablewidgetitem74 = new QTableWidgetItem();
        tableWidget->setItem(5, 1, __qtablewidgetitem74);
        QTableWidgetItem *__qtablewidgetitem75 = new QTableWidgetItem();
        tableWidget->setItem(5, 2, __qtablewidgetitem75);
        QTableWidgetItem *__qtablewidgetitem76 = new QTableWidgetItem();
        tableWidget->setItem(5, 3, __qtablewidgetitem76);
        QTableWidgetItem *__qtablewidgetitem77 = new QTableWidgetItem();
        tableWidget->setItem(5, 4, __qtablewidgetitem77);
        QTableWidgetItem *__qtablewidgetitem78 = new QTableWidgetItem();
        tableWidget->setItem(5, 5, __qtablewidgetitem78);
        QTableWidgetItem *__qtablewidgetitem79 = new QTableWidgetItem();
        tableWidget->setItem(5, 6, __qtablewidgetitem79);
        QTableWidgetItem *__qtablewidgetitem80 = new QTableWidgetItem();
        tableWidget->setItem(5, 7, __qtablewidgetitem80);
        QTableWidgetItem *__qtablewidgetitem81 = new QTableWidgetItem();
        tableWidget->setItem(5, 8, __qtablewidgetitem81);
        QTableWidgetItem *__qtablewidgetitem82 = new QTableWidgetItem();
        tableWidget->setItem(5, 9, __qtablewidgetitem82);
        QTableWidgetItem *__qtablewidgetitem83 = new QTableWidgetItem();
        tableWidget->setItem(5, 10, __qtablewidgetitem83);
        QTableWidgetItem *__qtablewidgetitem84 = new QTableWidgetItem();
        tableWidget->setItem(6, 0, __qtablewidgetitem84);
        QTableWidgetItem *__qtablewidgetitem85 = new QTableWidgetItem();
        tableWidget->setItem(6, 1, __qtablewidgetitem85);
        QTableWidgetItem *__qtablewidgetitem86 = new QTableWidgetItem();
        tableWidget->setItem(6, 2, __qtablewidgetitem86);
        QTableWidgetItem *__qtablewidgetitem87 = new QTableWidgetItem();
        tableWidget->setItem(6, 3, __qtablewidgetitem87);
        QTableWidgetItem *__qtablewidgetitem88 = new QTableWidgetItem();
        tableWidget->setItem(6, 4, __qtablewidgetitem88);
        QTableWidgetItem *__qtablewidgetitem89 = new QTableWidgetItem();
        tableWidget->setItem(6, 5, __qtablewidgetitem89);
        QTableWidgetItem *__qtablewidgetitem90 = new QTableWidgetItem();
        tableWidget->setItem(6, 6, __qtablewidgetitem90);
        QTableWidgetItem *__qtablewidgetitem91 = new QTableWidgetItem();
        tableWidget->setItem(6, 7, __qtablewidgetitem91);
        QTableWidgetItem *__qtablewidgetitem92 = new QTableWidgetItem();
        tableWidget->setItem(6, 8, __qtablewidgetitem92);
        QTableWidgetItem *__qtablewidgetitem93 = new QTableWidgetItem();
        tableWidget->setItem(6, 9, __qtablewidgetitem93);
        QTableWidgetItem *__qtablewidgetitem94 = new QTableWidgetItem();
        tableWidget->setItem(6, 10, __qtablewidgetitem94);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        gridLayout->addWidget(tableWidget, 2, 0, 1, 4);

        label_tips = new QLabel(stats);
        label_tips->setObjectName(QStringLiteral("label_tips"));
        label_tips->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_tips, 0, 2, 1, 2);


        retranslateUi(stats);

        QMetaObject::connectSlotsByName(stats);
    } // setupUi

    void retranslateUi(QDialog *stats)
    {
        stats->setWindowTitle(QApplication::translate("stats", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("stats", "<html><head/><body><p><span style=\" font-size:20pt; color:#c4a000;\">\350\200\203\345\213\244\347\273\237\350\256\241\350\241\250\357\274\232</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("stats", "\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("stats", "\345\271\264\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("stats", "\346\234\210\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("stats", "\345\221\230\345\267\245\345\217\267:", Q_NULLPTR));
        lineEdit->setInputMask(QString());
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QApplication::translate("stats", "20180100", Q_NULLPTR));
        pushButton->setText(QApplication::translate("stats", "\346\237\245\350\257\242", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("stats", "\345\221\230\345\267\245\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("stats", "\345\247\223\345\220\215", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("stats", "\346\227\245\346\234\237", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("stats", "\350\277\237\345\210\260\346\254\241\346\225\260", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("stats", "\346\227\251\351\200\200\346\254\241\346\225\260", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("stats", "\346\227\267\345\267\245\346\254\241\346\225\260", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("stats", "\350\257\267\345\201\207\346\254\241\346\225\260", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("stats", "\345\207\272\345\267\256\346\254\241\346\225\260", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("stats", "\345\244\226\345\207\272\346\254\241\346\225\260", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("stats", "\345\212\240\347\217\255\346\254\241\346\225\260", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QApplication::translate("stats", "\345\212\240\347\217\255\346\227\266\351\225\277", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem11->setText(QApplication::translate("stats", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem12->setText(QApplication::translate("stats", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem13->setText(QApplication::translate("stats", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem14->setText(QApplication::translate("stats", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem15->setText(QApplication::translate("stats", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem16->setText(QApplication::translate("stats", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem17->setText(QApplication::translate("stats", "7", Q_NULLPTR));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->item(0, 0);
        ___qtablewidgetitem18->setText(QApplication::translate("stats", "201801", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->item(0, 1);
        ___qtablewidgetitem19->setText(QApplication::translate("stats", "\345\274\240\344\270\211", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget->item(0, 2);
        ___qtablewidgetitem20->setText(QApplication::translate("stats", "2017/09", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget->item(0, 3);
        ___qtablewidgetitem21->setText(QApplication::translate("stats", "0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget->item(0, 4);
        ___qtablewidgetitem22->setText(QApplication::translate("stats", "0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget->item(0, 5);
        ___qtablewidgetitem23->setText(QApplication::translate("stats", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget->item(0, 6);
        ___qtablewidgetitem24->setText(QApplication::translate("stats", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget->item(0, 7);
        ___qtablewidgetitem25->setText(QApplication::translate("stats", "0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget->item(0, 8);
        ___qtablewidgetitem26->setText(QApplication::translate("stats", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidget->item(0, 9);
        ___qtablewidgetitem27->setText(QApplication::translate("stats", "0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidget->item(0, 10);
        ___qtablewidgetitem28->setText(QApplication::translate("stats", "0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem29 = tableWidget->item(1, 0);
        ___qtablewidgetitem29->setText(QApplication::translate("stats", "201801", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem30 = tableWidget->item(1, 1);
        ___qtablewidgetitem30->setText(QApplication::translate("stats", "\345\274\240\344\270\211", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem31 = tableWidget->item(1, 2);
        ___qtablewidgetitem31->setText(QApplication::translate("stats", "2017/10", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem32 = tableWidget->item(1, 3);
        ___qtablewidgetitem32->setText(QApplication::translate("stats", "0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem33 = tableWidget->item(1, 4);
        ___qtablewidgetitem33->setText(QApplication::translate("stats", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem34 = tableWidget->item(1, 5);
        ___qtablewidgetitem34->setText(QApplication::translate("stats", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem35 = tableWidget->item(1, 6);
        ___qtablewidgetitem35->setText(QApplication::translate("stats", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem36 = tableWidget->item(1, 7);
        ___qtablewidgetitem36->setText(QApplication::translate("stats", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem37 = tableWidget->item(1, 8);
        ___qtablewidgetitem37->setText(QApplication::translate("stats", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem38 = tableWidget->item(1, 9);
        ___qtablewidgetitem38->setText(QApplication::translate("stats", "0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem39 = tableWidget->item(1, 10);
        ___qtablewidgetitem39->setText(QApplication::translate("stats", "0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem40 = tableWidget->item(2, 0);
        ___qtablewidgetitem40->setText(QApplication::translate("stats", "201801", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem41 = tableWidget->item(2, 1);
        ___qtablewidgetitem41->setText(QApplication::translate("stats", "\345\274\240\344\270\211", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem42 = tableWidget->item(2, 2);
        ___qtablewidgetitem42->setText(QApplication::translate("stats", "2017/11", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem43 = tableWidget->item(2, 3);
        ___qtablewidgetitem43->setText(QApplication::translate("stats", "0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem44 = tableWidget->item(2, 4);
        ___qtablewidgetitem44->setText(QApplication::translate("stats", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem45 = tableWidget->item(2, 5);
        ___qtablewidgetitem45->setText(QApplication::translate("stats", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem46 = tableWidget->item(2, 6);
        ___qtablewidgetitem46->setText(QApplication::translate("stats", "0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem47 = tableWidget->item(2, 7);
        ___qtablewidgetitem47->setText(QApplication::translate("stats", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem48 = tableWidget->item(2, 8);
        ___qtablewidgetitem48->setText(QApplication::translate("stats", "0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem49 = tableWidget->item(2, 9);
        ___qtablewidgetitem49->setText(QApplication::translate("stats", "0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem50 = tableWidget->item(2, 10);
        ___qtablewidgetitem50->setText(QApplication::translate("stats", "0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem51 = tableWidget->item(3, 0);
        ___qtablewidgetitem51->setText(QApplication::translate("stats", "201801", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem52 = tableWidget->item(3, 1);
        ___qtablewidgetitem52->setText(QApplication::translate("stats", "\345\274\240\344\270\211", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem53 = tableWidget->item(3, 2);
        ___qtablewidgetitem53->setText(QApplication::translate("stats", "2017/12", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem54 = tableWidget->item(3, 3);
        ___qtablewidgetitem54->setText(QApplication::translate("stats", "0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem55 = tableWidget->item(3, 4);
        ___qtablewidgetitem55->setText(QApplication::translate("stats", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem56 = tableWidget->item(3, 5);
        ___qtablewidgetitem56->setText(QApplication::translate("stats", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem57 = tableWidget->item(3, 6);
        ___qtablewidgetitem57->setText(QApplication::translate("stats", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem58 = tableWidget->item(3, 7);
        ___qtablewidgetitem58->setText(QApplication::translate("stats", "0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem59 = tableWidget->item(3, 8);
        ___qtablewidgetitem59->setText(QApplication::translate("stats", "0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem60 = tableWidget->item(3, 9);
        ___qtablewidgetitem60->setText(QApplication::translate("stats", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem61 = tableWidget->item(3, 10);
        ___qtablewidgetitem61->setText(QApplication::translate("stats", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem62 = tableWidget->item(4, 0);
        ___qtablewidgetitem62->setText(QApplication::translate("stats", "201801", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem63 = tableWidget->item(4, 1);
        ___qtablewidgetitem63->setText(QApplication::translate("stats", "\345\274\240\344\270\211", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem64 = tableWidget->item(4, 2);
        ___qtablewidgetitem64->setText(QApplication::translate("stats", "2017/01", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem65 = tableWidget->item(4, 3);
        ___qtablewidgetitem65->setText(QApplication::translate("stats", "0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem66 = tableWidget->item(4, 4);
        ___qtablewidgetitem66->setText(QApplication::translate("stats", "0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem67 = tableWidget->item(4, 5);
        ___qtablewidgetitem67->setText(QApplication::translate("stats", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem68 = tableWidget->item(4, 6);
        ___qtablewidgetitem68->setText(QApplication::translate("stats", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem69 = tableWidget->item(4, 7);
        ___qtablewidgetitem69->setText(QApplication::translate("stats", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem70 = tableWidget->item(4, 8);
        ___qtablewidgetitem70->setText(QApplication::translate("stats", "0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem71 = tableWidget->item(4, 9);
        ___qtablewidgetitem71->setText(QApplication::translate("stats", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem72 = tableWidget->item(4, 10);
        ___qtablewidgetitem72->setText(QApplication::translate("stats", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem73 = tableWidget->item(5, 0);
        ___qtablewidgetitem73->setText(QApplication::translate("stats", "201801", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem74 = tableWidget->item(5, 1);
        ___qtablewidgetitem74->setText(QApplication::translate("stats", "\345\274\240\344\270\211", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem75 = tableWidget->item(5, 2);
        ___qtablewidgetitem75->setText(QApplication::translate("stats", "2017/02", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem76 = tableWidget->item(5, 3);
        ___qtablewidgetitem76->setText(QApplication::translate("stats", "0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem77 = tableWidget->item(5, 4);
        ___qtablewidgetitem77->setText(QApplication::translate("stats", "7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem78 = tableWidget->item(5, 5);
        ___qtablewidgetitem78->setText(QApplication::translate("stats", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem79 = tableWidget->item(5, 6);
        ___qtablewidgetitem79->setText(QApplication::translate("stats", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem80 = tableWidget->item(5, 7);
        ___qtablewidgetitem80->setText(QApplication::translate("stats", "0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem81 = tableWidget->item(5, 8);
        ___qtablewidgetitem81->setText(QApplication::translate("stats", "0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem82 = tableWidget->item(5, 9);
        ___qtablewidgetitem82->setText(QApplication::translate("stats", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem83 = tableWidget->item(5, 10);
        ___qtablewidgetitem83->setText(QApplication::translate("stats", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem84 = tableWidget->item(6, 0);
        ___qtablewidgetitem84->setText(QApplication::translate("stats", "201801", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem85 = tableWidget->item(6, 1);
        ___qtablewidgetitem85->setText(QApplication::translate("stats", "\345\274\240\344\270\211", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem86 = tableWidget->item(6, 2);
        ___qtablewidgetitem86->setText(QApplication::translate("stats", "2017/03", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem87 = tableWidget->item(6, 3);
        ___qtablewidgetitem87->setText(QApplication::translate("stats", "0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem88 = tableWidget->item(6, 4);
        ___qtablewidgetitem88->setText(QApplication::translate("stats", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem89 = tableWidget->item(6, 5);
        ___qtablewidgetitem89->setText(QApplication::translate("stats", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem90 = tableWidget->item(6, 6);
        ___qtablewidgetitem90->setText(QApplication::translate("stats", "0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem91 = tableWidget->item(6, 7);
        ___qtablewidgetitem91->setText(QApplication::translate("stats", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem92 = tableWidget->item(6, 8);
        ___qtablewidgetitem92->setText(QApplication::translate("stats", "0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem93 = tableWidget->item(6, 9);
        ___qtablewidgetitem93->setText(QApplication::translate("stats", "0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem94 = tableWidget->item(6, 10);
        ___qtablewidgetitem94->setText(QApplication::translate("stats", "0", Q_NULLPTR));
        tableWidget->setSortingEnabled(__sortingEnabled);

        label_tips->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class stats: public Ui_stats {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATS_H
