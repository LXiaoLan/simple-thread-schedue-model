/*
 * =====================================================================================
 *
 *       Filename:  mainwindow.cpp
 *
 *    Description:  Qt实现一个窗口
 *        Version:  1.0
 *        Created:  2013年05月05日 15时04分21秒
 *       Revision:  none
 *       Compiler:  gcc
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


mainWindow::mainWindow()
{

	//设置窗口名
	setWindowTitle(tr("线程调度模型"));
	setObjectName("window");

	//设置窗口大小
	resize(400, 400);

	//插入背景图片
	setStyleSheet("QMainWindow#window{border-image:url(images/background.png)}");     

	//创建按钮
        threadButton0 = new QPushButton();
	//使按钮透明
	threadButton0->setFlat(true);

	threadButton1 = new QPushButton();
	threadButton1->setFlat(true);

	threadButton2 = new QPushButton();
	threadButton2->setFlat(true);

	threadButton3 = new QPushButton();
	threadButton3->setFlat(true);

	threadButton4 = new QPushButton();
	threadButton4->setFlat(true);

	threadButton5 = new QPushButton();
	threadButton5->setFlat(true);
	
	threadButton6 = new QPushButton();
	threadButton6->setFlat(true);
	
	threadButton7 = new QPushButton();
	threadButton7->setFlat(true);

	threadButton8 = new QPushButton();
	threadButton8->setFlat(true);
	
	threadButton9 = new QPushButton();
	threadButton9->setFlat(true);

	threadButton10 = new QPushButton();
	threadButton10->setFlat(true);
	
	threadButton11 = new QPushButton();
	threadButton11->setFlat(true);
	
	threadButton12 = new QPushButton();
	threadButton12->setFlat(true);
	
	threadButton13 = new QPushButton();
	threadButton13->setFlat(true);
	
	threadButton14 = new QPushButton();
	threadButton14->setFlat(true);

	threadButton15 = new QPushButton();
	threadButton15->setFlat(true);

	widget = new QWidget(this);

	/*给按钮添加背景图片*/
	QIcon icon;
	QPixmap pixmap0("images/0.jpg");
	icon.addPixmap(pixmap0);
	threadButton0->setIcon(icon);
	threadButton0->setIconSize(QSize(40, 50));
	threadButton0->setMask(pixmap0.mask());

	QPixmap pixmap1("images/1.jpg");
	icon.addPixmap(pixmap1);
	threadButton1->setIcon(icon);
	threadButton1->setIconSize(QSize(40, 50));
	threadButton1->setMask(pixmap1.mask());

	QPixmap pixmap2("images/2.jpg");
	icon.addPixmap(pixmap2);
	threadButton2->setIcon(pixmap2);
	threadButton2->setIconSize(QSize(40, 50));
	threadButton2->setMask(pixmap2.mask());

	QPixmap pixmap3("images/3.jpg");
	icon.addPixmap(pixmap3);
	threadButton3->setIcon(pixmap3);
	threadButton3->setIconSize(QSize(40, 50));
	threadButton3->setMask(pixmap3.mask());

	QPixmap pixmap4("images/4.jpg");
	icon.addPixmap(pixmap4);
	threadButton4->setIcon(pixmap4);
	threadButton4->setIconSize(QSize(50, 50));
	threadButton4->setMask(pixmap4.mask());

	QPixmap pixmap5("images/5.jpg");
	icon.addPixmap(pixmap5);
	threadButton5->setIcon(pixmap5);
	threadButton5->setIconSize(QSize(50, 50));
	threadButton5->setMask(pixmap5.mask());

	QPixmap pixmap6("images/6.jpg");
	icon.addPixmap(pixmap6);
	threadButton6->setIcon(pixmap6);
	threadButton6->setIconSize(QSize(50, 50));
	threadButton6->setMask(pixmap6.mask());
	
	QPixmap pixmap7("images/7.jpg");
	icon.addPixmap(pixmap7);
	threadButton7->setIcon(pixmap7);
	threadButton7->setIconSize(QSize(50, 50));
	threadButton7->setMask(pixmap7.mask());

	QPixmap pixmap8("images/8.jpg");
	icon.addPixmap(pixmap8);
	threadButton8->setIcon(pixmap8);
	threadButton8->setIconSize(QSize(50, 50));
	threadButton8->setMask(pixmap8.mask());
	
	QPixmap pixmap9("images/9.jpg");
	icon.addPixmap(pixmap9);
	threadButton9->setIcon(pixmap9);
	threadButton9->setIconSize(QSize(50, 50));
	threadButton9->setMask(pixmap9.mask());

	QPixmap pixmap10("images/10.jpg");
	icon.addPixmap(pixmap10);
	threadButton10->setIcon(pixmap10);
	threadButton10->setIconSize(QSize(50, 50));
	threadButton10->setMask(pixmap10.mask());

	QPixmap pixmap11("images/11.jpg");
	icon.addPixmap(pixmap11);
	threadButton11->setIcon(pixmap11);
	threadButton11->setIconSize(QSize(50, 50));
	threadButton11->setMask(pixmap11.mask());

	QPixmap pixmap12("images/12.jpg");
	icon.addPixmap(pixmap12);
	threadButton12->setIcon(pixmap12);
	threadButton12->setIconSize(QSize(50, 50));
	threadButton12->setMask(pixmap12.mask());

	QPixmap pixmap13("images/13.jpg");
	icon.addPixmap(pixmap13);
	threadButton13->setIcon(pixmap13);
	threadButton13->setIconSize(QSize(50, 50));
	threadButton13->setMask(pixmap13.mask());

	QPixmap pixmap14("images/14.jpg");
	icon.addPixmap(pixmap14);
	threadButton14->setIcon(pixmap14);
	threadButton14->setIconSize(QSize(50, 50));
	threadButton14->setMask(pixmap14.mask());

	QPixmap pixmap15("images/15.jpg");
	icon.addPixmap(pixmap15);
	threadButton15->setIcon(pixmap15);
	threadButton15->setIconSize(QSize(50, 50));
	threadButton15->setMask(pixmap15.mask());

	/*建立联系*/
	connect(threadButton0, SIGNAL(clicked()), this, SLOT(createIdDialog0()));
	connect(threadButton1, SIGNAL(clicked()), this, SLOT(createIdDialog1()));
	connect(threadButton2, SIGNAL(clicked()), this, SLOT(createIdDialog2()));
	connect(threadButton3, SIGNAL(clicked()), this, SLOT(createIdDialog3()));
	connect(threadButton4, SIGNAL(clicked()), this, SLOT(createIdDialog4()));
	connect(threadButton5, SIGNAL(clicked()), this, SLOT(createIdDialog5()));
	connect(threadButton6, SIGNAL(clicked()), this, SLOT(createIdDialog6()));
	connect(threadButton7, SIGNAL(clicked()), this, SLOT(createIdDialog7()));
	connect(threadButton8, SIGNAL(clicked()), this, SLOT(createIdDialog8()));
	connect(threadButton9, SIGNAL(clicked()), this, SLOT(createIdDialog9()));
	connect(threadButton10, SIGNAL(clicked()), this, SLOT(createIdDialog10()));
	connect(threadButton11, SIGNAL(clicked()), this, SLOT(createIdDialog11()));
	connect(threadButton12, SIGNAL(clicked()), this, SLOT(createIdDialog12()));
	connect(threadButton13, SIGNAL(clicked()), this, SLOT(createIdDialog13()));
	connect(threadButton14, SIGNAL(clicked()), this, SLOT(createIdDialog14()));
	connect(threadButton15, SIGNAL(clicked()), this, SLOT(createIdDialog15()));

	/*网格布局管理器*/
	QGridLayout *layout = new QGridLayout();
	layout->addWidget(threadButton0, 0, 0, 1, 1);
	layout->addWidget(threadButton1, 0, 1, 1, 1);
	layout->addWidget(threadButton2, 0, 2, 1, 1);
	layout->addWidget(threadButton3, 0, 3, 1, 1);
	layout->addWidget(threadButton4, 1, 0, 1, 1);
	layout->addWidget(threadButton5, 1, 1, 1, 1);
	layout->addWidget(threadButton6, 1, 2, 1, 1);
	layout->addWidget(threadButton7, 1, 3, 1, 1);
	layout->addWidget(threadButton8, 2, 0, 1, 1);
	layout->addWidget(threadButton9, 2, 1, 1, 1);
	layout->addWidget(threadButton10, 2, 2, 1, 1);
	layout->addWidget(threadButton11, 2, 3, 1, 1);
	layout->addWidget(threadButton12, 3, 0, 1, 1);
	layout->addWidget(threadButton13, 3, 1, 1, 1);
	layout->addWidget(threadButton14, 3, 2, 1, 1);
	layout->addWidget(threadButton15, 3, 3, 1, 1);
	
	/*主窗口布局*/
	QVBoxLayout *mainLayout = new QVBoxLayout();
	
	/*定义一个QGroupBox容器对象，并将其布局方式设置为二维网格布局方式*/
	QGroupBox *gb = new QGroupBox();
	gb->setLayout(layout);
	mainLayout->addWidget(gb);
	widget->setLayout(mainLayout);
	setCentralWidget(widget);       //设置中央窗口部件
}

