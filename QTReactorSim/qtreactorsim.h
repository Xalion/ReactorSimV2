#ifndef QTREACTORSIM_H
#define QTREACTORSIM_H

#include <QtWidgets/QMainWindow>
#include "ui_qtreactorsim.h"

class QTReactorSim : public QMainWindow
{
	Q_OBJECT

public:
	QTReactorSim(QWidget *parent = 0);
	~QTReactorSim();

private:
	Ui::QTReactorSimClass ui;
};

#endif // QTREACTORSIM_H
