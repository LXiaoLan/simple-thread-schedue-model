/*
 * =====================================================================================
 *
 *       Filename:  createDialog.cpp
 *
 *    Description:  在窗口的按钮槽里实现创建一个对话框
 *
 *        Version:  1.0
 *        Created:  2013年05月08日 21时20分03秒
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  leiyu, leiyujike1107@gmail.com
 *        Company:  Class 1107 of Computer Science and Technology
 *
 * =====================================================================================
 */

#include <QtGui>
#include <QMessageBox>
#include "mainwindow.h"
#include "createDialog.h"

createDialog0::createDialog0(QWidget *parent) : QDialog(parent)
{
	
	        this->setStyleSheet("background-color:black;");
	        num = QString(QLatin1String(str_num[0]));
        	thread_num = QString(QLatin1String(str_thread[0]));

        	showNumLabel = new QLabel(tr("<font color=\"green\">线程数</font>"));
        	NumEdit = new QLabel(this);
        	showIdLabel = new QLabel(tr("<font color=\"green\">线程ID</font>"));
        	IdEdit = new QTextEdit;
        	
        	update_thread();

        	closeButton = new QPushButton(tr("退出"));

        	connect(closeButton, SIGNAL(clicked()), this, SLOT(close()));

        	QHBoxLayout *topLayout = new QHBoxLayout;
	        topLayout->addWidget(showNumLabel);
        	topLayout->addWidget(NumEdit);
        	topLayout->addWidget(closeButton);

        	QHBoxLayout *bottomLayout = new QHBoxLayout;
        	bottomLayout->addWidget(showIdLabel);
        	bottomLayout->addWidget(IdEdit);

        	QVBoxLayout *mainLayout = new QVBoxLayout;
        	mainLayout->addLayout(topLayout);
        	mainLayout->addLayout(bottomLayout);
         	setLayout(mainLayout);

        	setWindowTitle(tr("显示线程"));
        	//返回一个窗口部件的理想大小
        	setFixedHeight(sizeHint().height());

		timer = new QTimer(this);
	     	connect(timer, SIGNAL(timeout()), this, SLOT(update_thread()));
	        timer->start(1000);
	
}

createDialog0::~createDialog0()
{
	timer->stop();
}

void createDialog0::update_thread()
{
		num = QString(QLatin1String(str_num[0]));
        	thread_num = QString(QLatin1String(str_thread[0]));

        	QString num = "<font color=\"green\">";
        	num += str_num[0];
        	num += "</font>";
        	NumEdit->setText(num);
        	
        	QString id = "<font color=\"green\">";
        	id += str_thread[0];
        	id += "</font>";
        	id.replace(QString("\n"), QString("<br>"));     //将"\n"转换为<br>
        	IdEdit->setText(id);
}

createDialog1::createDialog1(QWidget *parent) : QDialog(parent)
{
        this->setStyleSheet("background-color:black;");
	
		num = QString(QLatin1String(str_num[1]));
         	thread_num = QString(QLatin1String(str_thread[1]));
         	
         	showNumLabel = new QLabel(tr("<font color=\"green\">线程数</font>"));
        	NumEdit = new QLabel(this);
        	showIdLabel = new QLabel(tr("<font color=\"green\">线程ID</font>"));
        	IdEdit = new QTextEdit;

                update_thread(); 

        	closeButton = new QPushButton(tr("退出"));

        	connect(closeButton, SIGNAL(clicked()), this, SLOT(close()));

        	QHBoxLayout *topLayout = new QHBoxLayout;
        	topLayout->addWidget(showNumLabel);
        	topLayout->addWidget(NumEdit);
        	topLayout->addWidget(closeButton);

        	QHBoxLayout *bottomLayout = new QHBoxLayout;
         	bottomLayout->addWidget(showIdLabel);
        	bottomLayout->addWidget(IdEdit);

        	QVBoxLayout *mainLayout = new QVBoxLayout;
        	mainLayout->addLayout(topLayout);
        	mainLayout->addLayout(bottomLayout);
        	setLayout(mainLayout);

        	setWindowTitle(tr("显示线程"));
         	//返回一个窗口部件的理想大小
        	setFixedHeight(sizeHint().height());

	    	QTimer *timer = new QTimer(this);
		connect(timer, SIGNAL(timeout()), this, SLOT(update_thread()));
		timer->start(1000);
}

