#ifndef DCALCULADORA_H
#define DCALCULADORA_H

#include <QDialog>
#include "ui_dcalculadora.h"

class DCalculadora : public QDialog, public Ui::DCalculadora {
Q_OBJECT

public:

		
	DCalculadora(QWidget * parent = NULL);

public slots:

	void slotBotonNumerico();

};

#endif // DCALCULADORA_H
