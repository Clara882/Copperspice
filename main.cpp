#include <QtCore>
#include <QtGui>
#include <iostream>

class MainWindow : public QWidget
{
private:
   QLineEdit *anzeige;
   void los();
   void clicked_0();
   void clicked_1();
   void clicked_2();
   void clicked_3();
   void clicked_4();
   void clicked_5();
   void clicked_6();
   void clicked_7();
   void clicked_8();
   void clicked_9();
   void plus_clicked();
   void minus_clicked();
   void mal_clicked();
   void geteilt_clicked();
   void gleich_clicked();
   void AC_clicked();

   int zahl1;
   int zahl2;
   double ergebnis;
   char operation;

public:
   MainWindow();
};

MainWindow::MainWindow()
{
   setMinimumSize(700, 350);

   QPushButton *pb_0 = new QPushButton();
   pb_0->setText("0");
   QPushButton *pb_1 = new QPushButton();
   pb_1->setText("1");
   QPushButton *pb_2 = new QPushButton();
   pb_2->setText("2");
   QPushButton *pb_3 = new QPushButton();
   pb_3->setText("3");
   QPushButton *pb_4 = new QPushButton();
   pb_4->setText("4");
   QPushButton *pb_5 = new QPushButton();
   pb_5->setText("5");
   QPushButton *pb_6 = new QPushButton();
   pb_6->setText("6");
   QPushButton *pb_7 = new QPushButton();
   pb_7->setText("7");
   QPushButton *pb_8 = new QPushButton();
   pb_8->setText("8");
   QPushButton *pb_9 = new QPushButton();
   pb_9->setText("9");
   QPushButton *pb_10 = new QPushButton();
   pb_10->setText("+");
   QPushButton *pb_11 = new QPushButton();
   pb_11->setText("-");
   QPushButton *pb_12 = new QPushButton();
   pb_12->setText("*");
   QPushButton *pb_13 = new QPushButton();
   pb_13->setText("/");
   QPushButton *pb_14 = new QPushButton();
   pb_14->setText("=");
   QPushButton *pb_15 = new QPushButton();
   pb_15->setText("AC");
   QPushButton *pb_16 = new QPushButton();
   pb_16->setText("close");

   QSlider *slider = new QSlider;
   slider->setMinimum(0);
   slider->setMaximum(100);

   QDial *dial = new QDial;
   dial->setMinimum(0);
   dial->setMaximum(100);

   QSpinBox *spinBox = new QSpinBox;
   spinBox->setMinimum(0);
   spinBox->setMaximum(100);

   QProgressBar *progressBar = new QProgressBar;
   progressBar->setMinimum(0);
   progressBar->setMaximum(100);
   
   anzeige = new QLineEdit();
   anzeige->setText("0");
   anzeige->setReadOnly(true);
   anzeige->setAlignment(Qt::AlignRight);

   

   QGridLayout *grid1 = new QGridLayout();
   grid1->setContentsMargins(50, 25, 50, 25);
   grid1->setHorizontalSpacing(10);
   grid1->setVerticalSpacing(20);

   grid1->addWidget(anzeige, 0, 2, 1, 2);
   grid1->addWidget(pb_0, 4, 0);
   grid1->addWidget(pb_1, 1, 0);
   grid1->addWidget(pb_2, 1, 1);
   grid1->addWidget(pb_3, 1, 2);
   grid1->addWidget(pb_4, 2, 0);
   grid1->addWidget(pb_5, 2, 1);
   grid1->addWidget(pb_6, 2, 2);
   grid1->addWidget(pb_7, 3, 0);
   grid1->addWidget(pb_8, 3, 1);
   grid1->addWidget(pb_9, 3, 2);
   grid1->addWidget(pb_10, 1, 3);
   grid1->addWidget(pb_11, 2, 3);
   grid1->addWidget(pb_12, 3, 3);
   grid1->addWidget(pb_13, 4, 3);
   grid1->addWidget(pb_14, 4, 2);
   grid1->addWidget(pb_15, 4, 1);
   grid1->addWidget(slider, 5, 3, Qt::AlignHCenter);
   grid1->addWidget(spinBox, 5, 2, Qt::AlignHCenter);
   grid1->addWidget(dial, 5, 1, Qt::AlignHCenter);


   QHBoxLayout *layout1 = new QHBoxLayout();
   layout1->addStretch();
   layout1->addWidget(pb_16);
   layout1->addStretch();

   /*QHBoxLayout *layout2 = new QHBoxLayout();
   layout1->addStretch();
   layout1->addWidget(anzeige);
   layout1->addStretch();
*/
   QVBoxLayout *layoutMain = new QVBoxLayout(this);
   //layoutMain->addLayout(layout2);
   //layoutMain->addSpacing(10);
   layoutMain->addLayout(grid1);
   layoutMain->addSpacing(50);
   layoutMain->addLayout(layout1);

   connect(pb_16, &QPushButton::clicked, this, &QWidget::close);
   connect(pb_0, &QPushButton::clicked, this, &MainWindow::clicked_0);
   connect(pb_1, &QPushButton::clicked, this, &MainWindow::clicked_1);
   connect(pb_2, &QPushButton::clicked, this, &MainWindow::clicked_2);
   connect(pb_3, &QPushButton::clicked, this, &MainWindow::clicked_3);
   connect(pb_4, &QPushButton::clicked, this, &MainWindow::clicked_4);
   connect(pb_5, &QPushButton::clicked, this, &MainWindow::clicked_5);
   connect(pb_6, &QPushButton::clicked, this, &MainWindow::clicked_6);
   connect(pb_7, &QPushButton::clicked, this, &MainWindow::clicked_7);
   connect(pb_8, &QPushButton::clicked, this, &MainWindow::clicked_8);
   connect(pb_9, &QPushButton::clicked, this, &MainWindow::clicked_9);
   connect(pb_10, &QPushButton::clicked, this, &MainWindow::plus_clicked);
   connect(pb_11, &QPushButton::clicked, this, &MainWindow::minus_clicked);
   connect(pb_12, &QPushButton::clicked, this, &MainWindow::mal_clicked);
   connect(pb_13, &QPushButton::clicked, this, &MainWindow::geteilt_clicked);
   connect(pb_14, &QPushButton::clicked, this, &MainWindow::gleich_clicked);
   connect(pb_15, &QPushButton::clicked, this, &MainWindow::AC_clicked);
   connect(slider, 
         cs_mp_cast<int>(&QSlider::valueChanged), 
         dial, &QDial::setValue);
   connect(spinBox, 
         cs_mp_cast<int>(&QSpinBox::valueChanged), 
         slider, &QSlider::setValue);
   connect(dial, 
         cs_mp_cast<int>(&QDial::valueChanged), 
         spinBox, &QSpinBox::setValue);
}