createDialog1::~createDialog1()
{
	timer->stop();
}

void createDialog1::update_thread()
{
		num = QString(QLatin1String(str_num[1]));
        	thread_num = QString(QLatin1String(str_thread[1]));

        	QString num = "<font color=\"green\">";
        	num += str_num[1];
        	num += "</font>";
        	NumEdit->setText(num);
        	
        	QString id = "<font color=\"green\">";
        	id += str_thread[1];
        	id += "</font>";
        	id.replace(QString("\n"), QString("<br>"));
        	IdEdit->setText(id);
}

createDialog2::createDialog2(QWidget *parent) : QDialog(parent)
{
        this->setStyleSheet("background-color:black;");
		num = QString(QLatin1String(str_num[2]));
        	thread_num = QString(QLatin1String(str_thread[2]));

        	showNumLabel = new QLabel(tr("<font color=\"green\">线程数</font>"));
        	NumEdit = new QLabel(this);
        	showIdLabel = new QLabel(tr("<font color=\"green\">线程ID</font>"));
        	IdEdit = new QTextEdit;

            update_thread(); 

        	closeButton = new QPushButton(tr("退出"));

        	connect(closeButton, SIGNAL(clicked()), this, SLOT(close()));
 
        	QHBoxLayout *topLayout = new QHBoxLayout;
        	topLayout->addWidget(showNumLabel);
        	topLayout->addWidget(NumEdit);
        	topLayout->addWidget(closeButton);

        	QHBoxLayout *bottomLayout = new QHBoxLayout;
        	bottomLayout->addWidget(showIdLabel);
        	bottomLayout->addWidget(IdEdit);

        	QVBoxLayout *mainLayout = new QVBoxLayout;
        	mainLayout->addLayout(topLayout);
         	mainLayout->addLayout(bottomLayout);
        	setLayout(mainLayout);

        	setWindowTitle(tr("显示线程"));
        	//返回一个窗口部件的理想大小
        	setFixedHeight(sizeHint().height());

	        QTimer *timer = new QTimer(this);
	        connect(timer, SIGNAL(timeout()), this, SLOT(update_thread()));
	        timer->start(1000);
}

createDialog2::~createDialog2()
{
	timer->stop();
}

void createDialog2::update_thread()
{
		num = QString(QLatin1String(str_num[2]));
        	thread_num = QString(QLatin1String(str_thread[2]));

        	QString num = "<font color=\"green\">";
        	num += str_num[2];
        	num += "</font>";
        	NumEdit->setText(num);
        	
        	QString id = "<font color=\"green\">";
        	id += str_thread[2];
        	id += "</font>";
        	id.replace(QString("\n"), QString("<br>"));
        	IdEdit->setText(id);
}


createDialog3::createDialog3(QWidget *parent) : QDialog(parent)
{
        this->setStyleSheet("background-color:black;");
		num = QString(QLatin1String(str_num[3]));
         	thread_num = QString(QLatin1String(str_thread[3]));
         	
		showNumLabel = new QLabel(tr("<font color=\"green\">线程数</font>"));
        	NumEdit = new QLabel(this);
        	showIdLabel = new QLabel(tr("<font color=\"green\">线程ID</font>"));
        	IdEdit = new QTextEdit;

            update_thread(); 

		closeButton = new QPushButton(tr("退出"));

		connect(closeButton, SIGNAL(clicked()), this, SLOT(close()));

		QHBoxLayout *topLayout = new QHBoxLayout;
		topLayout->addWidget(showNumLabel);
		topLayout->addWidget(NumEdit);
		topLayout->addWidget(closeButton);

		QHBoxLayout *bottomLayout = new QHBoxLayout;
		bottomLayout->addWidget(showIdLabel);
		bottomLayout->addWidget(IdEdit);

		QVBoxLayout *mainLayout = new QVBoxLayout;
		mainLayout->addLayout(topLayout);
		mainLayout->addLayout(bottomLayout);
		setLayout(mainLayout);

		setWindowTitle(tr("显示线程"));
		//返回一个窗口部件的理想大小
		setFixedHeight(sizeHint().height());

		QTimer *timer = new QTimer(this);
		connect(timer, SIGNAL(timeout()), this, SLOT(update_thread()));
		timer->start(1000);
}

