#include "dtransferencia.h"


DTransferencia::DTransferencia(QWidget *parent):QDialog(parent) {

	resize(200, 200);

	layoutP = new QHBoxLayout();
	layoutS1 = new QVBoxLayout();
	layoutS2 = new QVBoxLayout();
	layoutT1 = new QHBoxLayout();
	layoutT2 = new QHBoxLayout();
	
	bAceptar = new QPushButton("Aceptar");
	bCancelar = new QPushButton("Cancelar");
	
	lDestino = new QLabel("Cuenta destino:");
	lCantidad = new QLabel("Cantidad:");
	lComision = new QLabel("Comisión 0 euros");
	
	leDestino = new QLineEdit();
	leCantidad = new QLineEdit();
	
	setLayout(layoutP);
	layoutP->addLayout(layoutS1);
	layoutP->addLayout(layoutS2);
	layoutS1->addLayout(layoutT1);
	layoutS1->addLayout(layoutT2);
	
	layoutT1->addWidget(lDestino);
	layoutT1->addWidget(leDestino);
	layoutT2->addWidget(lCantidad);
	layoutT2->addWidget(leCantidad);
	layoutS1->addWidget(lComision);
	layoutS2->addWidget(bAceptar);
	layoutS2->addWidget(bCancelar);
	
	bAceptar->setEnabled(false);
	
	connect(leDestino, SIGNAL(textChanged(const QString &)),
						this, SLOT(actualizarBoton(const QString &)));					
	connect(leCantidad, SIGNAL(textChanged(const QString &)),
						this, SLOT(actualizarBoton(const QString &)));
	connect(leCantidad, SIGNAL(textChanged(const QString &)),
						this, SLOT(actualizarComision(const QString &)));					
	
	
	
	/*connect(boton3, SIGNAL(clicked()),
						this, SLOT(slotMierda()));	
	connect(slider, SIGNAL(valueChanged(int)),
						this, SLOT(barraValoracion(int)));*/			


}

void DTransferencia::actualizarBoton(const QString &cadena) {

	
	
	QRegularExpression reDestino("^\\d{6}$");
	QRegularExpressionMatch mDestino = reDestino.match(cadena);

	QRegularExpression reCantidad("^\\d+$");
	QRegularExpressionMatch mCantidad = reCantidad.match(cadena);
	
	bool destino0k = mDestino.hasMatch();
	bool cantidad0k = mCantidad.hasMatch();
	
	if (destino0k && cantidad0k) {
	
		bAceptar->setEnabled(true);
		
	}

	

}

void DTransferencia::actualizarComision(const QString &cad) {

	QString cadena = cad;
	float cantidad = cadena.toFloat();
	
	QString inicioCad("La comisión es de");
	QString cadCantidad = QString::number(cantidad*0.01);
	QString finalCad(" euros");
	
	QString resultado = inicioCad + cadCantidad + finalCad;
	
	lComision->setText(resultado);
	
	
}

