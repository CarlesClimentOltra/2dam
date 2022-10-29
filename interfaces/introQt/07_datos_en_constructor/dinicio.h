#ifndef _DINICIO_H
#define _DINICIO_H

#include <QPushButton>
#include <QLabel>
#include <QDialog>
#include <QStringList>
#include "dtransferencia.h"


class DInicio : public QDialog {
Q_OBJECT


public: 

	DInicio(QWidget *parent = nullptr);
	
	QPushButton *boton;
	DTransferencia *dTransf;
	QLabel *lResultado;
	QStringList listaCuentas;
	
public slots:

	void slotAbrirDialogo();
	void slotAceptarTransferencia();
	void slotCancelarTransferencia();

};

#endif
