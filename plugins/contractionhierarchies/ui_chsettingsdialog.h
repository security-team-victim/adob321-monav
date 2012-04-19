/********************************************************************************
** Form generated from reading UI file 'chsettingsdialog.ui'
**
** Created: Tue Mar 20 23:24:59 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHSETTINGSDIALOG_H
#define UI_CHSETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CHSettingsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLabel *label;
    QFormLayout *formLayout;
    QLabel *label_2;
    QSpinBox *blockSize;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *CHSettingsDialog)
    {
        if (CHSettingsDialog->objectName().isEmpty())
            CHSettingsDialog->setObjectName(QString::fromUtf8("CHSettingsDialog"));
        verticalLayout = new QVBoxLayout(CHSettingsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(CHSettingsDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setWordWrap(true);

        gridLayout->addWidget(label, 0, 0, 1, 1);


        verticalLayout->addWidget(frame);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(CHSettingsDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        blockSize = new QSpinBox(CHSettingsDialog);
        blockSize->setObjectName(QString::fromUtf8("blockSize"));
        blockSize->setMinimum(8);

        formLayout->setWidget(0, QFormLayout::FieldRole, blockSize);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

#ifndef QT_NO_SHORTCUT
        label_2->setBuddy(blockSize);
#endif // QT_NO_SHORTCUT

        retranslateUi(CHSettingsDialog);

        QMetaObject::connectSlotsByName(CHSettingsDialog);
    } // setupUi

    void retranslateUi(QWidget *CHSettingsDialog)
    {
        CHSettingsDialog->setWindowTitle(QApplication::translate("CHSettingsDialog", "Contraction Hierarchies Settings", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CHSettingsDialog", "Uses Contraction Hierarchies to speed up the route planning. Low overhead and very small query times. Needs some memory to preprocess.", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CHSettingsDialog", "log2( Block Size )", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CHSettingsDialog: public Ui_CHSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHSETTINGSDIALOG_H