createDialog3::~createDialog3()
{
	timer->stop();
}

void createDialog3::update_thread()
{
		num = QString(QLatin1String(str_num[3]));
        	thread_num = QString(QLatin1String(str_thread[3]));

        	QString num = "<font color=\"green\">";
        	num += str_num[3];
        	num += "</font>";
        	NumEdit->setText(num);
        	
        	QString id = "<font color=\"green\">";
        	id += str_thread[3];
        	id += "</font>";
        	id.replace(QString("\n"), QString("<br>"));
        	IdEdit->setText(id);
}

createDialog4::createDialog4(QWidget *parent) : QDialog(parent)
{
        this->setStyleSheet("background-color:black;");
		num = QString(QLatin1String(str_num[4]));
	        thread_num = QString(QLatin1String(str_thread[4]));
	        
		showNumLabel = new QLabel(tr("<font color=\"green\">线程数</font>"));
        	NumEdit = new QLabel(this);
        	showIdLabel = new QLabel(tr("<font color=\"green\">线程ID</font>"));
        	IdEdit = new QTextEdit;

            update_thread(); 

		closeButton = new QPushButton(tr("退出"));

		connect(closeButton, SIGNAL(clicked()), this, SLOT(close()));

		QHBoxLayout *topLayout = new QHBoxLayout;
		topLayout->addWidget(showNumLabel);
		topLayout->addWidget(NumEdit);
		topLayout->addWidget(closeButton);

		QHBoxLayout *bottomLayout = new QHBoxLayout;
		bottomLayout->addWidget(showIdLabel);
		bottomLayout->addWidget(IdEdit);

		QVBoxLayout *mainLayout = new QVBoxLayout;
		mainLayout->addLayout(topLayout);
		mainLayout->addLayout(bottomLayout);
		setLayout(mainLayout);

		setWindowTitle(tr("显示线程"));
		//返回一个窗口部件的理想大小
		setFixedHeight(sizeHint().height());
		
		QTimer *timer = new QTimer(this);
		connect(timer, SIGNAL(timeout()), this, SLOT(update_thread()));
		timer->start(1000);
}

createDialog4::~createDialog4()
{
	timer->stop();
}

void createDialog4::update_thread()
{
		num = QString(QLatin1String(str_num[4]));
        	thread_num = QString(QLatin1String(str_thread[4]));

        	QString num = "<font color=\"green\">";
        	num += str_num[4];
        	num += "</font>";
        	NumEdit->setText(num);
        	
        	QString id = "<font color=\"green\">";
        	id += str_thread[4];
        	id += "</font>";
        	id.replace(QString("\n"), QString("<br>"));
        	IdEdit->setText(id);
}

createDialog5::createDialog5(QWidget *parent) : QDialog(parent)
{
        this->setStyleSheet("background-color:black;");
		num = QString(QLatin1String(str_num[5]));
         	thread_num = QString(QLatin1String(str_thread[5]));
         	
		showNumLabel = new QLabel(tr("<font color=\"green\">线程数</font>"));
        	NumEdit = new QLabel(this);
        	showIdLabel = new QLabel(tr("<font color=\"green\">线程ID</font>"));
        	IdEdit = new QTextEdit;

            update_thread(); 

		closeButton = new QPushButton(tr("退出"));

		connect(closeButton, SIGNAL(clicked()), this, SLOT(close()));

		QHBoxLayout *topLayout = new QHBoxLayout;
		topLayout->addWidget(showNumLabel);
		topLayout->addWidget(NumEdit);
		topLayout->addWidget(closeButton);

		QHBoxLayout *bottomLayout = new QHBoxLayout;
		bottomLayout->addWidget(showIdLabel);
		bottomLayout->addWidget(IdEdit);

		QVBoxLayout *mainLayout = new QVBoxLayout;
		mainLayout->addLayout(topLayout);
		mainLayout->addLayout(bottomLayout);
		setLayout(mainLayout);

		setWindowTitle(tr("显示线程"));
		//返回一个窗口部件的理想大小
		setFixedHeight(sizeHint().height());
		
		QTimer *timer = new QTimer(this);
		connect(timer, SIGNAL(timeout()), this, SLOT(update_thread()));
		timer->start(1000);
}

createDialog5::~createDialog5()
{
	timer->stop();
}

