#include "tcp_client_qt.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	tcp_client_qt w;
	w.setWindowTitle("client");
	w.setBaseSize(200, 100);
	w.show();
	return a.exec();
}
