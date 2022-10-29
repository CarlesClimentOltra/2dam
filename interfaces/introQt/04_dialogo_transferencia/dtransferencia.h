//esto va a ser la declaracion

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

class DTransferencia : public QDialog {
Q_OBJECT

public: 	
	
	QHBoxLayout *layoutP;
	QVBoxLayout *layoutS1, *layoutS2;
	QHBoxLayout *layoutT1, *layoutT2;
	QPushButton *bAceptar, *bCancelar;
	QLabel *lDestino, *lCantidad, *lComision;
	QLineEdit *leDestino, *leCantidad;
	
	DTransferencia(QWidget *parent = 0);
	
public slots:
	
	void actualizarBoton(const QString &);
	void actualizarComision(const QString &);

};
