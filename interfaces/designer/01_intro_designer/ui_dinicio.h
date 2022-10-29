/********************************************************************************
** Form generated from reading UI file 'dinicio.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DINICIO_H
#define UI_DINICIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DInicio
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *bOpcionA;
    QPushButton *bOpcionB;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *bConsultar;
    QLineEdit *leConsultar;
    QTextEdit *pteTextoResultado;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *bVerificar;
    QLineEdit *leVerificar;

    void setupUi(QDialog *DInicio)
    {
        if (DInicio->objectName().isEmpty())
            DInicio->setObjectName(QString::fromUtf8("DInicio"));
        DInicio->resize(578, 378);
        buttonBox = new QDialogButtonBox(DInicio);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(70, 300, 441, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        widget = new QWidget(DInicio);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(70, 40, 450, 194));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));

        horizontalLayout_3->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        bOpcionA = new QPushButton(widget);
        bOpcionA->setObjectName(QString::fromUtf8("bOpcionA"));

        horizontalLayout_2->addWidget(bOpcionA);

        bOpcionB = new QPushButton(widget);
        bOpcionB->setObjectName(QString::fromUtf8("bOpcionB"));

        horizontalLayout_2->addWidget(bOpcionB);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        bConsultar = new QPushButton(widget);
        bConsultar->setObjectName(QString::fromUtf8("bConsultar"));

        horizontalLayout_4->addWidget(bConsultar);

        leConsultar = new QLineEdit(widget);
        leConsultar->setObjectName(QString::fromUtf8("leConsultar"));

        horizontalLayout_4->addWidget(leConsultar);


        verticalLayout->addLayout(horizontalLayout_4);


        horizontalLayout_3->addLayout(verticalLayout);

        pteTextoResultado = new QTextEdit(widget);
        pteTextoResultado->setObjectName(QString::fromUtf8("pteTextoResultado"));

        horizontalLayout_3->addWidget(pteTextoResultado);

        widget1 = new QWidget(DInicio);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(70, 250, 451, 27));
        horizontalLayout_5 = new QHBoxLayout(widget1);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        bVerificar = new QPushButton(widget1);
        bVerificar->setObjectName(QString::fromUtf8("bVerificar"));

        horizontalLayout_5->addWidget(bVerificar);

        leVerificar = new QLineEdit(widget1);
        leVerificar->setObjectName(QString::fromUtf8("leVerificar"));

        horizontalLayout_5->addWidget(leVerificar);


        retranslateUi(DInicio);
        QObject::connect(buttonBox, SIGNAL(accepted()), DInicio, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DInicio, SLOT(reject()));

        QMetaObject::connectSlotsByName(DInicio);
    } // setupUi

    void retranslateUi(QDialog *DInicio)
    {
        DInicio->setWindowTitle(QApplication::translate("DInicio", "Dialog", nullptr));
        bOpcionA->setText(QApplication::translate("DInicio", "Opcion A", nullptr));
        bOpcionB->setText(QApplication::translate("DInicio", "Opcion B", nullptr));
        bConsultar->setText(QApplication::translate("DInicio", "Consultar", nullptr));
        pteTextoResultado->setHtml(QApplication::translate("DInicio", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        bVerificar->setText(QApplication::translate("DInicio", "Verificar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DInicio: public Ui_DInicio {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DINICIO_H
