/********************************************************************************
** Form generated from reading UI file 'vecateinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VECATEINFO_H
#define UI_VECATEINFO_H

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

class Ui_vecateInfo
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
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

    void setupUi(QDialog *vecateInfo)
    {
        if (vecateInfo->objectName().isEmpty())
            vecateInfo->setObjectName(QStringLiteral("vecateInfo"));
        vecateInfo->resize(728, 596);
        gridLayout = new QGridLayout(vecateInfo);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(vecateInfo);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(vecateInfo);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        label_3 = new QLabel(vecateInfo);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        spinBox_year = new QSpinBox(vecateInfo);
        spinBox_year->setObjectName(QStringLiteral("spinBox_year"));
        spinBox_year->setMinimum(1990);
        spinBox_year->setMaximum(2100);
        spinBox_year->setValue(2018);

        horizontalLayout->addWidget(spinBox_year);

        label_4 = new QLabel(vecateInfo);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);

        spinBox_month = new QSpinBox(vecateInfo);
        spinBox_month->setObjectName(QStringLiteral("spinBox_month"));
        spinBox_month->setAccelerated(false);
        spinBox_month->setCorrectionMode(QAbstractSpinBox::CorrectToNearestValue);
        spinBox_month->setMinimum(1);
        spinBox_month->setMaximum(12);
        spinBox_month->setSingleStep(1);
        spinBox_month->setValue(1);
        spinBox_month->setDisplayIntegerBase(10);

        horizontalLayout->addWidget(spinBox_month);


        gridLayout->addLayout(horizontalLayout, 1, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_5 = new QLabel(vecateInfo);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_2->addWidget(label_5);

        lineEdit = new QLineEdit(vecateInfo);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMaxLength(32767);
        lineEdit->setFrame(true);
        lineEdit->setAlignment(Qt::AlignCenter);
        lineEdit->setDragEnabled(false);

        horizontalLayout_2->addWidget(lineEdit);


        gridLayout->addLayout(horizontalLayout_2, 1, 2, 1, 1);

        pushButton = new QPushButton(vecateInfo);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 1, 3, 1, 1);

        tableWidget = new QTableWidget(vecateInfo);
        if (tableWidget->columnCount() < 8)
            tableWidget->setColumnCount(8);
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
        if (tableWidget->rowCount() < 7)
            tableWidget->setRowCount(7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setItem(0, 2, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setItem(0, 3, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget->setItem(0, 4, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget->setItem(0, 5, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget->setItem(0, 6, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget->setItem(0, 7, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget->setItem(1, 2, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget->setItem(1, 3, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget->setItem(1, 4, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget->setItem(1, 5, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget->setItem(1, 6, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidget->setItem(1, 7, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidget->setItem(2, 2, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidget->setItem(2, 3, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableWidget->setItem(2, 4, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableWidget->setItem(2, 5, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableWidget->setItem(2, 6, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tableWidget->setItem(2, 7, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tableWidget->setItem(3, 2, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tableWidget->setItem(3, 3, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        tableWidget->setItem(3, 4, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        tableWidget->setItem(3, 5, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        tableWidget->setItem(3, 6, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        tableWidget->setItem(3, 7, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        tableWidget->setItem(4, 2, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        tableWidget->setItem(4, 3, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        tableWidget->setItem(4, 4, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        tableWidget->setItem(4, 5, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        tableWidget->setItem(4, 6, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        tableWidget->setItem(4, 7, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        tableWidget->setItem(5, 2, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        tableWidget->setItem(5, 3, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        tableWidget->setItem(5, 4, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        tableWidget->setItem(5, 5, __qtablewidgetitem48);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        tableWidget->setItem(5, 6, __qtablewidgetitem49);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        tableWidget->setItem(5, 7, __qtablewidgetitem50);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        tableWidget->setItem(6, 2, __qtablewidgetitem51);
        QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
        tableWidget->setItem(6, 3, __qtablewidgetitem52);
        QTableWidgetItem *__qtablewidgetitem53 = new QTableWidgetItem();
        tableWidget->setItem(6, 4, __qtablewidgetitem53);
        QTableWidgetItem *__qtablewidgetitem54 = new QTableWidgetItem();
        tableWidget->setItem(6, 5, __qtablewidgetitem54);
        QTableWidgetItem *__qtablewidgetitem55 = new QTableWidgetItem();
        tableWidget->setItem(6, 6, __qtablewidgetitem55);
        QTableWidgetItem *__qtablewidgetitem56 = new QTableWidgetItem();
        tableWidget->setItem(6, 7, __qtablewidgetitem56);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->horizontalHeader()->setDefaultSectionSize(115);

        gridLayout->addWidget(tableWidget, 2, 1, 1, 3);

        label_tips = new QLabel(vecateInfo);
        label_tips->setObjectName(QStringLiteral("label_tips"));
        label_tips->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_tips, 0, 2, 1, 2);


        retranslateUi(vecateInfo);

        QMetaObject::connectSlotsByName(vecateInfo);
    } // setupUi

    void retranslateUi(QDialog *vecateInfo)
    {
        vecateInfo->setWindowTitle(QApplication::translate("vecateInfo", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("vecateInfo", "<html><head/><body><p><span style=\" font-size:22pt; color:#f57900;\">\345\256\241\346\211\271\350\256\260\345\275\225:</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("vecateInfo", "\345\256\241\346\211\271\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("vecateInfo", "\345\271\264\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("vecateInfo", "\346\234\210\357\274\232", Q_NULLPTR));
        spinBox_month->setSpecialValueText(QString());
        spinBox_month->setSuffix(QString());
        label_5->setText(QApplication::translate("vecateInfo", "\345\221\230\345\267\245\345\217\267:", Q_NULLPTR));
        lineEdit->setInputMask(QString());
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QApplication::translate("vecateInfo", "20180100", Q_NULLPTR));
        pushButton->setText(QApplication::translate("vecateInfo", "\346\237\245\350\257\242", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("vecateInfo", "\345\256\241\346\211\271\346\227\266\351\227\264", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("vecateInfo", "\345\256\241\346\211\271\347\212\266\346\200\201", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("vecateInfo", "\345\221\230\345\267\245\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("vecateInfo", "\345\247\223\345\220\215", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("vecateInfo", "\350\265\267\345\247\213\346\227\266\351\227\264", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("vecateInfo", "\347\273\223\346\235\237\346\227\266\351\227\264", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("vecateInfo", "\350\257\267\345\201\207\346\227\266\351\225\277/\345\244\251", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("vecateInfo", "\350\257\267\345\201\207\345\216\237\345\233\240", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem8->setText(QApplication::translate("vecateInfo", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem9->setText(QApplication::translate("vecateInfo", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem10->setText(QApplication::translate("vecateInfo", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem11->setText(QApplication::translate("vecateInfo", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem12->setText(QApplication::translate("vecateInfo", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem13->setText(QApplication::translate("vecateInfo", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem14->setText(QApplication::translate("vecateInfo", "7", Q_NULLPTR));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->item(0, 2);
        ___qtablewidgetitem15->setText(QApplication::translate("vecateInfo", "201801", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->item(0, 3);
        ___qtablewidgetitem16->setText(QApplication::translate("vecateInfo", "\345\274\240\344\270\211", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->item(0, 4);
        ___qtablewidgetitem17->setText(QApplication::translate("vecateInfo", "2018/01/02", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->item(0, 5);
        ___qtablewidgetitem18->setText(QApplication::translate("vecateInfo", "2018/01/05", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->item(0, 6);
        ___qtablewidgetitem19->setText(QApplication::translate("vecateInfo", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget->item(0, 7);
        ___qtablewidgetitem20->setText(QApplication::translate("vecateInfo", "\347\224\237\347\227\205", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget->item(1, 2);
        ___qtablewidgetitem21->setText(QApplication::translate("vecateInfo", "201801", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget->item(1, 3);
        ___qtablewidgetitem22->setText(QApplication::translate("vecateInfo", "\345\274\240\344\270\211", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget->item(1, 4);
        ___qtablewidgetitem23->setText(QApplication::translate("vecateInfo", "2018/01/02", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget->item(1, 5);
        ___qtablewidgetitem24->setText(QApplication::translate("vecateInfo", "2018/01/05", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget->item(1, 6);
        ___qtablewidgetitem25->setText(QApplication::translate("vecateInfo", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget->item(1, 7);
        ___qtablewidgetitem26->setText(QApplication::translate("vecateInfo", "\345\233\236\345\256\266\346\216\242\344\272\262", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidget->item(2, 2);
        ___qtablewidgetitem27->setText(QApplication::translate("vecateInfo", "201801", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidget->item(2, 3);
        ___qtablewidgetitem28->setText(QApplication::translate("vecateInfo", "\345\274\240\344\270\211", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem29 = tableWidget->item(2, 4);
        ___qtablewidgetitem29->setText(QApplication::translate("vecateInfo", "2018/01/02", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem30 = tableWidget->item(2, 5);
        ___qtablewidgetitem30->setText(QApplication::translate("vecateInfo", "2018/01/05", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem31 = tableWidget->item(2, 6);
        ___qtablewidgetitem31->setText(QApplication::translate("vecateInfo", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem32 = tableWidget->item(2, 7);
        ___qtablewidgetitem32->setText(QApplication::translate("vecateInfo", "\345\233\236\345\256\266\346\216\242\344\272\262", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem33 = tableWidget->item(3, 2);
        ___qtablewidgetitem33->setText(QApplication::translate("vecateInfo", "201801", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem34 = tableWidget->item(3, 3);
        ___qtablewidgetitem34->setText(QApplication::translate("vecateInfo", "\345\274\240\344\270\211", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem35 = tableWidget->item(3, 4);
        ___qtablewidgetitem35->setText(QApplication::translate("vecateInfo", "2018/01/02", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem36 = tableWidget->item(3, 5);
        ___qtablewidgetitem36->setText(QApplication::translate("vecateInfo", "2018/01/05", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem37 = tableWidget->item(3, 6);
        ___qtablewidgetitem37->setText(QApplication::translate("vecateInfo", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem38 = tableWidget->item(3, 7);
        ___qtablewidgetitem38->setText(QApplication::translate("vecateInfo", "\345\233\236\345\256\266\346\216\242\344\272\262", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem39 = tableWidget->item(4, 2);
        ___qtablewidgetitem39->setText(QApplication::translate("vecateInfo", "201801", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem40 = tableWidget->item(4, 3);
        ___qtablewidgetitem40->setText(QApplication::translate("vecateInfo", "\345\274\240\344\270\211", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem41 = tableWidget->item(4, 4);
        ___qtablewidgetitem41->setText(QApplication::translate("vecateInfo", "2018/01/02", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem42 = tableWidget->item(4, 5);
        ___qtablewidgetitem42->setText(QApplication::translate("vecateInfo", "2018/01/05", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem43 = tableWidget->item(4, 6);
        ___qtablewidgetitem43->setText(QApplication::translate("vecateInfo", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem44 = tableWidget->item(4, 7);
        ___qtablewidgetitem44->setText(QApplication::translate("vecateInfo", "\345\233\236\345\256\266\346\216\242\344\272\262", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem45 = tableWidget->item(5, 2);
        ___qtablewidgetitem45->setText(QApplication::translate("vecateInfo", "201801", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem46 = tableWidget->item(5, 3);
        ___qtablewidgetitem46->setText(QApplication::translate("vecateInfo", "\345\274\240\344\270\211", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem47 = tableWidget->item(5, 4);
        ___qtablewidgetitem47->setText(QApplication::translate("vecateInfo", "2018/01/02", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem48 = tableWidget->item(5, 5);
        ___qtablewidgetitem48->setText(QApplication::translate("vecateInfo", "2018/01/05", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem49 = tableWidget->item(5, 6);
        ___qtablewidgetitem49->setText(QApplication::translate("vecateInfo", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem50 = tableWidget->item(5, 7);
        ___qtablewidgetitem50->setText(QApplication::translate("vecateInfo", "\345\233\236\345\256\266\346\216\242\344\272\262", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem51 = tableWidget->item(6, 2);
        ___qtablewidgetitem51->setText(QApplication::translate("vecateInfo", "201801", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem52 = tableWidget->item(6, 3);
        ___qtablewidgetitem52->setText(QApplication::translate("vecateInfo", "\345\274\240\344\270\211", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem53 = tableWidget->item(6, 4);
        ___qtablewidgetitem53->setText(QApplication::translate("vecateInfo", "2018/01/02", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem54 = tableWidget->item(6, 5);
        ___qtablewidgetitem54->setText(QApplication::translate("vecateInfo", "2018/01/05", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem55 = tableWidget->item(6, 6);
        ___qtablewidgetitem55->setText(QApplication::translate("vecateInfo", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem56 = tableWidget->item(6, 7);
        ___qtablewidgetitem56->setText(QApplication::translate("vecateInfo", "\344\270\212\346\265\267", Q_NULLPTR));
        tableWidget->setSortingEnabled(__sortingEnabled);

        label_tips->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class vecateInfo: public Ui_vecateInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VECATEINFO_H
