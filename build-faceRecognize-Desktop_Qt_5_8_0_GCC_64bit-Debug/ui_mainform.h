/********************************************************************************
** Form generated from reading UI file 'mainform.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINFORM_H
#define UI_MAINFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainform
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QLabel *label_authority;
    QLabel *label_name;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_renovate;
    QGroupBox *groupBox_2;
    QLabel *label_m1;
    QLabel *label_m4;
    QFrame *line_2;
    QFrame *line;
    QLabel *label_m2;
    QLabel *label_m3;
    QFrame *line_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *label_xx;
    QLabel *label_sx;
    QLabel *label_sx2;
    QLabel *label_ss;
    QLabel *label_xs;
    QLabel *label_ss2;
    QLabel *label_xs2;
    QLabel *label_xx2;
    QTreeWidget *treeWidget;
    QStackedWidget *stackedWidget;

    void setupUi(QWidget *mainform)
    {
        if (mainform->objectName().isEmpty())
            mainform->setObjectName(QStringLiteral("mainform"));
        mainform->resize(1208, 654);
        mainform->setContextMenuPolicy(Qt::NoContextMenu);
        gridLayout = new QGridLayout(mainform);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(mainform);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(100, 100));
        label->setMaximumSize(QSize(100, 100));

        horizontalLayout->addWidget(label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_authority = new QLabel(mainform);
        label_authority->setObjectName(QStringLiteral("label_authority"));
        sizePolicy.setHeightForWidth(label_authority->sizePolicy().hasHeightForWidth());
        label_authority->setSizePolicy(sizePolicy);
        label_authority->setMinimumSize(QSize(100, 50));
        label_authority->setMaximumSize(QSize(100, 50));
        QFont font;
        font.setFamily(QStringLiteral("AR PL UKai CN"));
        font.setPointSize(16);
        font.setBold(false);
        font.setItalic(true);
        font.setWeight(50);
        label_authority->setFont(font);
        label_authority->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_authority);

        label_name = new QLabel(mainform);
        label_name->setObjectName(QStringLiteral("label_name"));
        sizePolicy.setHeightForWidth(label_name->sizePolicy().hasHeightForWidth());
        label_name->setSizePolicy(sizePolicy);
        label_name->setMinimumSize(QSize(100, 50));
        label_name->setMaximumSize(QSize(100, 50));
        QFont font1;
        font1.setFamily(QStringLiteral("AR PL UKai CN"));
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        label_name->setFont(font1);
        label_name->setFocusPolicy(Qt::StrongFocus);
        label_name->setFrameShape(QFrame::NoFrame);
        label_name->setFrameShadow(QFrame::Raised);
        label_name->setTextFormat(Qt::RichText);
        label_name->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout->addWidget(label_name);


        horizontalLayout->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        pushButton_renovate = new QPushButton(mainform);
        pushButton_renovate->setObjectName(QStringLiteral("pushButton_renovate"));

        verticalLayout_2->addWidget(pushButton_renovate);

        groupBox_2 = new QGroupBox(mainform);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(239, 298));
        groupBox_2->setMaximumSize(QSize(239, 298));
        QFont font2;
        font2.setFamily(QStringLiteral("AR PL UKai CN"));
        font2.setPointSize(16);
        font2.setItalic(false);
        groupBox_2->setFont(font2);
        label_m1 = new QLabel(groupBox_2);
        label_m1->setObjectName(QStringLiteral("label_m1"));
        label_m1->setGeometry(QRect(12, 38, 221, 23));
        label_m1->setFrameShape(QFrame::NoFrame);
        label_m4 = new QLabel(groupBox_2);
        label_m4->setObjectName(QStringLiteral("label_m4"));
        label_m4->setGeometry(QRect(12, 247, 16, 23));
        label_m4->setFrameShape(QFrame::NoFrame);
        line_2 = new QFrame(groupBox_2);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(12, 169, 221, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line = new QFrame(groupBox_2);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(12, 99, 221, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_m2 = new QLabel(groupBox_2);
        label_m2->setObjectName(QStringLiteral("label_m2"));
        label_m2->setGeometry(QRect(12, 108, 221, 23));
        label_m2->setFrameShape(QFrame::NoFrame);
        label_m3 = new QLabel(groupBox_2);
        label_m3->setObjectName(QStringLiteral("label_m3"));
        label_m3->setGeometry(QRect(12, 178, 16, 23));
        label_m3->setFrameShape(QFrame::NoFrame);
        line_3 = new QFrame(groupBox_2);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(12, 238, 221, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(groupBox_2);

        groupBox = new QGroupBox(mainform);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMaximumSize(QSize(239, 298));
        QFont font3;
        font3.setFamily(QStringLiteral("AR PL UKai TW"));
        font3.setPointSize(15);
        font3.setBold(false);
        font3.setWeight(50);
        groupBox->setFont(font3);
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_xx = new QLabel(groupBox);
        label_xx->setObjectName(QStringLiteral("label_xx"));
        label_xx->setLayoutDirection(Qt::LeftToRight);
        label_xx->setFrameShape(QFrame::Panel);
        label_xx->setFrameShadow(QFrame::Sunken);
        label_xx->setTextFormat(Qt::RichText);
        label_xx->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_xx, 9, 0, 1, 1);

        label_sx = new QLabel(groupBox);
        label_sx->setObjectName(QStringLiteral("label_sx"));
        label_sx->setLayoutDirection(Qt::LeftToRight);
        label_sx->setFrameShape(QFrame::Panel);
        label_sx->setFrameShadow(QFrame::Sunken);
        label_sx->setTextFormat(Qt::RichText);
        label_sx->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_sx, 3, 0, 1, 1);

        label_sx2 = new QLabel(groupBox);
        label_sx2->setObjectName(QStringLiteral("label_sx2"));

        gridLayout_2->addWidget(label_sx2, 2, 0, 1, 1);

        label_ss = new QLabel(groupBox);
        label_ss->setObjectName(QStringLiteral("label_ss"));
        label_ss->setLayoutDirection(Qt::LeftToRight);
        label_ss->setFrameShape(QFrame::Panel);
        label_ss->setFrameShadow(QFrame::Sunken);
        label_ss->setTextFormat(Qt::RichText);
        label_ss->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_ss, 1, 0, 1, 1);

        label_xs = new QLabel(groupBox);
        label_xs->setObjectName(QStringLiteral("label_xs"));
        label_xs->setLayoutDirection(Qt::LeftToRight);
        label_xs->setFrameShape(QFrame::Panel);
        label_xs->setFrameShadow(QFrame::Sunken);
        label_xs->setTextFormat(Qt::RichText);
        label_xs->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_xs, 6, 0, 1, 1);

        label_ss2 = new QLabel(groupBox);
        label_ss2->setObjectName(QStringLiteral("label_ss2"));

        gridLayout_2->addWidget(label_ss2, 0, 0, 1, 1);

        label_xs2 = new QLabel(groupBox);
        label_xs2->setObjectName(QStringLiteral("label_xs2"));

        gridLayout_2->addWidget(label_xs2, 4, 0, 1, 1);

        label_xx2 = new QLabel(groupBox);
        label_xx2->setObjectName(QStringLiteral("label_xx2"));

        gridLayout_2->addWidget(label_xx2, 7, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox);


        gridLayout->addLayout(verticalLayout_2, 0, 2, 2, 1);

        treeWidget = new QTreeWidget(mainform);
        treeWidget->headerItem()->setText(0, QString());
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem2);
        new QTreeWidgetItem(__qtreewidgetitem2);
        new QTreeWidgetItem(__qtreewidgetitem2);
        new QTreeWidgetItem(__qtreewidgetitem2);
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem3);
        new QTreeWidgetItem(__qtreewidgetitem3);
        new QTreeWidgetItem(__qtreewidgetitem3);
        new QTreeWidgetItem(__qtreewidgetitem3);
        QTreeWidgetItem *__qtreewidgetitem4 = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem4);
        new QTreeWidgetItem(__qtreewidgetitem4);
        new QTreeWidgetItem(__qtreewidgetitem4);
        new QTreeWidgetItem(__qtreewidgetitem4);
        QTreeWidgetItem *__qtreewidgetitem5 = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem5);
        new QTreeWidgetItem(__qtreewidgetitem5);
        new QTreeWidgetItem(__qtreewidgetitem5);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(treeWidget->sizePolicy().hasHeightForWidth());
        treeWidget->setSizePolicy(sizePolicy1);
        treeWidget->setMinimumSize(QSize(210, 520));
        treeWidget->setMaximumSize(QSize(210, 16777215));
        treeWidget->setContextMenuPolicy(Qt::DefaultContextMenu);
        treeWidget->setStyleSheet(QStringLiteral(""));
        treeWidget->setFrameShape(QFrame::NoFrame);
        treeWidget->setFrameShadow(QFrame::Plain);
        treeWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        treeWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        treeWidget->setTextElideMode(Qt::ElideRight);
        treeWidget->setVerticalScrollMode(QAbstractItemView::ScrollPerItem);
        treeWidget->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        treeWidget->setAutoExpandDelay(-1);
        treeWidget->setIndentation(22);
        treeWidget->setRootIsDecorated(true);
        treeWidget->setUniformRowHeights(false);
        treeWidget->setItemsExpandable(true);
        treeWidget->setSortingEnabled(false);
        treeWidget->setAnimated(false);
        treeWidget->setAllColumnsShowFocus(false);
        treeWidget->setWordWrap(false);
        treeWidget->setHeaderHidden(true);
        treeWidget->setExpandsOnDoubleClick(true);
        treeWidget->header()->setVisible(false);

        gridLayout->addWidget(treeWidget, 1, 0, 1, 1);

        stackedWidget = new QStackedWidget(mainform);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setMinimumSize(QSize(514, 0));
        stackedWidget->setFrameShape(QFrame::WinPanel);
        stackedWidget->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(stackedWidget, 0, 1, 2, 1);


        retranslateUi(mainform);

        stackedWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(mainform);
    } // setupUi

    void retranslateUi(QWidget *mainform)
    {
        mainform->setWindowTitle(QApplication::translate("mainform", "Form", Q_NULLPTR));
        label->setText(QString());
        label_authority->setText(QApplication::translate("mainform", "<html><head/><body><p><span style=\" font-size:18pt;\">\346\231\256\351\200\232\347\224\250\346\210\267</span></p></body></html>", Q_NULLPTR));
        label_name->setText(QApplication::translate("mainform", "<html><head/><body><p><span style=\" font-size:18pt;\">\345\274\240\345\277\227\350\276\276</span></p></body></html>", Q_NULLPTR));
        pushButton_renovate->setText(QApplication::translate("mainform", "\345\210\267\346\226\260", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("mainform", "\346\266\210\346\201\257\351\200\232\347\237\245", Q_NULLPTR));
        label_m1->setText(QApplication::translate("mainform", "\346\202\250\346\234\2111\346\235\241\350\257\267\345\201\207\345\256\241\346\240\270\345\276\205\345\244\204\347\220\206", Q_NULLPTR));
        label_m4->setText(QString());
        label_m2->setText(QApplication::translate("mainform", "\346\202\250\346\234\2111\346\235\241\350\257\267\345\201\207\347\224\263\350\257\267\350\242\253\345\244\204\347\220\206", Q_NULLPTR));
        label_m3->setText(QString());
        groupBox->setTitle(QApplication::translate("mainform", "\344\275\234\346\201\257\346\227\266\351\227\264", Q_NULLPTR));
        label_xx->setText(QApplication::translate("mainform", "15:30:00", Q_NULLPTR));
        label_sx->setText(QApplication::translate("mainform", "11:30:00", Q_NULLPTR));
        label_sx2->setText(QApplication::translate("mainform", "\344\270\212\345\215\210\344\270\213\347\217\255\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        label_ss->setText(QApplication::translate("mainform", "8:30:00", Q_NULLPTR));
        label_xs->setText(QApplication::translate("mainform", "12:30:00", Q_NULLPTR));
        label_ss2->setText(QApplication::translate("mainform", "\344\270\212\345\215\210\344\270\212\347\217\255\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        label_xs2->setText(QApplication::translate("mainform", "\344\270\213\345\215\210\344\270\212\347\217\255\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        label_xx2->setText(QApplication::translate("mainform", "\344\270\213\345\215\210\344\270\213\347\217\255\346\227\266\351\227\264\357\274\232", Q_NULLPTR));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->topLevelItem(0);
        ___qtreewidgetitem->setText(0, QApplication::translate("mainform", "\345\221\230\345\267\245\347\256\241\347\220\206", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem1 = ___qtreewidgetitem->child(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("mainform", "\345\221\230\345\267\245\344\277\241\346\201\257\346\237\245\350\257\242", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem->child(1);
        ___qtreewidgetitem2->setText(0, QApplication::translate("mainform", "\345\221\230\345\267\245\344\277\241\346\201\257\346\263\250\345\206\214", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem3 = ___qtreewidgetitem->child(2);
        ___qtreewidgetitem3->setText(0, QApplication::translate("mainform", "\345\221\230\345\267\245\344\277\241\346\201\257\345\210\240\351\231\244", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem4 = ___qtreewidgetitem->child(3);
        ___qtreewidgetitem4->setText(0, QApplication::translate("mainform", "\345\221\230\345\267\245\344\277\241\346\201\257\344\277\256\346\224\271", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem5 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem5->setText(0, QApplication::translate("mainform", "\350\256\277\345\256\242\347\256\241\347\220\206", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem6 = ___qtreewidgetitem5->child(0);
        ___qtreewidgetitem6->setText(0, QApplication::translate("mainform", "\350\256\277\345\256\242\347\231\273\350\256\260", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem7 = ___qtreewidgetitem5->child(1);
        ___qtreewidgetitem7->setText(0, QApplication::translate("mainform", "\350\256\277\345\256\242\346\237\245\350\257\242", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem8 = treeWidget->topLevelItem(2);
        ___qtreewidgetitem8->setText(0, QApplication::translate("mainform", "\350\200\203\345\213\244\344\277\241\346\201\257\346\237\245\350\257\242", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem9 = ___qtreewidgetitem8->child(0);
        ___qtreewidgetitem9->setText(0, QApplication::translate("mainform", "\346\234\210\350\200\203\345\213\244\347\273\237\350\256\241\350\241\250", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem10 = ___qtreewidgetitem8->child(1);
        ___qtreewidgetitem10->setText(0, QApplication::translate("mainform", "\345\212\240\347\217\255\350\256\260\345\275\225", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem11 = ___qtreewidgetitem8->child(2);
        ___qtreewidgetitem11->setText(0, QApplication::translate("mainform", "\345\207\272\345\205\245\350\256\260\345\275\225", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem12 = ___qtreewidgetitem8->child(3);
        ___qtreewidgetitem12->setText(0, QApplication::translate("mainform", "\345\207\272\345\213\244\350\256\260\345\275\225", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem13 = treeWidget->topLevelItem(3);
        ___qtreewidgetitem13->setText(0, QApplication::translate("mainform", "\350\257\267\345\201\207\347\256\241\347\220\206", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem14 = ___qtreewidgetitem13->child(0);
        ___qtreewidgetitem14->setText(0, QApplication::translate("mainform", "\350\257\267\345\201\207\345\256\241\346\240\270", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem15 = ___qtreewidgetitem13->child(1);
        ___qtreewidgetitem15->setText(0, QApplication::translate("mainform", "\350\257\267\345\201\207\347\224\263\350\257\267", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem16 = ___qtreewidgetitem13->child(2);
        ___qtreewidgetitem16->setText(0, QApplication::translate("mainform", "\346\210\221\347\232\204\345\256\241\346\240\270\350\257\267\345\201\207\350\256\260\345\275\225", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem17 = ___qtreewidgetitem13->child(3);
        ___qtreewidgetitem17->setText(0, QApplication::translate("mainform", "\350\257\267\345\201\207\350\256\260\345\275\225", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem18 = treeWidget->topLevelItem(4);
        ___qtreewidgetitem18->setText(0, QApplication::translate("mainform", "\345\207\272\345\267\256\347\256\241\347\220\206", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem19 = ___qtreewidgetitem18->child(0);
        ___qtreewidgetitem19->setText(0, QApplication::translate("mainform", "\345\207\272\345\267\256\345\256\241\346\240\270", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem20 = ___qtreewidgetitem18->child(1);
        ___qtreewidgetitem20->setText(0, QApplication::translate("mainform", "\345\207\272\345\267\256\347\231\273\350\256\260", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem21 = ___qtreewidgetitem18->child(2);
        ___qtreewidgetitem21->setText(0, QApplication::translate("mainform", "\346\210\221\347\232\204\345\256\241\346\240\270\345\207\272\345\267\256\350\256\260\345\275\225", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem22 = ___qtreewidgetitem18->child(3);
        ___qtreewidgetitem22->setText(0, QApplication::translate("mainform", "\345\207\272\345\267\256\350\256\260\345\275\225", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem23 = treeWidget->topLevelItem(5);
        ___qtreewidgetitem23->setText(0, QApplication::translate("mainform", "\350\256\276\347\275\256", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem24 = ___qtreewidgetitem23->child(0);
        ___qtreewidgetitem24->setText(0, QApplication::translate("mainform", "\345\221\230\345\267\245\344\275\234\346\201\257\350\256\276\347\275\256", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem25 = ___qtreewidgetitem23->child(1);
        ___qtreewidgetitem25->setText(0, QApplication::translate("mainform", "\350\264\246\346\210\267\344\277\241\346\201\257\350\256\276\347\275\256", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem26 = ___qtreewidgetitem23->child(2);
        ___qtreewidgetitem26->setText(0, QApplication::translate("mainform", "\350\256\276\347\275\256\351\203\250\351\227\250/\350\201\214\347\247\260", Q_NULLPTR));
        treeWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class mainform: public Ui_mainform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINFORM_H
