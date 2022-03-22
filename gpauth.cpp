/**
*
*   Author: 	jay.dnb@outlook.in
*   Created: 	
*
*   UNIX CPP scipt >> 
*   Synopsis: ~$
*
**/

#include <iostream>

#include "gpauth-ref-seq.hpp"

using namespace std;

int main(int argc, char **argv)
{
	
        QApplication app(argc, argv);
        QMainWindow *widget = new QMainWindow;
        Ui::GPAuth ui;
        ui.setupUi(widget);

        widget->show();
        return app.exec();
	
}
