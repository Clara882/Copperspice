#include <QtCore>
#include <QtGui>
#include <iostream>

class MainWindow : public QWidget
{
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

   
   QLineEdit *anzeige = new QLineEdit();
   anzeige->setText("0");
   anzeige->setReadOnly(true);
   anzeige->setAlignment(Qt::AlignRight);

   

   QGridLayout *grid1 = new QGridLayout();
   grid1->setContentsMargins(50, 25, 50, 25);
   grid1->setHorizontalSpacing(10);
   grid1->setVerticalSpacing(20);

   
   grid1->addWidget(anzeige, 0, 0, 1, 4);
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

   QHBoxLayout *layout1 = new QHBoxLayout();
   layout1->addStretch();
   layout1->addWidget(pb_16);
   layout1->addStretch();

   QVBoxLayout *layoutMain = new QVBoxLayout(this);
   layoutMain->addLayout(grid1);
   layoutMain->addSpacing(75);
   layoutMain->addLayout(layout1);

}



int main(int argc, char *argv[])
{
   QApplication app(argc, argv);

   MainWindow *window = new MainWindow();
   window->show();

   return app.exec();
}
