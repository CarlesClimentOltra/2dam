#include "dencuesta.h"


DEncuesta::DEncuesta(QWidget *parent):QDialog(parent) {

	resize(200, 200);

	QVBoxLayout *layoutP = new QVBoxLayout();
	QHBoxLayout *layoutS1 = new QHBoxLayout();
	QHBoxLayout *layoutS2 = new QHBoxLayout();
	QHBoxLayout *layoutS3 = new QHBoxLayout();
	QHBoxLayout *layoutS4 = new QHBoxLayout();
	lPregunta = new QLabel("¿Te gusta este módulo?");
	lPregunta2 = new QLabel("c++");
	QSlider *slider = new QSlider(Qt::Horizontal);
	slider->setRange(0, 5);
	QPushButton *boton1 = new QPushButton("Si");
	QPushButton *boton2 = new QPushButton("No");
	QPushButton *boton3 = new QPushButton("A");
	
	setLayout(layoutP);
	layoutP->addLayout(layoutS3);
	layoutP->addLayout(layoutS4);
	layoutP->addLayout(layoutS1);
	layoutP->addLayout(layoutS2);
	layoutS3->addWidget(lPregunta2);
	layoutS4->addWidget(slider);
	layoutS1->addWidget(lPregunta);
	layoutS2->addWidget(boton1);
	layoutS2->addWidget(boton2);
	layoutS2->addWidget(boton3);
	
	connect(boton1, SIGNAL(clicked()),
						this, SLOT(accept()));
	connect(boton2, SIGNAL(clicked()),
						this, SLOT(showMinimized()));
	connect(boton3, SIGNAL(clicked()),
						this, SLOT(slotMierda()));	
	connect(slider, SIGNAL(valueChanged(int)),
						this, SLOT(barraValoracion(int)));			


}

void DEncuesta::slotMierda() {

	lPregunta->setText("Esta asignatura es una mierda");

}

void DEncuesta::barraValoracion(int num) {

	switch (num) {
	
		case 0:
		
			lPregunta2->setText("No me gusta nada");
			break;
			
		case 1:
		
			lPregunta2->setText("Me gusta poco");
			break;	
	
	}
	
	
}
