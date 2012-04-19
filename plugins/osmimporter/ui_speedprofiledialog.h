/********************************************************************************
** Form generated from reading UI file 'speedprofiledialog.ui'
**
** Created: Tue Mar 20 23:25:31 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPEEDPROFILEDIALOG_H
#define UI_SPEEDPROFILEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QToolBox>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SpeedProfileDialog
{
public:
    QVBoxLayout *verticalLayout_4;
    QToolBox *toolBox;
    QWidget *page;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *setDefaultCitySpeed;
    QCheckBox *ignoreOneway;
    QCheckBox *ignoreMaxspeed;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label_2;
    QSpinBox *pedestrian;
    QSpinBox *otherCars;
    QLabel *label_3;
    QDoubleSpinBox *acceleration;
    QDoubleSpinBox *decceleration;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QDoubleSpinBox *tangentialAcceleration;
    QSpacerItem *verticalSpacer;
    QWidget *page_2;
    QVBoxLayout *verticalLayout;
    QToolButton *addWayType;
    QScrollArea *highwayTypes;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_10;
    QWidget *page_6;
    QVBoxLayout *verticalLayout_7;
    QToolButton *addNodeModificator;
    QScrollArea *nodeModificators;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_9;
    QWidget *Page_7;
    QVBoxLayout *verticalLayout_8;
    QToolButton *addWayModificator;
    QScrollArea *wayModificators;
    QWidget *scrollAreaWidgetContents_2;
    QGridLayout *gridLayout_2;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_2;
    QListWidget *accessList;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *saveButton;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *loadButton;

    void setupUi(QDialog *SpeedProfileDialog)
    {
        if (SpeedProfileDialog->objectName().isEmpty())
            SpeedProfileDialog->setObjectName(QString::fromUtf8("SpeedProfileDialog"));
        SpeedProfileDialog->resize(704, 628);
        verticalLayout_4 = new QVBoxLayout(SpeedProfileDialog);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        toolBox = new QToolBox(SpeedProfileDialog);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        toolBox->setEnabled(true);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 686, 430));
        verticalLayout_3 = new QVBoxLayout(page);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        setDefaultCitySpeed = new QCheckBox(page);
        setDefaultCitySpeed->setObjectName(QString::fromUtf8("setDefaultCitySpeed"));
        setDefaultCitySpeed->setChecked(true);

        verticalLayout_3->addWidget(setDefaultCitySpeed);

        ignoreOneway = new QCheckBox(page);
        ignoreOneway->setObjectName(QString::fromUtf8("ignoreOneway"));

        verticalLayout_3->addWidget(ignoreOneway);

        ignoreMaxspeed = new QCheckBox(page);
        ignoreMaxspeed->setObjectName(QString::fromUtf8("ignoreMaxspeed"));

        verticalLayout_3->addWidget(ignoreMaxspeed);

        groupBox = new QGroupBox(page);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        pedestrian = new QSpinBox(groupBox);
        pedestrian->setObjectName(QString::fromUtf8("pedestrian"));
        pedestrian->setMaximum(1000);
        pedestrian->setValue(10);

        formLayout->setWidget(0, QFormLayout::FieldRole, pedestrian);

        otherCars = new QSpinBox(groupBox);
        otherCars->setObjectName(QString::fromUtf8("otherCars"));
        otherCars->setMaximum(1000);
        otherCars->setValue(10);

        formLayout->setWidget(1, QFormLayout::FieldRole, otherCars);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        acceleration = new QDoubleSpinBox(groupBox);
        acceleration->setObjectName(QString::fromUtf8("acceleration"));
        acceleration->setMinimum(0.1);
        acceleration->setValue(2.78);

        formLayout->setWidget(2, QFormLayout::FieldRole, acceleration);

        decceleration = new QDoubleSpinBox(groupBox);
        decceleration->setObjectName(QString::fromUtf8("decceleration"));
        decceleration->setMinimum(0.1);
        decceleration->setValue(2.78);

        formLayout->setWidget(3, QFormLayout::FieldRole, decceleration);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_5);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_6);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_7);

        tangentialAcceleration = new QDoubleSpinBox(groupBox);
        tangentialAcceleration->setObjectName(QString::fromUtf8("tangentialAcceleration"));
        tangentialAcceleration->setMinimum(0.1);
        tangentialAcceleration->setValue(1);

        formLayout->setWidget(4, QFormLayout::FieldRole, tangentialAcceleration);


        verticalLayout_3->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        toolBox->addItem(page, QString::fromUtf8("General Settings"));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setGeometry(QRect(0, 0, 686, 430));
        verticalLayout = new QVBoxLayout(page_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        addWayType = new QToolButton(page_2);
        addWayType->setObjectName(QString::fromUtf8("addWayType"));

        verticalLayout->addWidget(addWayType);

        highwayTypes = new QScrollArea(page_2);
        highwayTypes->setObjectName(QString::fromUtf8("highwayTypes"));
        highwayTypes->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 666, 16));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollAreaWidgetContents_3->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents_3->setSizePolicy(sizePolicy);
        verticalLayout_10 = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout_10->setSpacing(4);
        verticalLayout_10->setContentsMargins(2, 2, 2, 2);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        highwayTypes->setWidget(scrollAreaWidgetContents_3);

        verticalLayout->addWidget(highwayTypes);

        toolBox->addItem(page_2, QString::fromUtf8("Way Types"));
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        page_6->setGeometry(QRect(0, 0, 686, 430));
        verticalLayout_7 = new QVBoxLayout(page_6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        addNodeModificator = new QToolButton(page_6);
        addNodeModificator->setObjectName(QString::fromUtf8("addNodeModificator"));

        verticalLayout_7->addWidget(addNodeModificator);

        nodeModificators = new QScrollArea(page_6);
        nodeModificators->setObjectName(QString::fromUtf8("nodeModificators"));
        nodeModificators->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 666, 18));
        sizePolicy.setHeightForWidth(scrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents->setSizePolicy(sizePolicy);
        verticalLayout_9 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        nodeModificators->setWidget(scrollAreaWidgetContents);

        verticalLayout_7->addWidget(nodeModificators);

        toolBox->addItem(page_6, QString::fromUtf8("Node Modificators"));
        Page_7 = new QWidget();
        Page_7->setObjectName(QString::fromUtf8("Page_7"));
        Page_7->setGeometry(QRect(0, 0, 686, 430));
        verticalLayout_8 = new QVBoxLayout(Page_7);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        addWayModificator = new QToolButton(Page_7);
        addWayModificator->setObjectName(QString::fromUtf8("addWayModificator"));

        verticalLayout_8->addWidget(addWayModificator);

        wayModificators = new QScrollArea(Page_7);
        wayModificators->setObjectName(QString::fromUtf8("wayModificators"));
        wayModificators->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 666, 18));
        sizePolicy.setHeightForWidth(scrollAreaWidgetContents_2->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents_2->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        wayModificators->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_8->addWidget(wayModificators);

        toolBox->addItem(Page_7, QString::fromUtf8("Way Modificators"));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        page_3->setGeometry(QRect(0, 0, 686, 430));
        verticalLayout_2 = new QVBoxLayout(page_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        accessList = new QListWidget(page_3);
        accessList->setObjectName(QString::fromUtf8("accessList"));

        verticalLayout_2->addWidget(accessList);

        toolBox->addItem(page_3, QString::fromUtf8("Access"));

        verticalLayout_4->addWidget(toolBox);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        saveButton = new QPushButton(SpeedProfileDialog);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));

        horizontalLayout_7->addWidget(saveButton);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);

        loadButton = new QPushButton(SpeedProfileDialog);
        loadButton->setObjectName(QString::fromUtf8("loadButton"));

        horizontalLayout_7->addWidget(loadButton);


        verticalLayout_4->addLayout(horizontalLayout_7);


        retranslateUi(SpeedProfileDialog);

        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SpeedProfileDialog);
    } // setupUi

    void retranslateUi(QDialog *SpeedProfileDialog)
    {
        SpeedProfileDialog->setWindowTitle(QApplication::translate("SpeedProfileDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        setDefaultCitySpeed->setText(QApplication::translate("SpeedProfileDialog", "Determine Speed within Cities with approximate City Boundaries", 0, QApplication::UnicodeUTF8));
        ignoreOneway->setText(QApplication::translate("SpeedProfileDialog", "Ignore Oneway Tags", 0, QApplication::UnicodeUTF8));
        ignoreMaxspeed->setText(QApplication::translate("SpeedProfileDialog", "Ignore Maxspeed Tag", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("SpeedProfileDialog", "Turn Penalties", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("SpeedProfileDialog", "Reduced Speed to watch for Pedestrians:", 0, QApplication::UnicodeUTF8));
        pedestrian->setSuffix(QApplication::translate("SpeedProfileDialog", " km/h", 0, QApplication::UnicodeUTF8));
        otherCars->setSuffix(QApplication::translate("SpeedProfileDialog", " km/h", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("SpeedProfileDialog", "Reduced Speed to watch for other Cars:", 0, QApplication::UnicodeUTF8));
        acceleration->setSuffix(QApplication::translate("SpeedProfileDialog", " m/s\302\262", 0, QApplication::UnicodeUTF8));
        decceleration->setSuffix(QApplication::translate("SpeedProfileDialog", " m/s\302\262", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("SpeedProfileDialog", "Acceleration", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("SpeedProfileDialog", "Decceleration", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("SpeedProfileDialog", "Maximum Tangential Acceleration", 0, QApplication::UnicodeUTF8));
        tangentialAcceleration->setSuffix(QApplication::translate("SpeedProfileDialog", " m/s\302\262", 0, QApplication::UnicodeUTF8));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("SpeedProfileDialog", "General Settings", 0, QApplication::UnicodeUTF8));
        addWayType->setText(QApplication::translate("SpeedProfileDialog", "+", 0, QApplication::UnicodeUTF8));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("SpeedProfileDialog", "Way Types", 0, QApplication::UnicodeUTF8));
        addNodeModificator->setText(QApplication::translate("SpeedProfileDialog", "+", 0, QApplication::UnicodeUTF8));
        toolBox->setItemText(toolBox->indexOf(page_6), QApplication::translate("SpeedProfileDialog", "Node Modificators", 0, QApplication::UnicodeUTF8));
        addWayModificator->setText(QApplication::translate("SpeedProfileDialog", "+", 0, QApplication::UnicodeUTF8));
        toolBox->setItemText(toolBox->indexOf(Page_7), QApplication::translate("SpeedProfileDialog", "Way Modificators", 0, QApplication::UnicodeUTF8));
        toolBox->setItemText(toolBox->indexOf(page_3), QApplication::translate("SpeedProfileDialog", "Access", 0, QApplication::UnicodeUTF8));
        saveButton->setText(QApplication::translate("SpeedProfileDialog", "Save...", 0, QApplication::UnicodeUTF8));
        loadButton->setText(QApplication::translate("SpeedProfileDialog", "Load...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SpeedProfileDialog: public Ui_SpeedProfileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPEEDPROFILEDIALOG_H
