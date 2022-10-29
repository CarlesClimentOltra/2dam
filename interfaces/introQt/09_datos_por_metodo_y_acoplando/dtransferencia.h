#ifndef _DTRANSFERENCIA_H
#define _DTRANSFERENCIA_H

#include <QDialog>
#include <QLineEdit>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>
#include <QSlider>
#include <QString>
#include <QLabel>
#include <QRegularExpression>
#include <QRegularExpressionMatch>
#include <QComboBox>
#include <QStringList>
#include <QListWidget>

class DTransferencia : public QDialog {
Q_OBJECT

public: 	
	
	QHBoxLayout *layoutP;
	QVBoxLayout *layoutS1, *layoutS2, *layoutS3;
	QHBoxLayout *layoutT1, *layoutT2;
	QPushButton *bAceptar, *bCancelar;
	QLabel *lDestino, *lCantidad, *lComision;
	QLineEdit *leDestino, *leCantidad;
	QComboBox *cmbDestino;
	QListWidget *lwCuentas;
	
	DTransferencia(QStringList, QWidget *parent = 0);
	
	void actualizarComboBox(QStringList);
	void actualizarListWidget(QStringList);
	
public slots:
	
	void actualizarBoton(const QString &);
	void actualizarComision(const QString &);

};

#endif
