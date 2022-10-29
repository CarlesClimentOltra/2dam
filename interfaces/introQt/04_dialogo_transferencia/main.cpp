#include <QApplication>
#include <QLabel>
#include <QDialog>
#include <unistd.h>
#include "dtransferencia.h"

int main(int argc, char *argv[])
{
     QApplication app(argc, argv);
     
     /*Voy a crear un diálogo (o formulario) y mostrarlo */
     
     DTransferencia *dialogo = new DTransferencia();
     dialogo->resize(300, 400);
     dialogo->show();
 		
 	
 		
     return app.exec();
}
