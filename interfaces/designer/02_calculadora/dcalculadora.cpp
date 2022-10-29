#include "dcalculadora.h"

DCalculadora::DCalculadora(QWidget * parent) : QDialog(parent) {

	setupUi(this);
	
	connect(bCero, SIGNAL(clicked()),
		this, SLOT(slotBotonNumerico()));
	
}

void DCalculadora::slotBotonNumerico() {

	lcdResultado->display(0);

}
