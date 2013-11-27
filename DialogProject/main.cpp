/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  线程调度模型的主函数
 *
 *        Version:  1.0
 *        Created:  2013年05月05日 15时07分43秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  leiyu, leiyujike1107@gmail.com
 *        Company:  Class 1107 of Computer Science and Technology
 *
 * =====================================================================================
 */
#include <QtGui>
#include <QApplication>
#include <QMainWindow>
#include <QSplashScreen>
#include <QTextCodec>
#include <pthread.h>
#include "mainwindow.h"
#include "read.h"

char str_num[16][5];
char str_thread[16][200];

Link_thread *thread_node[16];    //每个结点的信息

int i = 0;
int j = 0;
int k = 0;
int n = 0;
int count_sleep = 0;            //统计sleep的时间

int count_thread = 0;           //统计进程数

int main(int argc, char *argv[])
{
	pthread_t tid1;

	/*创建线程1(循环读取线程号)*/
	if (pthread_create(&tid1, NULL, my_readdir_thread, NULL) != 0)
	{
		exit(1);
	}

	QApplication app(argc, argv);

	/*解决中文解码问题*/
	QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));  
	mainWindow *window = new mainWindow();


	/*显示主窗口*/
	window->show();

	/*主窗口在屏幕中间显示*/
	window->move((QApplication::desktop()->width() - window->width()) >> 1,
				(QApplication::desktop()->height() - window->height()) >> 1);
	return app.exec();

}
