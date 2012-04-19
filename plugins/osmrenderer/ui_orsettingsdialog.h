/********************************************************************************
** Form generated from reading UI file 'orsettingsdialog.ui'
**
** Created: Tue Mar 20 23:25:10 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORSETTINGSDIALOG_H
#define UI_ORSETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ORSettingsDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QToolBox *toolBox;
    QWidget *page;
    QGridLayout *gridLayout;
    QCheckBox *zoom0;
    QCheckBox *zoom5;
    QCheckBox *zoom10;
    QCheckBox *zoom15;
    QCheckBox *zoom1;
    QCheckBox *zoom6;
    QCheckBox *zoom11;
    QCheckBox *zoom16;
    QCheckBox *zoom2;
    QCheckBox *zoom7;
    QCheckBox *zoom12;
    QCheckBox *zoom17;
    QCheckBox *zoom3;
    QCheckBox *zoom8;
    QCheckBox *zoom13;
    QCheckBox *zoom18;
    QCheckBox *zoom4;
    QCheckBox *zoom9;
    QCheckBox *zoom14;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ORSettingsDialog)
    {
        if (ORSettingsDialog->objectName().isEmpty())
            ORSettingsDialog->setObjectName(QString::fromUtf8("ORSettingsDialog"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ORSettingsDialog->sizePolicy().hasHeightForWidth());
        ORSettingsDialog->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(ORSettingsDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame = new QFrame(ORSettingsDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        verticalLayout->addWidget(label);


        verticalLayout_2->addWidget(frame);

        toolBox = new QToolBox(ORSettingsDialog);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 481, 188));
        gridLayout = new QGridLayout(page);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        zoom0 = new QCheckBox(page);
        zoom0->setObjectName(QString::fromUtf8("zoom0"));

        gridLayout->addWidget(zoom0, 0, 0, 1, 1);

        zoom5 = new QCheckBox(page);
        zoom5->setObjectName(QString::fromUtf8("zoom5"));

        gridLayout->addWidget(zoom5, 0, 1, 1, 1);

        zoom10 = new QCheckBox(page);
        zoom10->setObjectName(QString::fromUtf8("zoom10"));

        gridLayout->addWidget(zoom10, 0, 2, 1, 1);

        zoom15 = new QCheckBox(page);
        zoom15->setObjectName(QString::fromUtf8("zoom15"));

        gridLayout->addWidget(zoom15, 0, 3, 1, 1);

        zoom1 = new QCheckBox(page);
        zoom1->setObjectName(QString::fromUtf8("zoom1"));

        gridLayout->addWidget(zoom1, 1, 0, 1, 1);

        zoom6 = new QCheckBox(page);
        zoom6->setObjectName(QString::fromUtf8("zoom6"));

        gridLayout->addWidget(zoom6, 1, 1, 1, 1);

        zoom11 = new QCheckBox(page);
        zoom11->setObjectName(QString::fromUtf8("zoom11"));

        gridLayout->addWidget(zoom11, 1, 2, 1, 1);

        zoom16 = new QCheckBox(page);
        zoom16->setObjectName(QString::fromUtf8("zoom16"));

        gridLayout->addWidget(zoom16, 1, 3, 1, 1);

        zoom2 = new QCheckBox(page);
        zoom2->setObjectName(QString::fromUtf8("zoom2"));

        gridLayout->addWidget(zoom2, 2, 0, 1, 1);

        zoom7 = new QCheckBox(page);
        zoom7->setObjectName(QString::fromUtf8("zoom7"));

        gridLayout->addWidget(zoom7, 2, 1, 1, 1);

        zoom12 = new QCheckBox(page);
        zoom12->setObjectName(QString::fromUtf8("zoom12"));

        gridLayout->addWidget(zoom12, 2, 2, 1, 1);

        zoom17 = new QCheckBox(page);
        zoom17->setObjectName(QString::fromUtf8("zoom17"));

        gridLayout->addWidget(zoom17, 2, 3, 1, 1);

        zoom3 = new QCheckBox(page);
        zoom3->setObjectName(QString::fromUtf8("zoom3"));

        gridLayout->addWidget(zoom3, 3, 0, 1, 1);

        zoom8 = new QCheckBox(page);
        zoom8->setObjectName(QString::fromUtf8("zoom8"));

        gridLayout->addWidget(zoom8, 3, 1, 1, 1);

        zoom13 = new QCheckBox(page);
        zoom13->setObjectName(QString::fromUtf8("zoom13"));

        gridLayout->addWidget(zoom13, 3, 2, 1, 1);

        zoom18 = new QCheckBox(page);
        zoom18->setObjectName(QString::fromUtf8("zoom18"));

        gridLayout->addWidget(zoom18, 3, 3, 1, 1);

        zoom4 = new QCheckBox(page);
        zoom4->setObjectName(QString::fromUtf8("zoom4"));

        gridLayout->addWidget(zoom4, 4, 0, 1, 1);

        zoom9 = new QCheckBox(page);
        zoom9->setObjectName(QString::fromUtf8("zoom9"));
        sizePolicy.setHeightForWidth(zoom9->sizePolicy().hasHeightForWidth());
        zoom9->setSizePolicy(sizePolicy);

        gridLayout->addWidget(zoom9, 4, 1, 1, 1);

        zoom14 = new QCheckBox(page);
        zoom14->setObjectName(QString::fromUtf8("zoom14"));

        gridLayout->addWidget(zoom14, 4, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 2, 1, 1);

        gridLayout->setColumnStretch(3, 1);
        toolBox->addItem(page, QString::fromUtf8("Zoom Levels"));

        verticalLayout_2->addWidget(toolBox);


        retranslateUi(ORSettingsDialog);

        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ORSettingsDialog);
    } // setupUi

    void retranslateUi(QWidget *ORSettingsDialog)
    {
        ORSettingsDialog->setWindowTitle(QApplication::translate("ORSettingsDialog", "OSM Renderer Settings", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ORSettingsDialog", "This plugin performs no preprocessing. It loads map tiles directly from the OpenStreetMap website. This makes it unsuitable for devices without an internet connection. The client implementation shares its codebase with the MapnikRenderer plugin.", 0, QApplication::UnicodeUTF8));
        zoom0->setText(QApplication::translate("ORSettingsDialog", "0", 0, QApplication::UnicodeUTF8));
        zoom5->setText(QApplication::translate("ORSettingsDialog", "5", 0, QApplication::UnicodeUTF8));
        zoom10->setText(QApplication::translate("ORSettingsDialog", "10", 0, QApplication::UnicodeUTF8));
        zoom15->setText(QApplication::translate("ORSettingsDialog", "15", 0, QApplication::UnicodeUTF8));
        zoom1->setText(QApplication::translate("ORSettingsDialog", "1", 0, QApplication::UnicodeUTF8));
        zoom6->setText(QApplication::translate("ORSettingsDialog", "6", 0, QApplication::UnicodeUTF8));
        zoom11->setText(QApplication::translate("ORSettingsDialog", "11", 0, QApplication::UnicodeUTF8));
        zoom16->setText(QApplication::translate("ORSettingsDialog", "16", 0, QApplication::UnicodeUTF8));
        zoom2->setText(QApplication::translate("ORSettingsDialog", "2", 0, QApplication::UnicodeUTF8));
        zoom7->setText(QApplication::translate("ORSettingsDialog", "7", 0, QApplication::UnicodeUTF8));
        zoom12->setText(QApplication::translate("ORSettingsDialog", "12", 0, QApplication::UnicodeUTF8));
        zoom17->setText(QApplication::translate("ORSettingsDialog", "17", 0, QApplication::UnicodeUTF8));
        zoom3->setText(QApplication::translate("ORSettingsDialog", "3", 0, QApplication::UnicodeUTF8));
        zoom8->setText(QApplication::translate("ORSettingsDialog", "8", 0, QApplication::UnicodeUTF8));
        zoom13->setText(QApplication::translate("ORSettingsDialog", "13", 0, QApplication::UnicodeUTF8));
        zoom18->setText(QApplication::translate("ORSettingsDialog", "18", 0, QApplication::UnicodeUTF8));
        zoom4->setText(QApplication::translate("ORSettingsDialog", "4", 0, QApplication::UnicodeUTF8));
        zoom9->setText(QApplication::translate("ORSettingsDialog", "9", 0, QApplication::UnicodeUTF8));
        zoom14->setText(QApplication::translate("ORSettingsDialog", "14", 0, QApplication::UnicodeUTF8));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("ORSettingsDialog", "Zoom Levels", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ORSettingsDialog: public Ui_ORSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORSETTINGSDIALOG_H
