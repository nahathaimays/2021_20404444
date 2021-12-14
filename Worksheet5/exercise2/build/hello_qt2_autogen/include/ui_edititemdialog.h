/********************************************************************************
** Form generated from reading UI file 'edititemdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITITEMDIALOG_H
#define UI_EDITITEMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EditItemDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *name;
    QLabel *label;
    QHBoxLayout *horizontalLayout_3;
    QDoubleSpinBox *unitCost;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_4;
    QSpinBox *stockLevel;
    QLabel *label_3;
    QCheckBox *reorder;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QDialogButtonBox *buttonBox;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *EditItemDialog)
    {
        if (EditItemDialog->objectName().isEmpty())
            EditItemDialog->setObjectName(QString::fromUtf8("EditItemDialog"));
        EditItemDialog->resize(308, 195);
        verticalLayout_2 = new QVBoxLayout(EditItemDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        name = new QLineEdit(EditItemDialog);
        name->setObjectName(QString::fromUtf8("name"));

        horizontalLayout_2->addWidget(name);

        label = new QLabel(EditItemDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        unitCost = new QDoubleSpinBox(EditItemDialog);
        unitCost->setObjectName(QString::fromUtf8("unitCost"));

        horizontalLayout_3->addWidget(unitCost);

        label_2 = new QLabel(EditItemDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        stockLevel = new QSpinBox(EditItemDialog);
        stockLevel->setObjectName(QString::fromUtf8("stockLevel"));

        horizontalLayout_4->addWidget(stockLevel);

        label_3 = new QLabel(EditItemDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);


        verticalLayout->addLayout(horizontalLayout_4);

        reorder = new QCheckBox(EditItemDialog);
        reorder->setObjectName(QString::fromUtf8("reorder"));

        verticalLayout->addWidget(reorder);


        horizontalLayout_7->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(48, 18, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        buttonBox = new QDialogButtonBox(EditItemDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(EditItemDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, EditItemDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, EditItemDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(EditItemDialog);
    } // setupUi

    void retranslateUi(QDialog *EditItemDialog)
    {
        EditItemDialog->setWindowTitle(QCoreApplication::translate("EditItemDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("EditItemDialog", "Item Name", nullptr));
        label_2->setText(QCoreApplication::translate("EditItemDialog", "Item Cost", nullptr));
        label_3->setText(QCoreApplication::translate("EditItemDialog", "Stock Level", nullptr));
        reorder->setText(QCoreApplication::translate("EditItemDialog", "Reorder?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditItemDialog: public Ui_EditItemDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITITEMDIALOG_H
