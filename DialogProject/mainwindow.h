/*
 * =====================================================================================
 *
 *       Filename:  mainwindow.h
 *
 *    Description: QT中一个窗口的定义 
 *
 *        Version:  1.0
 *        Created:  2013年05月05日 14时58分39秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  leiyu, leiyujike1107@gmail.com
 *        Company:  Class 1107 of Computer Science and Technology
 *
 * =====================================================================================
 */
#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>

class QPushButton;    //前置声明
class QWidget;

class mainWindow : public QMainWindow
{
	Q_OBJECT
public:
	mainWindow( );

private slots:
	void createIdDialog0();
	void createIdDialog1();
	void createIdDialog2();
	void createIdDialog3();
	void createIdDialog4();
	void createIdDialog5();
	void createIdDialog6();
	void createIdDialog7();
	void createIdDialog8();
	void createIdDialog9();
	void createIdDialog10();
	void createIdDialog11();
	void createIdDialog12();
	void createIdDialog13();
	void createIdDialog14();
	void createIdDialog15();

private: 
        QPushButton *threadButton0;
	QPushButton *threadButton1;
	QPushButton *threadButton2;
	QPushButton *threadButton3;
	QPushButton *threadButton4;
	QPushButton *threadButton5;
	QPushButton *threadButton6;
	QPushButton *threadButton7;
	QPushButton *threadButton8;
	QPushButton *threadButton9;
	QPushButton *threadButton10;
	QPushButton *threadButton11;
	QPushButton *threadButton12;
	QPushButton *threadButton13;
	QPushButton *threadButton14;
	QPushButton *threadButton15;
	QWidget *widget;
};
#endif
