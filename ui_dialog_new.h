/********************************************************************************
** Form generated from reading UI file 'dialog_new.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_NEW_H
#define UI_DIALOG_NEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog_new
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QFontComboBox *fontComboBox;
    QFontComboBox *fontComboBox_2;

    void setupUi(QDialog *Dialog_new)
    {
        if (Dialog_new->objectName().isEmpty())
            Dialog_new->setObjectName(QStringLiteral("Dialog_new"));
        Dialog_new->resize(674, 485);
        label = new QLabel(Dialog_new);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 100, 71, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\347\255\211\347\272\277"));
        font.setPointSize(14);
        label->setFont(font);
        label_2 = new QLabel(Dialog_new);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(120, 210, 71, 31));
        label_2->setFont(font);
        pushButton = new QPushButton(Dialog_new);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(130, 340, 101, 41));
        pushButton_2 = new QPushButton(Dialog_new);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(350, 340, 101, 41));
        fontComboBox = new QFontComboBox(Dialog_new);
        fontComboBox->setObjectName(QStringLiteral("fontComboBox"));
        fontComboBox->setGeometry(QRect(220, 100, 321, 31));
        fontComboBox_2 = new QFontComboBox(Dialog_new);
        fontComboBox_2->setObjectName(QStringLiteral("fontComboBox_2"));
        fontComboBox_2->setGeometry(QRect(220, 210, 321, 31));

        retranslateUi(Dialog_new);

        QMetaObject::connectSlotsByName(Dialog_new);
    } // setupUi

    void retranslateUi(QDialog *Dialog_new)
    {
        Dialog_new->setWindowTitle(QApplication::translate("Dialog_new", "Dialog", 0));
        label->setText(QApplication::translate("Dialog_new", "\346\226\207\344\273\266", 0));
        label_2->setText(QApplication::translate("Dialog_new", "\350\267\257\345\276\204", 0));
        pushButton->setText(QApplication::translate("Dialog_new", "\347\241\256\350\256\244", 0));
        pushButton_2->setText(QApplication::translate("Dialog_new", "\345\217\226\346\266\210", 0));
        fontComboBox->setCurrentText(QApplication::translate("Dialog_new", "\350\257\267\351\200\211\346\213\251", 0));
        fontComboBox_2->setCurrentText(QApplication::translate("Dialog_new", "\350\257\267\351\200\211\346\213\251", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog_new: public Ui_Dialog_new {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_NEW_H
