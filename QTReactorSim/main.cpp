#include "qtreactorsim.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QTReactorSim w;
	w.show();
	return a.exec();
}
