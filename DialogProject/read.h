/*
 * =====================================================================================
 *
 *       Filename:  read.h
 *
 *    Description:  读取线程的声明 
 *
 *        Version:  1.0
 *        Created:  2013年07月19日 21时53分49秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  leiyu, leiyujike1107@gmail.com
 *        Company:  Class 1107 of Computer Science and Technology
 *
 * =====================================================================================
 */

#ifndef READ_H
#define READ_H

#include <unistd.h>
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <dirent.h>
#include <string.h>
#define MAX 10

extern char str_thread[16][200];
extern char str_num[16][5];

extern int i;
extern int j;
extern int k;
extern int n;
extern int count_sleep;

/*定义线程队列*/
typedef struct Thread_data
{
	char *thread_name;
	struct Thread_data *next;
}Link_node;

typedef struct 
{
	Link_node *front;
	Link_node *rear;
	int size;
}Link_thread;

extern int count_thread;             // 统计进程数
extern Link_thread *thread_node[16];    // 每个节点的信息

char *DeleteQueue_Thread(Link_thread *Q);
int  InitQueue_Thread(Link_thread *Q);
void Init_Thread_Node();
void EnterQueue_Thread(Link_thread *Q, char *str);
void Thread_Node_Assign(char *str);
void Thread_Change();
void Print_Thread_Node();
void my_readdir();
void *my_readdir_thread(void *arg);

#endif


