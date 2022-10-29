#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QStringList>
#include "dinicio.h"
#include "dtransferencia.h"

DInicio::DInicio(QWidget *parent):QDialog(parent) {

	
	
	QVBoxLayout *layout = new QVBoxLayout;
	boton = new QPushButton("Lanzar Transferencia");
	bActualizar = new QPushButton("Actualizar");
	lResultado = new QLabel("Listo para lanzar una transferencia");
	lDatos = new QLabel("Cuenta Destino");
	layout->addWidget(boton);
	layout->addWidget(lResultado);
	layout->addWidget(lDatos);
	layout->addWidget(bActualizar);
	
	this->setLayout(layout);
	
	QStringList l = {"999999", "555555", "222222"};
	listaCuentas = l;

	
	connect(boton, SIGNAL(clicked()),
		this, SLOT(slotAbrirDialogo()));
	connect(bActualizar, SIGNAL(clicked()),
		this, SLOT(slotActualizar()));
		
	dTransf = NULL;
	
	
		

}

void DInicio::slotAbrirDialogo() {

	if (dTransf == NULL)
		dTransf = new DTransferencia(listaCuentas);
		
	connect(dTransf, SIGNAL(accepted()),
						this, SLOT(slotAceptarTransferencia()));
	connect(dTransf, SIGNAL(rejected()),
						this, SLOT(slotCancelarTransferencia()));
	/*connect(dTransf, SIGNAL(senyalTransferenciaOrdenada(float)),
						this, SLOT(slotTransferenciaCantidadAceptada(float)));*/
	/*connect(dTransf, SIGNAL(senyalTransferenciaCompleta(QString, float)),
						this, SLOT(slotTransferenciaCompletaAceptada(QString, float)));*/
	
	dTransf->show();

}

void DInicio::slotAceptarTransferencia() {

	lResultado->setText("Transferencia aceptada");
	//lDatos->setText(lDatos->text() + dTransf->leCantidad->text());
	delete dTransf;
	dTransf = NULL;
	
}

void DInicio::slotCancelarTransferencia() {

	lResultado->setText("Transferencia cancelada");

}

void DInicio::slotActualizar() {
	
	if (dTransf!=NULL) {
	
		QStringList listaCuentas2 = {"123456", "234567", "345678"};
	
		dTransf->actualizarComboBox(listaCuentas2);
		dTransf->actualizarListWidget(listaCuentas2);
	
	}

}

void DInicio::slotTransferenciaCantidadAceptada(float cantidad) {

	QString izq("Transferencia de ");
	QString stringcant = QString::number(cantidad);
	QString euros(" eurillos");

	lDatos->setText(stringcant + euros);

}

void DInicio::slotTransferenciaCompletaAceptada(QString numCuenta, float cantidad) {

	slotTransferenciaCantidadAceptada(cantidad);

	lDatos->setText(lDatos->text() + " a la cuenta " + numCuenta);

}