void mainWindow::createIdDialog0()
{
	createDialog0 *dialog0 = new createDialog0(this);
	dialog0->setModal(false);
	dialog0->show();
}

void mainWindow::createIdDialog1()
{
       createDialog1 *dialog1 = new createDialog1(this);
       dialog1->setModal(false);
       dialog1->show();

}

void mainWindow::createIdDialog2()
{
       createDialog2 *dialog2 = new createDialog2(this);
       dialog2->setModal(false);
       dialog2->show();
}

void mainWindow::createIdDialog3()
{
       createDialog3 *dialog3 = new createDialog3(this);
       dialog3->setModal(false);
       dialog3->show();
}

void mainWindow::createIdDialog4()
{
       createDialog4 *dialog4 = new createDialog4(this);
       dialog4->setModal(false);
       dialog4->show();
}

void mainWindow::createIdDialog5()
{
       createDialog5 *dialog5 = new createDialog5(this);
       dialog5->setModal(false);
       dialog5->show();
}

void mainWindow::createIdDialog6()
{
       createDialog6 *dialog6 = new createDialog6(this);
       dialog6->setModal(false);
       dialog6->show();
}

void mainWindow::createIdDialog7()
{
       createDialog7 *dialog7 = new createDialog7(this);
       dialog7->setModal(false);
       dialog7->show();
}

