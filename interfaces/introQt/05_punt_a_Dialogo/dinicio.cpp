#include <QHBoxLayout>
#include "dinicio.h"
#include "dtransferencia.h"

DInicio::DInicio(QWidget *parent):QDialog(parent) {

	boton = new QPushButton("Lanzar");
	
	QHBoxLayout *layout = new QHBoxLayout;
	layout->addWidget(boton);
	
	this->setLayout(layout);
	
	connect(boton, SIGNAL(clicked()),
		this, SLOT(slotAbrirDialogo()));
		
	dTransf = NULL;

}

void DInicio::slotAbrirDialogo() {

	if (dTransf == NULL)
		dTransf = new DTransferencia();
	
	dTransf->show();

}
