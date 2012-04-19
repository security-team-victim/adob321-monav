/********************************************************************************
** Form generated from reading UI file 'uttsettingsdialog.ui'
**
** Created: Tue Mar 20 23:25:27 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UTTSETTINGSDIALOG_H
#define UI_UTTSETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UTTSettingsDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *UTTSettingsDialog)
    {
        if (UTTSettingsDialog->objectName().isEmpty())
            UTTSettingsDialog->setObjectName(QString::fromUtf8("UTTSettingsDialog"));
        UTTSettingsDialog->resize(512, 190);
        verticalLayout_2 = new QVBoxLayout(UTTSettingsDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame = new QFrame(UTTSettingsDialog);
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

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        retranslateUi(UTTSettingsDialog);

        QMetaObject::connectSlotsByName(UTTSettingsDialog);
    } // setupUi

    void retranslateUi(QWidget *UTTSettingsDialog)
    {
        UTTSettingsDialog->setWindowTitle(QApplication::translate("UTTSettingsDialog", "Unicode Tournament Trie Settings", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("UTTSettingsDialog", "The Unicode Tournament Trie utilizes a trie data structure combined with a tournament tree data structure overlay. This allows for the extraction of the best ranked suggestions matching the user input prefix. Very moderate space consumption and relativly fast query times. Supports UTF-8 and international characters.", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class UTTSettingsDialog: public Ui_UTTSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UTTSETTINGSDIALOG_H
