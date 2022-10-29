#include <QHBoxLayout>
#include <QStringList>
#include "dinicio.h"
#include "dtransferencia.h"

DInicio::DInicio(QWidget *parent):QDialog(parent) {

	
	
	QVBoxLayout *layout = new QVBoxLayout;
	boton = new QPushButton("Lanzar Transferencia");
	lResultado = new QLabel("Listo para lanzar una transferencia");
	
	layout->addWidget(boton);
	layout->addWidget(lResultado);
	
	this->setLayout(layout);
	
	QStringList l = {"999999", "555555", "222222"};
	listaCuentas = l;
	
	connect(boton, SIGNAL(clicked()),
		this, SLOT(slotAbrirDialogo()));
		
	dTransf = NULL;
	
	
		

}

void DInicio::slotAbrirDialogo() {

	if (dTransf == NULL)
		dTransf = new DTransferencia(listaCuentas);
		
	connect(dTransf, SIGNAL(accepted()),
						this, SLOT(slotAceptarTransferencia()));
	connect(dTransf, SIGNAL(rejected()),
						this, SLOT(slotCancelarTransferencia()));
	
	dTransf->show();

}

void DInicio::slotAceptarTransferencia() {

	lResultado->setText("Transferencia aceptada");
	delete dTransf;
	dTransf = NULL;
	
}

void DInicio::slotCancelarTransferencia() {

	lResultado->setText("Transferencia cancelada");

}
