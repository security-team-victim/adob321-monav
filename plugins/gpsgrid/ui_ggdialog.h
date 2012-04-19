/********************************************************************************
** Form generated from reading UI file 'ggdialog.ui'
**
** Created: Tue Mar 20 23:25:06 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GGDIALOG_H
#define UI_GGDIALOG_H

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

class Ui_GGDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *GGDialog)
    {
        if (GGDialog->objectName().isEmpty())
            GGDialog->setObjectName(QString::fromUtf8("GGDialog"));
        verticalLayout_2 = new QVBoxLayout(GGDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame = new QFrame(GGDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setWordWrap(true);

        verticalLayout->addWidget(label);


        verticalLayout_2->addWidget(frame);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        retranslateUi(GGDialog);

        QMetaObject::connectSlotsByName(GGDialog);
    } // setupUi

    void retranslateUi(QWidget *GGDialog)
    {
        GGDialog->setWindowTitle(QApplication::translate("GGDialog", "GPS Grid Settings", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("GGDialog", "Divides the map into grid cells. Stores edges crossing borders in multiple cells. A multi level lookup table is used to handle huge areas with vast empty regions, e.g., the sea.", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GGDialog: public Ui_GGDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GGDIALOG_H