void createDialog5::update_thread()
{
		num = QString(QLatin1String(str_num[5]));
        	thread_num = QString(QLatin1String(str_thread[5]));

        	QString num = "<font color=\"green\">";
        	num += str_num[5];
        	num += "</font>";
        	NumEdit->setText(num);
        	
        	QString id = "<font color=\"green\">";
        	id += str_thread[5];
        	id += "</font>";
        	id.replace(QString("\n"), QString("<br>"));
        	IdEdit->setText(id);
}

createDialog6::createDialog6(QWidget *parent) : QDialog(parent)
{
        this->setStyleSheet("background-color:black;");
		num = QString(QLatin1String(str_num[6]));
        	thread_num = QString(QLatin1String(str_thread[6]));
        	
		showNumLabel = new QLabel(tr("<font color=\"green\">线程数</font>"));
        	NumEdit = new QLabel(this);
        	showIdLabel = new QLabel(tr("<font color=\"green\">线程ID</font>"));
        	IdEdit = new QTextEdit;

            update_thread(); 

		closeButton = new QPushButton(tr("退出"));

		connect(closeButton, SIGNAL(clicked()), this, SLOT(close()));

		QHBoxLayout *topLayout = new QHBoxLayout;
		topLayout->addWidget(showNumLabel);
		topLayout->addWidget(NumEdit);
		topLayout->addWidget(closeButton);

		QHBoxLayout *bottomLayout = new QHBoxLayout;
		bottomLayout->addWidget(showIdLabel);
		bottomLayout->addWidget(IdEdit);

		QVBoxLayout *mainLayout = new QVBoxLayout;
		mainLayout->addLayout(topLayout);
		mainLayout->addLayout(bottomLayout);
		setLayout(mainLayout);

		setWindowTitle(tr("显示线程"));
		//返回一个窗口部件的理想大小
		setFixedHeight(sizeHint().height());
	
		QTimer *timer = new QTimer(this);
		connect(timer, SIGNAL(timeout()), this, SLOT(update_thread()));
		timer->start(1000);
}

createDialog6::~createDialog6()
{
	timer->stop();
}

void createDialog6::update_thread()
{
		num = QString(QLatin1String(str_num[6]));
        	thread_num = QString(QLatin1String(str_thread[6]));

        	QString num = "<font color=\"green\">";
        	num += str_num[6];
        	num += "</font>";
        	NumEdit->setText(num);
        	
        	QString id = "<font color=\"green\">";
        	id += str_thread[6];
        	id += "</font>";
        	id.replace(QString("\n"), QString("<br>"));
        	IdEdit->setText(id);
}

createDialog7::createDialog7(QWidget *parent) : QDialog(parent)
{
        this->setStyleSheet("background-color:black;");
		num = QString(QLatin1String(str_num[7]));
        	thread_num = QString(QLatin1String(str_thread[7]));
        	
		showNumLabel = new QLabel(tr("<font color=\"green\">线程数</font>"));
        	NumEdit = new QLabel(this);
        	showIdLabel = new QLabel(tr("<font color=\"green\">线程ID</font>"));
        	IdEdit = new QTextEdit;

            update_thread(); 

		closeButton = new QPushButton(tr("退出"));

		connect(closeButton, SIGNAL(clicked()), this, SLOT(close()));

		QHBoxLayout *topLayout = new QHBoxLayout;
		topLayout->addWidget(showNumLabel);
		topLayout->addWidget(NumEdit);
		topLayout->addWidget(closeButton);

		QHBoxLayout *bottomLayout = new QHBoxLayout;
		bottomLayout->addWidget(showIdLabel);
		bottomLayout->addWidget(IdEdit);

		QVBoxLayout *mainLayout = new QVBoxLayout;
		mainLayout->addLayout(topLayout);
		mainLayout->addLayout(bottomLayout);
		setLayout(mainLayout);

		setWindowTitle(tr("显示线程"));
		//返回一个窗口部件的理想大小
		setFixedHeight(sizeHint().height());
		
		QTimer *timer = new QTimer(this);
		connect(timer, SIGNAL(timeout()), this, SLOT(update_thread()));
		timer->start(1000);
}

createDialog7::~createDialog7()
{
	timer->stop();
}

