//esto va a ser la declaracion

#include <QDialog>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>
#include <QSlider>
#include<QLabel>

class DEncuesta : public QDialog {
Q_OBJECT

public: 

	DEncuesta(QWidget *parent = nullptr);
	
	QLabel *lPregunta;
	QLabel *lPregunta2;
	
public slots:
	
	void slotMierda();
	void barraValoracion(int num);

};
