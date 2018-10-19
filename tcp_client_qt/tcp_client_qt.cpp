#include "tcp_client_qt.h"
#include <QPushButton>
#include <QVBoxLayout>
#include <QBoxLayout>
#include <QLineEdit>
#include <QLabel>

tcp_client_qt::tcp_client_qt(QWidget *parent)
	: QWidget(parent)
{
	//ui.setupUi(this);

	QLabel *ip_label = new QLabel("&IP:");
	QLineEdit *ip_edit = new QLineEdit;
	ip_label->setBuddy(ip_edit);
	ip_label->setFixedSize(30, 10);

	QLabel *port_label = new QLabel("&PORT:");
	QLineEdit *port_edit = new QLineEdit;
	port_label->setBuddy(port_edit);
	port_label->setFixedSize(30, 10);

	QHBoxLayout *ip_layout = new QHBoxLayout;
	ip_layout->addWidget(ip_label);
	ip_layout->addWidget(ip_edit);
	QHBoxLayout *port_layout = new QHBoxLayout;
	port_layout->addWidget(port_label);
	port_layout->addWidget(port_edit);
	QVBoxLayout *top_left_layout = new QVBoxLayout;
	top_left_layout->addLayout(ip_layout);
	top_left_layout->addLayout(port_layout);

	QPushButton *btn = new QPushButton;
	btn->setText("confirm");
	btn->setFixedSize(100, 60);
	QVBoxLayout *top_right_layout = new QVBoxLayout;
	top_right_layout->addWidget(btn);

	QHBoxLayout *top_layout = new QHBoxLayout;
	top_layout->addLayout(top_left_layout);
	top_layout->addLayout(top_right_layout);

	
	//QVBoxLayout *layout = new QVBoxLayout;
	this->setLayout(top_layout);
}