void createDialog7::update_thread()
{
		num = QString(QLatin1String(str_num[7]));
        	thread_num = QString(QLatin1String(str_thread[7]));

        	QString num = "<font color=\"green\">";
        	num += str_num[7];
        	num += "</font>";
        	NumEdit->setText(num);
        	
        	QString id = "<font color=\"green\">";
        	id += str_thread[7];
        	id += "</font>";
        	id.replace(QString("\n"), QString("<br>"));
        	IdEdit->setText(id);
}

createDialog8::createDialog8(QWidget *parent) : QDialog(parent)
{
        this->setStyleSheet("background-color:black;");
		num = QString(QLatin1String(str_num[8]));
         	thread_num = QString(QLatin1String(str_thread[8]));
         	
		showNumLabel = new QLabel(tr("<font color=\"green\">线程数</font>"));
        	NumEdit = new QLabel(this);
        	showIdLabel = new QLabel(tr("<font color=\"green\">线程ID</font>"));
        	IdEdit = new QTextEdit;

            update_thread(); 

		closeButton = new QPushButton(tr("退出"));

		connect(closeButton, SIGNAL(clicked()), this, SLOT(close()));

		QHBoxLayout *topLayout = new QHBoxLayout;
		topLayout->addWidget(showNumLabel);
		topLayout->addWidget(NumEdit);
		topLayout->addWidget(closeButton);

		QHBoxLayout *bottomLayout = new QHBoxLayout;
		bottomLayout->addWidget(showIdLabel);
		bottomLayout->addWidget(IdEdit);

		QVBoxLayout *mainLayout = new QVBoxLayout;
		mainLayout->addLayout(topLayout);
		mainLayout->addLayout(bottomLayout);
		setLayout(mainLayout);

		setWindowTitle(tr("显示线程"));
		//返回一个窗口部件的理想大小
		setFixedHeight(sizeHint().height());
	
		QTimer *timer = new QTimer(this);
	        connect(timer, SIGNAL(timeout()), this, SLOT(update_thread()));
	        timer->start(1000);
}

createDialog8::~createDialog8()
{
	timer->stop();
}

void createDialog8::update_thread()
{
		num = QString(QLatin1String(str_num[8]));
        	thread_num = QString(QLatin1String(str_thread[8]));

        	QString num = "<font color=\"green\">";
        	num += str_num[8];
        	num += "</font>";
        	NumEdit->setText(num);
        	
        	QString id = "<font color=\"green\">";
        	id += str_thread[8];
        	id += "</font>";
        	id.replace(QString("\n"), QString("<br>"));
        	IdEdit->setText(id);
}

createDialog9::createDialog9(QWidget *parent) : QDialog(parent)
{
        this->setStyleSheet("background-color:black;");
		num = QString(QLatin1String(str_num[9]));
        	thread_num = QString(QLatin1String(str_thread[9]));
        	
		showNumLabel = new QLabel(tr("<font color=\"green\">线程数</font>"));
        	NumEdit = new QLabel(this);
        	showIdLabel = new QLabel(tr("<font color=\"green\">线程ID</font>"));
        	IdEdit = new QTextEdit;

            update_thread(); 
		closeButton = new QPushButton(tr("退出"));

		connect(closeButton, SIGNAL(clicked()), this, SLOT(close()));

		QHBoxLayout *topLayout = new QHBoxLayout;
		topLayout->addWidget(showNumLabel);
		topLayout->addWidget(NumEdit);
		topLayout->addWidget(closeButton);

		QHBoxLayout *bottomLayout = new QHBoxLayout;
		bottomLayout->addWidget(showIdLabel);
		bottomLayout->addWidget(IdEdit);

		QVBoxLayout *mainLayout = new QVBoxLayout;
		mainLayout->addLayout(topLayout);
		mainLayout->addLayout(bottomLayout);
		setLayout(mainLayout);

		setWindowTitle(tr("显示线程"));
		//返回一个窗口部件的理想大小
		setFixedHeight(sizeHint().height());
		
		QTimer *timer = new QTimer(this);
		connect(timer, SIGNAL(timeout()), this, SLOT(update_thread()));
		timer->start(1000);
}

createDialog9::~createDialog9()
{
	timer->stop();
}

