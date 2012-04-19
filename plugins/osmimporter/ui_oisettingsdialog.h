/********************************************************************************
** Form generated from reading UI file 'oisettingsdialog.ui'
**
** Created: Tue Mar 20 23:25:31 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OISETTINGSDIALOG_H
#define UI_OISETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OISettingsDialog
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *speedProfile;
    QToolButton *browse;
    QPushButton *edit;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_8;
    QToolButton *addLanguage;
    QToolButton *deleteLanguage;
    QSpacerItem *horizontalSpacer_6;
    QListWidget *languages;
    QComboBox *speedProfileChooser;

    void setupUi(QWidget *OISettingsDialog)
    {
        if (OISettingsDialog->objectName().isEmpty())
            OISettingsDialog->setObjectName(QString::fromUtf8("OISettingsDialog"));
        OISettingsDialog->setWindowModality(Qt::NonModal);
        OISettingsDialog->resize(505, 532);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OISettingsDialog->sizePolicy().hasHeightForWidth());
        OISettingsDialog->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(OISettingsDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame = new QFrame(OISettingsDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setScaledContents(false);
        label->setWordWrap(true);

        horizontalLayout->addWidget(label);


        gridLayout->addWidget(frame, 0, 0, 1, 3);

        label_4 = new QLabel(OISettingsDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        label_2 = new QLabel(OISettingsDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        speedProfile = new QLineEdit(OISettingsDialog);
        speedProfile->setObjectName(QString::fromUtf8("speedProfile"));

        horizontalLayout_2->addWidget(speedProfile);

        browse = new QToolButton(OISettingsDialog);
        browse->setObjectName(QString::fromUtf8("browse"));

        horizontalLayout_2->addWidget(browse);


        gridLayout->addLayout(horizontalLayout_2, 2, 1, 1, 1);

        edit = new QPushButton(OISettingsDialog);
        edit->setObjectName(QString::fromUtf8("edit"));

        gridLayout->addWidget(edit, 3, 1, 1, 2);

        groupBox = new QGroupBox(OISettingsDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        addLanguage = new QToolButton(groupBox);
        addLanguage->setObjectName(QString::fromUtf8("addLanguage"));
        sizePolicy.setHeightForWidth(addLanguage->sizePolicy().hasHeightForWidth());
        addLanguage->setSizePolicy(sizePolicy);

        horizontalLayout_8->addWidget(addLanguage);

        deleteLanguage = new QToolButton(groupBox);
        deleteLanguage->setObjectName(QString::fromUtf8("deleteLanguage"));
        deleteLanguage->setEnabled(false);
        sizePolicy.setHeightForWidth(deleteLanguage->sizePolicy().hasHeightForWidth());
        deleteLanguage->setSizePolicy(sizePolicy);

        horizontalLayout_8->addWidget(deleteLanguage);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_8);

        languages = new QListWidget(groupBox);
        languages->setObjectName(QString::fromUtf8("languages"));

        verticalLayout->addWidget(languages);


        gridLayout->addWidget(groupBox, 4, 0, 1, 2);

        speedProfileChooser = new QComboBox(OISettingsDialog);
        speedProfileChooser->setObjectName(QString::fromUtf8("speedProfileChooser"));

        gridLayout->addWidget(speedProfileChooser, 1, 1, 1, 1);


        retranslateUi(OISettingsDialog);

        QMetaObject::connectSlotsByName(OISettingsDialog);
    } // setupUi

    void retranslateUi(QWidget *OISettingsDialog)
    {
        OISettingsDialog->setWindowTitle(QApplication::translate("OISettingsDialog", "OpenStreetMap Importer Settings", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("OISettingsDialog", "The OpenStreetMap Importer reads an OSM file. Reading from an OSM XML file can take quite some time due to slow XML reading. Intermediate data is cached in the output directory in a compressed file format.", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("OISettingsDialog", "Speed Profile Preset", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("OISettingsDialog", "Speed Profile", 0, QApplication::UnicodeUTF8));
        browse->setText(QApplication::translate("OISettingsDialog", "...", 0, QApplication::UnicodeUTF8));
        edit->setText(QApplication::translate("OISettingsDialog", "Edit / New Speed Profile...", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("OISettingsDialog", "Languages", 0, QApplication::UnicodeUTF8));
        addLanguage->setText(QApplication::translate("OISettingsDialog", "+", 0, QApplication::UnicodeUTF8));
        deleteLanguage->setText(QApplication::translate("OISettingsDialog", " - ", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class OISettingsDialog: public Ui_OISettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OISETTINGSDIALOG_H
