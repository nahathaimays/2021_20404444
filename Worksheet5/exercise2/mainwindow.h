// exercise2/mainwindow.h --------------------------------------------
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "stockitemlistmodel.h"

namespace Ui {
class MainWindow;
}
class MainWindow : public QMainWindow
{
	Q_OBJECT

signals:
	void statusUpdateMessage( const QString & message, int timeout );
public:
	explicit MainWindow(QWidget * parent = 0);
	~MainWindow();
public slots:
	void handleAddButton();
	void handleEditButton();
	void handleRemoveButton();
	void on_actionSave_triggered();

private:
	Ui::MainWindow * ui;
	StockItemListModel stockList;

};



#endif // MAINWINDOW_H