void mainWindow::createIdDialog8()
{
       createDialog8 *dialog8 = new createDialog8(this);
       dialog8->setModal(false);
       dialog8->show();
}

void mainWindow::createIdDialog9()
{
       createDialog9 *dialog9 = new createDialog9(this);
       dialog9->setModal(false);
       dialog9->show();
}

void mainWindow::createIdDialog10()
{
       createDialog10 *dialog10 = new createDialog10(this);
       dialog10->setModal(false);
       dialog10->show();
}

void mainWindow::createIdDialog11()
{
       createDialog11 *dialog11 = new createDialog11(this);
       dialog11->setModal(false);
       dialog11->show();
}

void mainWindow::createIdDialog12()
{
       createDialog12 *dialog12 = new createDialog12(this);
       dialog12->setModal(false);
       dialog12->show();
}


void mainWindow::createIdDialog13()
{
       createDialog13 *dialog13 = new createDialog13(this);
       dialog13->setModal(false);
       dialog13->show();
}


void mainWindow::createIdDialog14()
{
       createDialog14 *dialog14 = new createDialog14(this);
       dialog14->setModal(false);
       dialog14->show();
}


void mainWindow::createIdDialog15()
{
       createDialog15 *dialog15 = new createDialog15(this);
       dialog15->setModal(false);
       dialog15->show();
}
