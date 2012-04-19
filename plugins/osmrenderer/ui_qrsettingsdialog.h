/********************************************************************************
** Form generated from reading UI file 'qrsettingsdialog.ui'
**
** Created: Tue Mar 20 23:25:18 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QRSETTINGSDIALOG_H
#define UI_QRSETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QRSettingsDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QToolBox *toolBox;
    QWidget *page;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *inputEdit;
    QPushButton *inputBrowse;
    QLabel *label_3;
    QLineEdit *rulesFileEdit;
    QPushButton *rulesFileBrowse;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QRSettingsDialog)
    {
        if (QRSettingsDialog->objectName().isEmpty())
            QRSettingsDialog->setObjectName(QString::fromUtf8("QRSettingsDialog"));
        QRSettingsDialog->resize(514, 581);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QRSettingsDialog->sizePolicy().hasHeightForWidth());
        QRSettingsDialog->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(QRSettingsDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame = new QFrame(QRSettingsDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        toolBox = new QToolBox(frame);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 495, 336));
        gridLayout = new QGridLayout(page);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(page);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        inputEdit = new QLineEdit(page);
        inputEdit->setObjectName(QString::fromUtf8("inputEdit"));

        gridLayout->addWidget(inputEdit, 0, 1, 1, 1);

        inputBrowse = new QPushButton(page);
        inputBrowse->setObjectName(QString::fromUtf8("inputBrowse"));
        sizePolicy.setHeightForWidth(inputBrowse->sizePolicy().hasHeightForWidth());
        inputBrowse->setSizePolicy(sizePolicy);

        gridLayout->addWidget(inputBrowse, 0, 2, 1, 1);

        label_3 = new QLabel(page);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        rulesFileEdit = new QLineEdit(page);
        rulesFileEdit->setObjectName(QString::fromUtf8("rulesFileEdit"));

        gridLayout->addWidget(rulesFileEdit, 1, 1, 1, 1);

        rulesFileBrowse = new QPushButton(page);
        rulesFileBrowse->setObjectName(QString::fromUtf8("rulesFileBrowse"));
        sizePolicy.setHeightForWidth(rulesFileBrowse->sizePolicy().hasHeightForWidth());
        rulesFileBrowse->setSizePolicy(sizePolicy);

        gridLayout->addWidget(rulesFileBrowse, 1, 2, 1, 1);

        gridLayout->setColumnStretch(1, 1);
        toolBox->addItem(page, QString::fromUtf8("Options"));

        verticalLayout->addWidget(toolBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_2->addWidget(frame);

#ifndef QT_NO_SHORTCUT
        label_2->setBuddy(inputEdit);
        label_3->setBuddy(rulesFileEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(QRSettingsDialog);

        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QRSettingsDialog);
    } // setupUi

    void retranslateUi(QWidget *QRSettingsDialog)
    {
        QRSettingsDialog->setWindowTitle(QApplication::translate("QRSettingsDialog", "Qtile Renderer Settings", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QRSettingsDialog", "This renderer preprocess the osm file into a database file which can efficiently draw maps on the go without the need for a network connection. Rendering rules are loaded from a file (by default default.qrr) which the preprocessor simply copies to the data directory as \"rendering.qrr\".", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QRSettingsDialog", "Input File", 0, QApplication::UnicodeUTF8));
        inputBrowse->setText(QApplication::translate("QRSettingsDialog", "Browse...", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("QRSettingsDialog", "Rendering rules file", 0, QApplication::UnicodeUTF8));
        rulesFileBrowse->setText(QApplication::translate("QRSettingsDialog", "Browse...", 0, QApplication::UnicodeUTF8));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("QRSettingsDialog", "Options", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QRSettingsDialog: public Ui_QRSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QRSETTINGSDIALOG_H
