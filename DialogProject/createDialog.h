/*
 * =====================================================================================
 *
 *       Filename:  createDialog.h
 *
 *    Description:  创建对话框的函数声明
 *
 *        Version:  1.0
 *        Created:  2013年05月08日 21时22分47秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  leiyu, leiyujike1107@gmail.com
 *        Company:  Class 1107 of Computer Science and Technology
 *
 * =====================================================================================
 */

#ifndef CREATEDIALOG_H
#define CREATEDIALOG_H

#include <QDialog>

extern char str_num[16][5];
extern char str_thread[16][200];

/*对类的前置声明*/
class QLabel;
class QTimer;
class QLineEdit;
class QPushButton;
class QTextEdit;

class createDialog0 : public QDialog
{
	Q_OBJECT
public:
		//该类的构造函数
		createDialog0(QWidget *parent = 0);
		~createDialog0();
private slots:
	        void update_thread();

private:
		QPushButton *closeButton;
		QLabel *showNumLabel;
		QLabel *showIdLabel;
		QLabel *NumEdit;
		QTextEdit *IdEdit;
		QString num;
		QString thread_num;
		QTimer *timer;
};

class createDialog1 : public QDialog
{
	Q_OBJECT
public:
		//该类的构造函数
		createDialog1(QWidget *parent = 0);
		~createDialog1();
private slots:
	        void update_thread();
private:
		QPushButton *closeButton;
		QLabel *showNumLabel;
		QLabel *showIdLabel;
		QLabel *NumEdit;
		QTextEdit *IdEdit;
		QString num;
		QString thread_num;
		QTimer *timer;
};

class createDialog2 : public QDialog
{
	Q_OBJECT
public:
		//该类的构造函数
		createDialog2(QWidget *parent = 0);
		~createDialog2();
private slots:
	        void update_thread();
private:
		QPushButton *closeButton;
		QLabel *showNumLabel;
		QLabel *showIdLabel;
		QLabel *NumEdit;
		QTextEdit *IdEdit;
		QString num;
		QString thread_num;
		QTimer *timer;
};

class createDialog3 : public QDialog
{
	Q_OBJECT
public:
		//该类的构造函数
		createDialog3(QWidget *parent = 0);
		~createDialog3();
private slots:
	        void update_thread();
private:
		QPushButton *closeButton;
		QLabel *showNumLabel;
		QLabel *showIdLabel;
		QLabel *NumEdit;
		QTextEdit *IdEdit;
		QString num;
		QString thread_num;
		QTimer *timer;
};

class createDialog4 : public QDialog
{
	Q_OBJECT
public:
		//该类的构造函数
		createDialog4(QWidget *parent = 0);
		~createDialog4();
private slots:
	        void update_thread();
private:
		QPushButton *closeButton;
		QLabel *showNumLabel;
		QLabel *showIdLabel;
		QLabel *NumEdit;
		QTextEdit *IdEdit;
		QString num;
		QString thread_num;
		QTimer *timer;
};

class createDialog5 : public QDialog
{
	Q_OBJECT
public:
		//该类的构造函数
		createDialog5(QWidget *parent = 0);
		~createDialog5();
private slots:
	        void update_thread();
private:
		QPushButton *closeButton;
		QLabel *showNumLabel;
		QLabel *showIdLabel;
		QLabel *NumEdit;
		QTextEdit *IdEdit;
		QString num;
		QString thread_num;
		QTimer *timer;
};

class createDialog6 : public QDialog
{
	Q_OBJECT
public:
		//该类的构造函数
		createDialog6(QWidget *parent = 0);
		~createDialog6();
private slots:
	        void update_thread();
private:
		QPushButton *closeButton;
		QLabel *showNumLabel;
		QLabel *showIdLabel;
		QLabel *NumEdit;
		QTextEdit *IdEdit;
		QString num;
		QString thread_num;
		QTimer *timer;
};

