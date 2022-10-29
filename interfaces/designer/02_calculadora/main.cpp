#include <QApplication>
#include <QLabel>
#include <QDialog>
#include <unistd.h>
#include "dcalculadora.h"

int main(int argc, char *argv[])
{
     QApplication app(argc, argv);
     
     /*Voy a crear un diálogo (o formulario) y mostrarlo */
     
     DCalculadora *dcalculadora = new DCalculadora();
     dcalculadora->show();
   
 		
     return app.exec();
}
