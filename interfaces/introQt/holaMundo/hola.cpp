#include <QApplication>
#include <QLabel>
#include <unistd.h>

int main(int argc, char *argv[])
{
     QApplication app(argc, argv);
     QLabel *label = new QLabel("<h1>Hola <font color=red>Qt!</font></h1>");
     label->show();
 		
     return app.exec();
 }

