/********************************************************************************
** Form generated from reading UI file 'dcalculadora.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DCALCULADORA_H
#define UI_DCALCULADORA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DCalculadora
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLCDNumber *lcdResultado;
    QGridLayout *gridLayout;
    QPushButton *bOcho;
    QPushButton *bCinco;
    QPushButton *bSiete;
    QPushButton *bCuatro;
    QPushButton *bSeis;
    QPushButton *bTres;
    QPushButton *bUno;
    QPushButton *bDos;
    QPushButton *bNueve;
    QHBoxLayout *horizontalLayout;
    QPushButton *bCero;
    QPushButton *bPunto;
    QVBoxLayout *verticalLayout_2;
    QPushButton *bMas;
    QPushButton *bIgual;

    void setupUi(QDialog *DCalculadora)
    {
        if (DCalculadora->objectName().isEmpty())
            DCalculadora->setObjectName(QString::fromUtf8("DCalculadora"));
        DCalculadora->resize(527, 437);
        widget = new QWidget(DCalculadora);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(50, 50, 416, 157));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lcdResultado = new QLCDNumber(widget);
        lcdResultado->setObjectName(QString::fromUtf8("lcdResultado"));

        verticalLayout->addWidget(lcdResultado);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        bOcho = new QPushButton(widget);
        bOcho->setObjectName(QString::fromUtf8("bOcho"));

        gridLayout->addWidget(bOcho, 2, 1, 1, 1);

        bCinco = new QPushButton(widget);
        bCinco->setObjectName(QString::fromUtf8("bCinco"));

        gridLayout->addWidget(bCinco, 3, 1, 1, 1);

        bSiete = new QPushButton(widget);
        bSiete->setObjectName(QString::fromUtf8("bSiete"));

        gridLayout->addWidget(bSiete, 2, 0, 1, 1);

        bCuatro = new QPushButton(widget);
        bCuatro->setObjectName(QString::fromUtf8("bCuatro"));

        gridLayout->addWidget(bCuatro, 3, 0, 1, 1);

        bSeis = new QPushButton(widget);
        bSeis->setObjectName(QString::fromUtf8("bSeis"));

        gridLayout->addWidget(bSeis, 3, 2, 1, 1);

        bTres = new QPushButton(widget);
        bTres->setObjectName(QString::fromUtf8("bTres"));

        gridLayout->addWidget(bTres, 4, 2, 1, 1);

        bUno = new QPushButton(widget);
        bUno->setObjectName(QString::fromUtf8("bUno"));

        gridLayout->addWidget(bUno, 4, 0, 1, 1);

        bDos = new QPushButton(widget);
        bDos->setObjectName(QString::fromUtf8("bDos"));

        gridLayout->addWidget(bDos, 4, 1, 1, 1);

        bNueve = new QPushButton(widget);
        bNueve->setObjectName(QString::fromUtf8("bNueve"));

        gridLayout->addWidget(bNueve, 2, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        bCero = new QPushButton(widget);
        bCero->setObjectName(QString::fromUtf8("bCero"));

        horizontalLayout->addWidget(bCero);

        bPunto = new QPushButton(widget);
        bPunto->setObjectName(QString::fromUtf8("bPunto"));

        horizontalLayout->addWidget(bPunto);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        bMas = new QPushButton(widget);
        bMas->setObjectName(QString::fromUtf8("bMas"));

        verticalLayout_2->addWidget(bMas);

        bIgual = new QPushButton(widget);
        bIgual->setObjectName(QString::fromUtf8("bIgual"));

        verticalLayout_2->addWidget(bIgual);


        horizontalLayout_2->addLayout(verticalLayout_2);


        retranslateUi(DCalculadora);

        QMetaObject::connectSlotsByName(DCalculadora);
    } // setupUi

    void retranslateUi(QDialog *DCalculadora)
    {
        DCalculadora->setWindowTitle(QApplication::translate("DCalculadora", "Dialog", nullptr));
        bOcho->setText(QApplication::translate("DCalculadora", "8", nullptr));
        bCinco->setText(QApplication::translate("DCalculadora", "5", nullptr));
        bSiete->setText(QApplication::translate("DCalculadora", "7", nullptr));
        bCuatro->setText(QApplication::translate("DCalculadora", "4", nullptr));
        bSeis->setText(QApplication::translate("DCalculadora", "6", nullptr));
        bTres->setText(QApplication::translate("DCalculadora", "3", nullptr));
        bUno->setText(QApplication::translate("DCalculadora", "1", nullptr));
        bDos->setText(QApplication::translate("DCalculadora", "2", nullptr));
        bNueve->setText(QApplication::translate("DCalculadora", "9", nullptr));
        bCero->setText(QApplication::translate("DCalculadora", "0", nullptr));
        bPunto->setText(QApplication::translate("DCalculadora", ".", nullptr));
        bMas->setText(QApplication::translate("DCalculadora", "+", nullptr));
        bIgual->setText(QApplication::translate("DCalculadora", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DCalculadora: public Ui_DCalculadora {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DCALCULADORA_H
