#include <QApplication>
#include <QLabel>
#include <QDialog>
#include <unistd.h>
#include "dencuesta.h"

int main(int argc, char *argv[])
{
     QApplication app(argc, argv);
     
     /*Voy a crear un diálogo (o formulario) y mostrarlo */
     
     DEncuesta *dialogo = new DEncuesta();
     dialogo->resize(300, 400);
     dialogo->show();
 		
     return app.exec();
}
