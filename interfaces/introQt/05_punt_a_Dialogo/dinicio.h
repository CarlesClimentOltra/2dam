#ifndef _DINICIO_H
#define _DINICIO_H

#include <QPushButton>
#include <QDialog>
#include "dtransferencia.h"


class DInicio : public QDialog {
Q_OBJECT


public: 

	DInicio(QWidget *parent = nullptr);
	
	QPushButton *boton;
	DTransferencia *dTransf;
	
public slots:

	void slotAbrirDialogo();

};

#endif
