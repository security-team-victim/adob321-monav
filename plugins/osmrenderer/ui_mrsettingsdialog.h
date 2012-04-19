/********************************************************************************
** Form generated from reading UI file 'mrsettingsdialog.ui'
**
** Created: Tue Mar 20 23:25:12 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MRSETTINGSDIALOG_H
#define UI_MRSETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QToolBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MRSettingsDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLabel *label;
    QToolBox *toolBox;
    QWidget *page_2;
    QGridLayout *gridLayout_3;
    QLabel *label_2;
    QLineEdit *fontEdit;
    QPushButton *fontBrowse;
    QLabel *label_3;
    QLineEdit *modulesEdit;
    QPushButton *modulesBrowse;
    QLabel *label_4;
    QLineEdit *themeEdit;
    QPushButton *themeBrowse;
    QSpacerItem *verticalSpacer_3;
    QWidget *page;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_8;
    QSpinBox *minZoom;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_10;
    QSpinBox *tileMargin;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_4;
    QCheckBox *zoom0;
    QCheckBox *zoom5;
    QCheckBox *zoom10;
    QCheckBox *zoom15;
    QCheckBox *zoom1;
    QCheckBox *zoom6;
    QCheckBox *zoom11;
    QCheckBox *zoom16;
    QSpacerItem *horizontalSpacer_3;
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
    QWidget *page_3;
    QVBoxLayout *verticalLayout_4;
    QGridLayout *gridLayout_2;
    QLabel *label_5;
    QSpinBox *tileSize;
    QLabel *label_9;
    QSpinBox *margin;
    QLabel *label_6;
    QSpinBox *metaTileSize;
    QSpacerItem *verticalSpacer_2;
    QWidget *page_4;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *colorReduction;
    QCheckBox *pngcrush;
    QCheckBox *removeTiles;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QWidget *MRSettingsDialog)
    {
        if (MRSettingsDialog->objectName().isEmpty())
            MRSettingsDialog->setObjectName(QString::fromUtf8("MRSettingsDialog"));
        MRSettingsDialog->resize(513, 581);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MRSettingsDialog->sizePolicy().hasHeightForWidth());
        MRSettingsDialog->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(MRSettingsDialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        frame = new QFrame(MRSettingsDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setWordWrap(true);

        gridLayout->addWidget(label, 0, 0, 1, 1);


        verticalLayout_3->addWidget(frame);

        toolBox = new QToolBox(MRSettingsDialog);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setGeometry(QRect(0, 0, 495, 336));
        gridLayout_3 = new QGridLayout(page_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_2 = new QLabel(page_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);

        fontEdit = new QLineEdit(page_2);
        fontEdit->setObjectName(QString::fromUtf8("fontEdit"));

        gridLayout_3->addWidget(fontEdit, 0, 1, 1, 1);

        fontBrowse = new QPushButton(page_2);
        fontBrowse->setObjectName(QString::fromUtf8("fontBrowse"));
        sizePolicy.setHeightForWidth(fontBrowse->sizePolicy().hasHeightForWidth());
        fontBrowse->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(fontBrowse, 0, 2, 1, 1);

        label_3 = new QLabel(page_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 1, 0, 1, 1);

        modulesEdit = new QLineEdit(page_2);
        modulesEdit->setObjectName(QString::fromUtf8("modulesEdit"));

        gridLayout_3->addWidget(modulesEdit, 1, 1, 1, 1);

        modulesBrowse = new QPushButton(page_2);
        modulesBrowse->setObjectName(QString::fromUtf8("modulesBrowse"));
        sizePolicy.setHeightForWidth(modulesBrowse->sizePolicy().hasHeightForWidth());
        modulesBrowse->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(modulesBrowse, 1, 2, 1, 1);

        label_4 = new QLabel(page_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_3->addWidget(label_4, 2, 0, 1, 1);

        themeEdit = new QLineEdit(page_2);
        themeEdit->setObjectName(QString::fromUtf8("themeEdit"));

        gridLayout_3->addWidget(themeEdit, 2, 1, 1, 1);

        themeBrowse = new QPushButton(page_2);
        themeBrowse->setObjectName(QString::fromUtf8("themeBrowse"));
        sizePolicy.setHeightForWidth(themeBrowse->sizePolicy().hasHeightForWidth());
        themeBrowse->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(themeBrowse, 2, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_3, 3, 0, 1, 1);

        gridLayout_3->setColumnStretch(1, 1);
        toolBox->addItem(page_2, QString::fromUtf8("Files && Directories"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 495, 336));
        verticalLayout = new QVBoxLayout(page);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_8 = new QLabel(page);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_2->addWidget(label_8);

        minZoom = new QSpinBox(page);
        minZoom->setObjectName(QString::fromUtf8("minZoom"));
        minZoom->setValue(6);

        horizontalLayout_2->addWidget(minZoom);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_10 = new QLabel(page);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_3->addWidget(label_10);

        tileMargin = new QSpinBox(page);
        tileMargin->setObjectName(QString::fromUtf8("tileMargin"));
        tileMargin->setValue(1);

        horizontalLayout_3->addWidget(tileMargin);


        verticalLayout->addLayout(horizontalLayout_3);

        groupBox = new QGroupBox(page);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        zoom0 = new QCheckBox(groupBox);
        zoom0->setObjectName(QString::fromUtf8("zoom0"));

        gridLayout_4->addWidget(zoom0, 0, 0, 1, 1);

        zoom5 = new QCheckBox(groupBox);
        zoom5->setObjectName(QString::fromUtf8("zoom5"));

        gridLayout_4->addWidget(zoom5, 0, 1, 1, 1);

        zoom10 = new QCheckBox(groupBox);
        zoom10->setObjectName(QString::fromUtf8("zoom10"));

        gridLayout_4->addWidget(zoom10, 0, 2, 1, 1);

        zoom15 = new QCheckBox(groupBox);
        zoom15->setObjectName(QString::fromUtf8("zoom15"));

        gridLayout_4->addWidget(zoom15, 0, 3, 1, 1);

        zoom1 = new QCheckBox(groupBox);
        zoom1->setObjectName(QString::fromUtf8("zoom1"));

        gridLayout_4->addWidget(zoom1, 1, 0, 1, 1);

        zoom6 = new QCheckBox(groupBox);
        zoom6->setObjectName(QString::fromUtf8("zoom6"));

        gridLayout_4->addWidget(zoom6, 1, 1, 1, 1);

        zoom11 = new QCheckBox(groupBox);
        zoom11->setObjectName(QString::fromUtf8("zoom11"));

        gridLayout_4->addWidget(zoom11, 1, 2, 1, 1);

        zoom16 = new QCheckBox(groupBox);
        zoom16->setObjectName(QString::fromUtf8("zoom16"));

        gridLayout_4->addWidget(zoom16, 1, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_3, 1, 4, 1, 1);

        zoom2 = new QCheckBox(groupBox);
        zoom2->setObjectName(QString::fromUtf8("zoom2"));

        gridLayout_4->addWidget(zoom2, 2, 0, 1, 1);

        zoom7 = new QCheckBox(groupBox);
        zoom7->setObjectName(QString::fromUtf8("zoom7"));

        gridLayout_4->addWidget(zoom7, 2, 1, 1, 1);

        zoom12 = new QCheckBox(groupBox);
        zoom12->setObjectName(QString::fromUtf8("zoom12"));

        gridLayout_4->addWidget(zoom12, 2, 2, 1, 1);

        zoom17 = new QCheckBox(groupBox);
        zoom17->setObjectName(QString::fromUtf8("zoom17"));

        gridLayout_4->addWidget(zoom17, 2, 3, 1, 1);

        zoom3 = new QCheckBox(groupBox);
        zoom3->setObjectName(QString::fromUtf8("zoom3"));

        gridLayout_4->addWidget(zoom3, 3, 0, 1, 1);

        zoom8 = new QCheckBox(groupBox);
        zoom8->setObjectName(QString::fromUtf8("zoom8"));

        gridLayout_4->addWidget(zoom8, 3, 1, 1, 1);

        zoom13 = new QCheckBox(groupBox);
        zoom13->setObjectName(QString::fromUtf8("zoom13"));

        gridLayout_4->addWidget(zoom13, 3, 2, 1, 1);

        zoom18 = new QCheckBox(groupBox);
        zoom18->setObjectName(QString::fromUtf8("zoom18"));

        gridLayout_4->addWidget(zoom18, 3, 3, 1, 1);

        zoom4 = new QCheckBox(groupBox);
        zoom4->setObjectName(QString::fromUtf8("zoom4"));

        gridLayout_4->addWidget(zoom4, 4, 0, 1, 1);

        zoom9 = new QCheckBox(groupBox);
        zoom9->setObjectName(QString::fromUtf8("zoom9"));
        sizePolicy.setHeightForWidth(zoom9->sizePolicy().hasHeightForWidth());
        zoom9->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(zoom9, 4, 1, 1, 1);

        zoom14 = new QCheckBox(groupBox);
        zoom14->setObjectName(QString::fromUtf8("zoom14"));

        gridLayout_4->addWidget(zoom14, 4, 2, 1, 1);


        verticalLayout->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        toolBox->addItem(page, QString::fromUtf8("Zoom Levels"));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        page_3->setGeometry(QRect(0, 0, 495, 336));
        verticalLayout_4 = new QVBoxLayout(page_3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_5 = new QLabel(page_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1);

        tileSize = new QSpinBox(page_3);
        tileSize->setObjectName(QString::fromUtf8("tileSize"));
        tileSize->setMinimum(64);
        tileSize->setMaximum(4096);
        tileSize->setSingleStep(64);
        tileSize->setValue(256);

        gridLayout_2->addWidget(tileSize, 0, 1, 1, 1);

        label_9 = new QLabel(page_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_2->addWidget(label_9, 1, 0, 1, 1);

        margin = new QSpinBox(page_3);
        margin->setObjectName(QString::fromUtf8("margin"));
        margin->setMinimum(32);
        margin->setMaximum(2048);
        margin->setSingleStep(32);
        margin->setValue(128);

        gridLayout_2->addWidget(margin, 1, 1, 1, 1);

        label_6 = new QLabel(page_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 2, 0, 1, 1);

        metaTileSize = new QSpinBox(page_3);
        metaTileSize->setObjectName(QString::fromUtf8("metaTileSize"));
        metaTileSize->setMinimum(8);
        metaTileSize->setMaximum(1024);

        gridLayout_2->addWidget(metaTileSize, 2, 1, 1, 1);


        verticalLayout_4->addLayout(gridLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        toolBox->addItem(page_3, QString::fromUtf8("Tiles"));
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        page_4->setGeometry(QRect(0, 0, 495, 336));
        verticalLayout_2 = new QVBoxLayout(page_4);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        colorReduction = new QCheckBox(page_4);
        colorReduction->setObjectName(QString::fromUtf8("colorReduction"));
        colorReduction->setChecked(true);

        verticalLayout_2->addWidget(colorReduction);

        pngcrush = new QCheckBox(page_4);
        pngcrush->setObjectName(QString::fromUtf8("pngcrush"));

        verticalLayout_2->addWidget(pngcrush);

        removeTiles = new QCheckBox(page_4);
        removeTiles->setObjectName(QString::fromUtf8("removeTiles"));

        verticalLayout_2->addWidget(removeTiles);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        toolBox->addItem(page_4, QString::fromUtf8("Compression"));

        verticalLayout_3->addWidget(toolBox);

#ifndef QT_NO_SHORTCUT
        label_2->setBuddy(fontEdit);
        label_3->setBuddy(modulesEdit);
        label_4->setBuddy(themeEdit);
        label_8->setBuddy(minZoom);
        label_10->setBuddy(tileMargin);
        label_5->setBuddy(tileSize);
        label_9->setBuddy(margin);
        label_6->setBuddy(metaTileSize);
#endif // QT_NO_SHORTCUT

        retranslateUi(MRSettingsDialog);

        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MRSettingsDialog);
    } // setupUi

    void retranslateUi(QWidget *MRSettingsDialog)
    {
        MRSettingsDialog->setWindowTitle(QApplication::translate("MRSettingsDialog", "Mapnik Renderer Settings", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MRSettingsDialog", "Uses a PostGreSQL GIS database to get the data and renders it with Mapnik, the official rendering tool for OpenStreetMap. Prerenders the complete map in small tiles for all zoom levels and saves them in png files. When increasing Tile Size and Meta Tile Size take caution of rapidly increasing Memory Consumption. Very Slow preprocessing, large space consumption and requires a working PostGreSQL Database with Openstreetmap Data.", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MRSettingsDialog", "DeJaVu Fonts", 0, QApplication::UnicodeUTF8));
        fontBrowse->setText(QApplication::translate("MRSettingsDialog", "Browse...", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MRSettingsDialog", "Mapnik Importer Modules", 0, QApplication::UnicodeUTF8));
        modulesBrowse->setText(QApplication::translate("MRSettingsDialog", "Browse...", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MRSettingsDialog", "Mapnik Theme (osm.xml)", 0, QApplication::UnicodeUTF8));
        themeBrowse->setText(QApplication::translate("MRSettingsDialog", "Browse...", 0, QApplication::UnicodeUTF8));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("MRSettingsDialog", "Files && Directories", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MRSettingsDialog", "Render Whole World To", 0, QApplication::UnicodeUTF8));
        minZoom->setPrefix(QApplication::translate("MRSettingsDialog", "Level ", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MRSettingsDialog", "Expand Area By", 0, QApplication::UnicodeUTF8));
        tileMargin->setSuffix(QApplication::translate("MRSettingsDialog", " Tiles", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MRSettingsDialog", "Zoom Levels", 0, QApplication::UnicodeUTF8));
        zoom0->setText(QApplication::translate("MRSettingsDialog", "0", 0, QApplication::UnicodeUTF8));
        zoom5->setText(QApplication::translate("MRSettingsDialog", "5", 0, QApplication::UnicodeUTF8));
        zoom10->setText(QApplication::translate("MRSettingsDialog", "10", 0, QApplication::UnicodeUTF8));
        zoom15->setText(QApplication::translate("MRSettingsDialog", "15", 0, QApplication::UnicodeUTF8));
        zoom1->setText(QApplication::translate("MRSettingsDialog", "1", 0, QApplication::UnicodeUTF8));
        zoom6->setText(QApplication::translate("MRSettingsDialog", "6", 0, QApplication::UnicodeUTF8));
        zoom11->setText(QApplication::translate("MRSettingsDialog", "11", 0, QApplication::UnicodeUTF8));
        zoom16->setText(QApplication::translate("MRSettingsDialog", "16", 0, QApplication::UnicodeUTF8));
        zoom2->setText(QApplication::translate("MRSettingsDialog", "2", 0, QApplication::UnicodeUTF8));
        zoom7->setText(QApplication::translate("MRSettingsDialog", "7", 0, QApplication::UnicodeUTF8));
        zoom12->setText(QApplication::translate("MRSettingsDialog", "12", 0, QApplication::UnicodeUTF8));
        zoom17->setText(QApplication::translate("MRSettingsDialog", "17", 0, QApplication::UnicodeUTF8));
        zoom3->setText(QApplication::translate("MRSettingsDialog", "3", 0, QApplication::UnicodeUTF8));
        zoom8->setText(QApplication::translate("MRSettingsDialog", "8", 0, QApplication::UnicodeUTF8));
        zoom13->setText(QApplication::translate("MRSettingsDialog", "13", 0, QApplication::UnicodeUTF8));
        zoom18->setText(QApplication::translate("MRSettingsDialog", "18", 0, QApplication::UnicodeUTF8));
        zoom4->setText(QApplication::translate("MRSettingsDialog", "4", 0, QApplication::UnicodeUTF8));
        zoom9->setText(QApplication::translate("MRSettingsDialog", "9", 0, QApplication::UnicodeUTF8));
        zoom14->setText(QApplication::translate("MRSettingsDialog", "14", 0, QApplication::UnicodeUTF8));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("MRSettingsDialog", "Zoom Levels", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MRSettingsDialog", "Tile Size", 0, QApplication::UnicodeUTF8));
        tileSize->setSuffix(QApplication::translate("MRSettingsDialog", " Pixel", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MRSettingsDialog", "Margin", 0, QApplication::UnicodeUTF8));
        margin->setSuffix(QApplication::translate("MRSettingsDialog", " Pixel", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MRSettingsDialog", "Meta Tile Size ( Renders X * X Tiles At Once )", 0, QApplication::UnicodeUTF8));
        metaTileSize->setSuffix(QApplication::translate("MRSettingsDialog", " Tiles", 0, QApplication::UnicodeUTF8));
        toolBox->setItemText(toolBox->indexOf(page_3), QApplication::translate("MRSettingsDialog", "Tiles", 0, QApplication::UnicodeUTF8));
        colorReduction->setText(QApplication::translate("MRSettingsDialog", "Use 256 Color PNGs", 0, QApplication::UnicodeUTF8));
        pngcrush->setText(QApplication::translate("MRSettingsDialog", "Use PNGcrush", 0, QApplication::UnicodeUTF8));
        removeTiles->setText(QApplication::translate("MRSettingsDialog", "Remove Tiles with no routable Edges", 0, QApplication::UnicodeUTF8));
        toolBox->setItemText(toolBox->indexOf(page_4), QApplication::translate("MRSettingsDialog", "Compression", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MRSettingsDialog: public Ui_MRSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MRSETTINGSDIALOG_H