class createDialog7 : public QDialog
{
	Q_OBJECT
public:
		//该类的构造函数
		createDialog7(QWidget *parent = 0);
		~createDialog7();
private slots:
	        void update_thread();
private:
		QPushButton *closeButton;
		QLabel *showNumLabel;
		QLabel *showIdLabel;
		QLabel *NumEdit;
		QTextEdit *IdEdit;
		QString num;
		QString thread_num;
		QTimer *timer;
};

class createDialog8 : public QDialog
{
	Q_OBJECT
public:
		//该类的构造函数
		createDialog8(QWidget *parent = 0);
		~createDialog8();
private slots:
	        void update_thread();
private:
		QPushButton *closeButton;
		QLabel *showNumLabel;
		QLabel *showIdLabel;
		QLabel *NumEdit;
		QTextEdit *IdEdit;
		QString num;
		QString thread_num;
		QTimer *timer;

};

class createDialog9 : public QDialog
{
	Q_OBJECT
public:
		//该类的构造函数
		createDialog9(QWidget *parent = 0);
		~createDialog9();
private slots:
	        void update_thread();
private:
		QPushButton *closeButton;
		QLabel *showNumLabel;
		QLabel *showIdLabel;
		QLabel *NumEdit;
		QTextEdit *IdEdit;
		QString num;
		QString thread_num;
        QTimer *timer;

};

class createDialog10 : public QDialog
{
	Q_OBJECT
public:
		//该类的构造函数
		createDialog10(QWidget *parent = 0);
		~createDialog10();
private slots:
	        void update_thread();
private:
		QPushButton *closeButton;
		QLabel *showNumLabel;
		QLabel *showIdLabel;
		QLabel *NumEdit;
		QTextEdit *IdEdit;
		QString num;
		QString thread_num;
		QTimer *timer;
};

class createDialog11 : public QDialog
{
	Q_OBJECT
public:
		//该类的构造函数
		createDialog11(QWidget *parent = 0);
		~createDialog11();
private slots:
	        void update_thread();
private:
		QPushButton *closeButton;
		QLabel *showNumLabel;
		QLabel *showIdLabel;
		QLabel *NumEdit;
		QTextEdit *IdEdit;
		QString num;
		QString thread_num;
		QTimer *timer;
};

class createDialog12 : public QDialog
{
	Q_OBJECT
public:
		//该类的构造函数
		createDialog12(QWidget *parent = 0);
		~createDialog12();
private slots:
	        void update_thread();
private:
		QPushButton *closeButton;
		QLabel *showNumLabel;
		QLabel *showIdLabel;
		QLabel *NumEdit;
		QTextEdit *IdEdit;
		QString num;
		QString thread_num;
		QTimer *timer;
};

class createDialog13 : public QDialog
{
	Q_OBJECT
public:
		//该类的构造函数
		createDialog13(QWidget *parent = 0);
		~createDialog13();
private slots:
	        void update_thread();
private:
		QPushButton *closeButton;
		QLabel *showNumLabel;
		QLabel *showIdLabel;
		QLabel *NumEdit;
		QTextEdit *IdEdit;
		QString num;
		QString thread_num;
		QTimer *timer;
};

class createDialog14 : public QDialog
{
	Q_OBJECT
public:
		//该类的构造函数
		createDialog14(QWidget *parent = 0);
		~createDialog14();
private slots:
	        void update_thread();
private:
		QPushButton *closeButton;
		QLabel *showNumLabel;
		QLabel *showIdLabel;
		QLabel *NumEdit;
		QTextEdit *IdEdit;
		QString num;
		QString thread_num;
		QTimer *timer;
};

class createDialog15 : public QDialog
{
	Q_OBJECT
public:
		//该类的构造函数
		createDialog15(QWidget *parent = 0);
		~createDialog15();
private slots:
	        void update_thread();
private:
		QPushButton *closeButton;
		QLabel *showNumLabel;
		QLabel *showIdLabel;
		QLabel *NumEdit;
		QTextEdit *IdEdit;
		QString num;
		QString thread_num;
		QTimer *timer;
};
#endif