void MainWindow::clicked_0()
{
    if(anzeige->text() == "0")
    {
        anzeige->clear();
    }
    anzeige->insert("0");
}
void MainWindow::clicked_1()
{
    if(anzeige->text() == "0")
    {
        anzeige->clear();
    }
    anzeige->insert("1");
}
void MainWindow::clicked_2()
{
    if(anzeige->text() == "0")
    {
        anzeige->clear();
    }
    anzeige->insert("2");
}
void MainWindow::clicked_3()
{
    if(anzeige->text() == "0")
    {
        anzeige->clear();
    }
    anzeige->insert("3");
}
void MainWindow::clicked_4()
{
    if(anzeige->text() == "0")
    {
        anzeige->clear();
    }
    anzeige->insert("4");
}
void MainWindow::clicked_5()
{
    if(anzeige->text() == "0")
    {
        anzeige->clear();
    }
    anzeige->insert("5");
}
void MainWindow::clicked_6()
{
    if(anzeige->text() == "0")
    {
        anzeige->clear();
    }
    anzeige->insert("6");
}
void MainWindow::clicked_7()
{
    if(anzeige->text() == "0")
    {
        anzeige->clear();
    }
    anzeige->insert("7");
}
void MainWindow::clicked_8()
{
    if(anzeige->text() == "0")
    {
        anzeige->clear();
    }
    anzeige->insert("8");
}
void MainWindow::clicked_9()
{
    if(anzeige->text() == "0")
    {
        anzeige->clear();
    }
    anzeige->insert("9");
}

void MainWindow::plus_clicked()
{
   zahl1  = anzeige->text().toDouble();
    operation = '+';
    anzeige->clear();
}

void MainWindow::minus_clicked()
{
    zahl1 = anzeige->text().toDouble();
    operation = '-';
    anzeige->clear();
}

void MainWindow::mal_clicked()
{
    zahl1 = anzeige->text().toDouble();
    operation = '*';
    anzeige->clear();
}

void MainWindow::geteilt_clicked()
{
    zahl1 = anzeige->text().toDouble();
    operation = '/';
    anzeige->clear();
}

void MainWindow::AC_clicked()
{
    anzeige->clear();
    anzeige->setText("0");
    zahl1 = 0;
    zahl2 = 0;
    ergebnis = 0;
}



void MainWindow::gleich_clicked()
{
   zahl2 = anzeige->text().toDouble();

   switch(operation)
   {
      case '+':
         ergebnis = zahl1 +zahl2;
         break;
      case '-':
         ergebnis = zahl1 -zahl2;
         break;
      case '*':
         ergebnis = zahl1 *zahl2;
         break;
      case '/':
         ergebnis = zahl1 /zahl2;
         break;
   }
   anzeige->setText(QString::number(ergebnis));
}


   

int main(int argc, char *argv[])
{
   QApplication app(argc, argv);

   MainWindow *window = new MainWindow();
   window->show();

   return app.exec();
}