void createDialog9::update_thread()
{
		num = QString(QLatin1String(str_num[9]));
        	thread_num = QString(QLatin1String(str_thread[9]));

        	QString num = "<font color=\"green\">";
        	num += str_num[9];
        	num += "</font>";
        	NumEdit->setText(num);
        	
        	QString id = "<font color=\"green\">";
        	id += str_thread[9];
        	id += "</font>";
        	id.replace(QString("\n"), QString("<br>"));
        	IdEdit->setText(id);
}

createDialog10::createDialog10(QWidget *parent) : QDialog(parent)
{
        this->setStyleSheet("background-color:black;");
		num = QString(QLatin1String(str_num[10]));
	        thread_num = QString(QLatin1String(str_thread[10]));
	        
		showNumLabel = new QLabel(tr("<font color=\"green\">线程数</font>"));
        	NumEdit = new QLabel(this);
        	showIdLabel = new QLabel(tr("<font color=\"green\">线程ID</font>"));
        	IdEdit = new QTextEdit;

            update_thread(); 

		closeButton = new QPushButton(tr("退出"));

		connect(closeButton, SIGNAL(clicked()), this, SLOT(close()));

		QHBoxLayout *topLayout = new QHBoxLayout;
		topLayout->addWidget(showNumLabel);
		topLayout->addWidget(NumEdit);
		topLayout->addWidget(closeButton);

		QHBoxLayout *bottomLayout = new QHBoxLayout;
		bottomLayout->addWidget(showIdLabel);
		bottomLayout->addWidget(IdEdit);

		QVBoxLayout *mainLayout = new QVBoxLayout;
		mainLayout->addLayout(topLayout);
		mainLayout->addLayout(bottomLayout);
		setLayout(mainLayout);

		setWindowTitle(tr("显示线程"));
		//返回一个窗口部件的理想大小
		setFixedHeight(sizeHint().height());
		
		QTimer *timer = new QTimer(this);
		connect(timer, SIGNAL(timeout()), this, SLOT(update_thread()));
	        timer->start(1000);
}

createDialog10::~createDialog10()
{
	timer->stop();
}

void createDialog10::update_thread()
{
		num = QString(QLatin1String(str_num[10]));
        	thread_num = QString(QLatin1String(str_thread[10]));

        	QString num = "<font color=\"green\">";
        	num += str_num[10];
        	num += "</font>";
        	NumEdit->setText(num);
        	
        	QString id = "<font color=\"green\">";
        	id += str_thread[10];
        	id += "</font>";
        	id.replace(QString("\n"), QString("<br>"));
        	IdEdit->setText(id);
}

createDialog11::createDialog11(QWidget *parent) : QDialog(parent)
{
        this->setStyleSheet("background-color:black;");  
		num = QString(QLatin1String(str_num[11]));
                thread_num = QString(QLatin1String(str_thread[11]));
                
		showNumLabel = new QLabel(tr("<font color=\"green\">线程数</font>"));
        	NumEdit = new QLabel(this);
        	showIdLabel = new QLabel(tr("<font color=\"green\">线程ID</font>"));
        	IdEdit = new QTextEdit;

            update_thread(); 

		closeButton = new QPushButton(tr("退出"));

		connect(closeButton, SIGNAL(clicked()), this, SLOT(close()));

		QHBoxLayout *topLayout = new QHBoxLayout;
		topLayout->addWidget(showNumLabel);
		topLayout->addWidget(NumEdit);
		topLayout->addWidget(closeButton);

		QHBoxLayout *bottomLayout = new QHBoxLayout;
		bottomLayout->addWidget(showIdLabel);
		bottomLayout->addWidget(IdEdit);

		QVBoxLayout *mainLayout = new QVBoxLayout;
		mainLayout->addLayout(topLayout);
		mainLayout->addLayout(bottomLayout);
		setLayout(mainLayout);

		setWindowTitle(tr("显示线程"));
		//返回一个窗口部件的理想大小
		setFixedHeight(sizeHint().height());
		
		QTimer *timer = new QTimer(this);
		connect(timer, SIGNAL(timeout()), this, SLOT(update_thread()));
		timer->start(1000);
}

createDialog11::~createDialog11()
{
	timer->stop();
}

void createDialog11::update_thread()
{
		num = QString(QLatin1String(str_num[11]));
        	thread_num = QString(QLatin1String(str_thread[11]));

        	QString num = "<font color=\"green\">";
        	num += str_num[11];
        	num += "</font>";
        	NumEdit->setText(num);
        	
        	QString id = "<font color=\"green\">";
        	id += str_thread[11];
        	id += "</font>";
        	id.replace(QString("\n"), QString("<br>"));
        	IdEdit->setText(id);
}

