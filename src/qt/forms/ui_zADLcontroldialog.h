/********************************************************************************
** Form generated from reading UI file 'zonlcontroldialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZONLCONTROLDIALOG_H
#define UI_ZONLCONTROLDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ZADLControlDialog
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *labelQuantity;
    QLabel *labelQuantity_int;
    QLabel *labelZADL;
    QLabel *labelZADL_int;
    QPushButton *pushButtonAll;
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ZADLControlDialog)
    {
        if (ZADLControlDialog->objectName().isEmpty())
            ZADLControlDialog->setObjectName(QStringLiteral("ZADLControlDialog"));
        ZADLControlDialog->resize(681, 384);
        ZADLControlDialog->setMinimumSize(QSize(681, 384));
        gridLayout = new QGridLayout(ZADLControlDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        labelQuantity = new QLabel(ZADLControlDialog);
        labelQuantity->setObjectName(QStringLiteral("labelQuantity"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelQuantity);

        labelQuantity_int = new QLabel(ZADLControlDialog);
        labelQuantity_int->setObjectName(QStringLiteral("labelQuantity_int"));

        formLayout->setWidget(0, QFormLayout::FieldRole, labelQuantity_int);

        labelZADL = new QLabel(ZADLControlDialog);
        labelZADL->setObjectName(QStringLiteral("labelZADL"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelZADL);

        labelZADL_int = new QLabel(ZADLControlDialog);
        labelZADL_int->setObjectName(QStringLiteral("labelZADL_int"));

        formLayout->setWidget(1, QFormLayout::FieldRole, labelZADL_int);

        pushButtonAll = new QPushButton(ZADLControlDialog);
        pushButtonAll->setObjectName(QStringLiteral("pushButtonAll"));

        formLayout->setWidget(2, QFormLayout::LabelRole, pushButtonAll);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        treeWidget = new QTreeWidget(ZADLControlDialog);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(3, QStringLiteral("Confirmations"));
        __qtreewidgetitem->setText(2, QStringLiteral("zADL Public ID"));
        __qtreewidgetitem->setText(1, QStringLiteral("Denomination"));
        __qtreewidgetitem->setText(0, QStringLiteral("Select"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setMinimumSize(QSize(0, 250));
        treeWidget->setAlternatingRowColors(true);
        treeWidget->setSortingEnabled(true);
        treeWidget->setColumnCount(5);
        treeWidget->header()->setDefaultSectionSize(100);

        verticalLayout->addWidget(treeWidget);

        buttonBox = new QDialogButtonBox(ZADLControlDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);


        retranslateUi(ZADLControlDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ZADLControlDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ZADLControlDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ZADLControlDialog);
    } // setupUi

    void retranslateUi(QDialog *ZADLControlDialog)
    {
        ZADLControlDialog->setWindowTitle(QApplication::translate("ZADLControlDialog", "Select zADL to Spend", 0));
        labelQuantity->setText(QApplication::translate("ZADLControlDialog", "Quantity", 0));
        labelQuantity_int->setText(QApplication::translate("ZADLControlDialog", "0", 0));
        labelZADL->setText(QApplication::translate("ZADLControlDialog", "zADL", 0));
        labelZADL_int->setText(QApplication::translate("ZADLControlDialog", "0", 0));
        pushButtonAll->setText(QApplication::translate("ZADLControlDialog", "Select/Deselect All", 0));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(4, QApplication::translate("ZADLControlDialog", "Is Spendable", 0));
    } // retranslateUi

};

namespace Ui {
    class ZADLControlDialog: public Ui_ZADLControlDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZONLCONTROLDIALOG_H
