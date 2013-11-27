/*
 * =====================================================================================
 *
 *       Filename:  read.cpp
 *
 *    Description: 读取线程号 
 *
 *        Version:  1.0
 *        Created:  2013年07月19日 21时53分56秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  leiyu, leiyujike1107@gmail.com
 *        Company:  Class 1107 of Computer Science and Technology
 *
 * =====================================================================================
 */
#include <dirent.h>
#include <string.h>
#include "read.h"

/*初始化链队列*/
int InitQueue_Thread(Link_thread *Q)
{
	Q->front = (Link_node *)malloc(sizeof(Link_node));
	Q->size = 0;
	if (Q->front != NULL)
	{
		Q->rear = Q->front;
		Q->front->next = NULL;
		return 1;
	}
	else
	      return 0;  //溢出
}

/*整个初始化16个节点*/
void Init_Thread_Node()
{
	int i;
	for (i=0; i<16; i++)
	{
		thread_node[i] = (Link_thread *)malloc(sizeof(Link_thread));
		InitQueue_Thread(thread_node[i]);
	}
}

/*线程队列入队*/
void EnterQueue_Thread(Link_thread *Q, char *str)
{
	Link_node *new_p;
	new_p = (Link_node *)malloc(sizeof(Link_node));

	if (new_p != NULL)
	{
		count_thread++;
		new_p->thread_name = str;
		new_p->next = NULL;
	        Q->rear->next = new_p;
		Q->rear = new_p;
		Q->size++;
	}
}


/*线程队列出队*/
char *DeleteQueue_Thread(Link_thread *Q)
{
	Link_node *del_p;
	char *str;
	if(Q->front == Q->rear)
	{
		return NULL;
	}
	del_p = Q->front->next;
	Q->front->next = del_p->next;   /*对头元素出队*/
	if (Q->rear == del_p)          /*如果队中只剩下一个元素del_p,则出队后为空队*/
	      Q->rear = Q->front;
	str = del_p->thread_name;
	free(del_p);
	Q->size--;

	return str;
}

/*为每个节点分配线程*/
void Thread_Node_Assign(char *str)
{
  Loop:if (str != NULL && i < 16 && n < count_thread && thread_node[i]->size < 8)
	{
	        EnterQueue_Thread(thread_node[i], str);
		n++;
		i++;
	}

       else if (i == 16)
	{
		i = 0;
		goto Loop;
	}
	else
	{
		return;
	}
}

/*切换线程*/
void Thread_Change()
{
	int i;
	char *temp_str;
	for (i=0; i< 16; i++)
	{
		temp_str = DeleteQueue_Thread(thread_node[i]);
		EnterQueue_Thread(thread_node[i], temp_str);
	}
	Print_Thread_Node();
}


/*读取线程号*/
void my_readdir()
{
	DIR *dir; 
	struct dirent *ptr;
	char ch;
	char *str;
	int init_n, j;
	Link_thread *Q;
	Q = (Link_thread *)malloc(sizeof(Link_thread));
	
	if ((dir = opendir("/proc")) == NULL)
	{
		perror("opendir");
		return ;
	}

	init_n = InitQueue_Thread(Q);
        Init_Thread_Node();

	while((ptr = readdir(dir)) != NULL)
	{
		ch = *(ptr->d_name);
		if (ch >= '1' && ch <= '9')
		{
			if(init_n)
			{
				EnterQueue_Thread(Q, ptr->d_name);
			}
		}
	}

	if (count_thread >= 128)
	{
		for (j=0; j<128; j++)
	       {
	        	str = DeleteQueue_Thread(Q);
	        	Thread_Node_Assign(str);

	       }
	}
	else
	{
		for (j=0; j<count_thread; j++)
		{
			str = DeleteQueue_Thread(Q);
			Thread_Node_Assign(str);
		}
	}
	closedir(dir);
	Print_Thread_Node();
}

/*在对话框中显示节点信息*/
void Print_Thread_Node()
{
	int i, j, temp_n;
	Link_node *temp_node;

	for (i=0; i<16; i++)
	{
		temp_node = thread_node[i]->front->next;
		for (temp_n = 0; thread_node[i]->size == 8 - temp_n && temp_n <= 8; temp_n++)
		{
			sprintf(str_num[i], "%d\n", thread_node[i]->size);
			strcpy(str_thread[i], temp_node->thread_name);
			strcat(str_thread[i], " is running!\n");
			
			temp_node = temp_node->next;
        		for (j=0; j < thread_node[i]->size - temp_n - 1; j++)
	        	{
				strcat(str_thread[i], temp_node->thread_name);
				strcat(str_thread[i], " is readying!\n");
				temp_node = temp_node->next;
	        	}
        	}
	}
}

//刷新线程号和切换线程号的交替执行
void *my_readdir_thread(void *arg)
{
	Init_Thread_Node();
	my_readdir();
	sleep(2);
	while(1)
	{
		Thread_Change();
		sleep(2);
		count_sleep++;
		if (count_sleep % 4 == 0)
		{
			Init_Thread_Node();
			my_readdir();
			sleep(2);
			count_sleep = 0;
		}
	}
}