createDialog12::createDialog12(QWidget *parent) : QDialog(parent)
{
        this->setStyleSheet("background-color:black;");
		num = QString(QLatin1String(str_num[12]));
        	thread_num = QString(QLatin1String(str_thread[12]));
        	
		showNumLabel = new QLabel(tr("<font color=\"green\">线程数</font>"));
        	NumEdit = new QLabel(this);
        	showIdLabel = new QLabel(tr("<font color=\"green\">线程ID</font>"));
        	IdEdit = new QTextEdit;

            update_thread(); 

		closeButton = new QPushButton(tr("退出"));

		connect(closeButton, SIGNAL(clicked()), this, SLOT(close()));

		QHBoxLayout *topLayout = new QHBoxLayout;
		topLayout->addWidget(showNumLabel);
		topLayout->addWidget(NumEdit);
		topLayout->addWidget(closeButton);

		QHBoxLayout *bottomLayout = new QHBoxLayout;
		bottomLayout->addWidget(showIdLabel);
		bottomLayout->addWidget(IdEdit);

		QVBoxLayout *mainLayout = new QVBoxLayout;
		mainLayout->addLayout(topLayout);
		mainLayout->addLayout(bottomLayout);
		setLayout(mainLayout);

		setWindowTitle(tr("显示线程"));
		//返回一个窗口部件的理想大小
		setFixedHeight(sizeHint().height());
		
		QTimer *timer = new QTimer(this);
		connect(timer, SIGNAL(timeout()), this, SLOT(update_thread()));
		timer->start(1000);
}

createDialog12::~createDialog12()
{
	timer->stop();
}

void createDialog12::update_thread()
{
		num = QString(QLatin1String(str_num[12]));
        	thread_num = QString(QLatin1String(str_thread[12]));

        	QString num = "<font color=\"green\">";
        	num += str_num[12];
        	num += "</font>";
        	NumEdit->setText(num);
        	
        	QString id = "<font color=\"green\">";
        	id += str_thread[12];
        	id += "</font>";
        	id.replace(QString("\n"), QString("<br>"));
        	IdEdit->setText(id);
}

createDialog13::createDialog13(QWidget *parent) : QDialog(parent)
{
        this->setStyleSheet("background-color:black;");
 		num = QString(QLatin1String(str_num[13]));
        	thread_num = QString(QLatin1String(str_thread[13]));
        	
  		showNumLabel = new QLabel(tr("<font color=\"green\">线程数</font>"));
        	NumEdit = new QLabel(this);
        	showIdLabel = new QLabel(tr("<font color=\"green\">线程ID</font>"));
        	IdEdit = new QTextEdit;

            update_thread(); 

		closeButton = new QPushButton(tr("退出"));

		connect(closeButton, SIGNAL(clicked()), this, SLOT(close()));

		QHBoxLayout *topLayout = new QHBoxLayout;
		topLayout->addWidget(showNumLabel);
		topLayout->addWidget(NumEdit);
		topLayout->addWidget(closeButton);

		QHBoxLayout *bottomLayout = new QHBoxLayout;
		bottomLayout->addWidget(showIdLabel);
		bottomLayout->addWidget(IdEdit);

		QVBoxLayout *mainLayout = new QVBoxLayout;
		mainLayout->addLayout(topLayout);
		mainLayout->addLayout(bottomLayout);
		setLayout(mainLayout);

		setWindowTitle(tr("显示线程"));
		//返回一个窗口部件的理想大小
		setFixedHeight(sizeHint().height());
		
		QTimer *timer = new QTimer(this);
		connect(timer, SIGNAL(timeout()), this, SLOT(update_thread()));
		timer->start(1000);
}

createDialog13::~createDialog13()
{
	timer->stop();
}

void createDialog13::update_thread()
{
		num = QString(QLatin1String(str_num[13]));
        	thread_num = QString(QLatin1String(str_thread[13]));

        	QString num = "<font color=\"green\">";
        	num += str_num[13];
        	num += "</font>";
        	NumEdit->setText(num);
        	
        	QString id = "<font color=\"green\">";
        	id += str_thread[13];
        	id += "</font>";
        	id.replace(QString("\n"), QString("<br>"));
        	IdEdit->setText(id);
}

