#include <QApplication>
#include <QLabel>
#include <QDialog>
#include <unistd.h>
#include "dinicio.h"

int main(int argc, char *argv[])
{
     QApplication app(argc, argv);
     
     /*Voy a crear un diálogo (o formulario) y mostrarlo */
     
     DInicio *dinicio = new DInicio();
     dinicio->show();
     
 		
 	
 		
     return app.exec();
}
