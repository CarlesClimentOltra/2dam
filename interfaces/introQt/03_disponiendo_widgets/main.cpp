#include <QApplication>
#include <QHBoxLayout>
#include <QSlider>
#include <QSpinBox>
#include <QLCDNumber>
#include <QPushButton> 
#include <QLineEdit>
#include <QLabel>


  int main(int argc, char *argv[])
  {
      QApplication app(argc, argv);

      QWidget *window = new QWidget;
      window->setWindowTitle("Enter Your Age");

     QSpinBox *spinBox = new QSpinBox;
     QSlider *slider = new QSlider(Qt::Horizontal);
     QLCDNumber *lcdnumber = new QLCDNumber;
     QPushButton *boton1 = new QPushButton("Decimal");
     QPushButton *boton2 = new QPushButton("Hexadecimal");
     QLineEdit *edit = new QLineEdit();
     QLabel *label = new QLabel("Prueba");
     spinBox->setRange(0, 130);
     slider->setRange(0, 130);

     QObject::connect(spinBox, SIGNAL(valueChanged(int)),
                      slider, SLOT(setValue(int)));
     QObject::connect(slider, SIGNAL(valueChanged(int)),
                      spinBox, SLOT(setValue(int)));
     QObject::connect(spinBox, SIGNAL(valueChanged(int)),
                      lcdnumber, SLOT(display(int)));
     QObject::connect(slider, SIGNAL(valueChanged(int)),
                      lcdnumber, SLOT(display(int)));
     QObject::connect(boton1, SIGNAL(clicked()),
                      lcdnumber, SLOT(setDecMode()));
     QObject::connect(boton2, SIGNAL(clicked()),
                      lcdnumber, SLOT(setHexMode())); 
     QObject::connect(edit, SIGNAL(textChanged(const QString)),
                      label, SLOT(setText(const QString)));                
     spinBox->setValue(35);

     QHBoxLayout *layout = new QHBoxLayout;
     QVBoxLayout *layoutS1 = new QVBoxLayout;
     QVBoxLayout *layoutS2 = new QVBoxLayout;
     QHBoxLayout *layoutT1 = new QHBoxLayout;
     QHBoxLayout *layoutT2 = new QHBoxLayout;
     
     layoutT1->addWidget(spinBox);
     layoutT1->addWidget(slider);      
     layoutT2->addWidget(boton1);
     layoutT2->addWidget(boton2);
     layoutS2->addWidget(edit);
     layoutS2->addWidget(label);
     layoutS1->addLayout(layoutT1);
     layoutS1->addWidget(lcdnumber);
     layoutS1->addLayout(layoutT2);
     layout->addLayout(layoutS1);
     layout->addLayout(layoutS2);
     window->setLayout(layout);

     window->show();

     return app.exec();
 }