createDialog14::createDialog14(QWidget *parent) : QDialog(parent)
{
        this->setStyleSheet("background-color:black;");
		num = QString(QLatin1String(str_num[14]));
        	thread_num = QString(QLatin1String(str_thread[14]));
        	
		showNumLabel = new QLabel(tr("<font color=\"green\">线程数</font>"));
        	NumEdit = new QLabel(this);
        	showIdLabel = new QLabel(tr("<font color=\"green\">线程ID</font>"));
        	IdEdit = new QTextEdit;

            update_thread(); 
		closeButton = new QPushButton(tr("退出"));

		connect(closeButton, SIGNAL(clicked()), this, SLOT(close()));

		QHBoxLayout *topLayout = new QHBoxLayout;
		topLayout->addWidget(showNumLabel);
		topLayout->addWidget(NumEdit);
		topLayout->addWidget(closeButton);

		QHBoxLayout *bottomLayout = new QHBoxLayout;
		bottomLayout->addWidget(showIdLabel);
		bottomLayout->addWidget(IdEdit);

		QVBoxLayout *mainLayout = new QVBoxLayout;
		mainLayout->addLayout(topLayout);
		mainLayout->addLayout(bottomLayout);
		setLayout(mainLayout);

		setWindowTitle(tr("显示线程"));
		//返回一个窗口部件的理想大小
		setFixedHeight(sizeHint().height());
		
		QTimer *timer = new QTimer(this);
		connect(timer, SIGNAL(timeout()), this, SLOT(update_thread()));
		timer->start(1000);
}

createDialog14::~createDialog14()
{
	timer->stop();
}

void createDialog14::update_thread()
{
		num = QString(QLatin1String(str_num[14]));
        	thread_num = QString(QLatin1String(str_thread[14]));

        	QString num = "<font color=\"green\">";
        	num += str_num[14];
        	num += "</font>";
        	NumEdit->setText(num);
        	
        	QString id = "<font color=\"green\">";
        	id += str_thread[14];
        	id += "</font>";
        	id.replace(QString("\n"), QString("<br>"));
        	IdEdit->setText(id);
}

createDialog15::createDialog15(QWidget *parent) : QDialog(parent)
{
        this->setStyleSheet("background-color:black;");
		num = QString(QLatin1String(str_num[15]));
        	thread_num = QString(QLatin1String(str_thread[15]));
        	
		showNumLabel = new QLabel(tr("<font color=\"green\">线程数</font>"));
        	NumEdit = new QLabel(this);
        	showIdLabel = new QLabel(tr("<font color=\"green\">线程ID</font>"));
        	IdEdit = new QTextEdit;

            update_thread(); 

		closeButton = new QPushButton(tr("退出"));

		connect(closeButton, SIGNAL(clicked()), this, SLOT(close()));

		QHBoxLayout *topLayout = new QHBoxLayout;
		topLayout->addWidget(showNumLabel);
		topLayout->addWidget(NumEdit);
		topLayout->addWidget(closeButton);

		QHBoxLayout *bottomLayout = new QHBoxLayout;
		bottomLayout->addWidget(showIdLabel);
		bottomLayout->addWidget(IdEdit);

		QVBoxLayout *mainLayout = new QVBoxLayout;
		mainLayout->addLayout(topLayout);
		mainLayout->addLayout(bottomLayout);
		setLayout(mainLayout);

		setWindowTitle(tr("显示线程"));
		//返回一个窗口部件的理想大小
		setFixedHeight(sizeHint().height());
		
		QTimer *timer = new QTimer(this);
		connect(timer, SIGNAL(timeout()), this, SLOT(update_thread()));
		timer->start(1000);
}

createDialog15::~createDialog15()
{
	timer->stop();
}

void createDialog15::update_thread()
{
		num = QString(QLatin1String(str_num[15]));
        	thread_num = QString(QLatin1String(str_thread[15]));

        	QString num = "<font color=\"green\">";
        	num += str_num[15];
        	num += "</font>";
        	NumEdit->setText(num);
        	
        	QString id = "<font color=\"green\">";
        	id += str_thread[15];
        	id += "</font>";
        	id.replace(QString("\n"), QString("<br>"));
        	IdEdit->setText(id);
}
