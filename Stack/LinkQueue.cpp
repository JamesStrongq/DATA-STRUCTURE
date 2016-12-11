#include<stdio.h>
typedef int ElemType;
typedef int Status;

typedef struct QNode{
	ElemType data;
	struct QNode *next;
}QNode,*QueuePtr;
typedef struct{
	QueuePtr front,rear;
}LinkQueue;

Status EnQueue(LinkQueue *Q,ElemType e){
       QueuePtr s = (QueuePtr)malloc(sizeof(QNode));
       s -> data = e;
       s -> next = NULL;
       Q -> rear -> next = s;
       Q -> rear = s;
       return OK;
} 

Status DeQueue(LinkQueue *Q,ElemType *e){
	QueuePtr p;
	if(Q -> rear == Q -> front)
	   return ERROR;
	p = Q -> front -> next;
	*e = p -> data;
	Q -> front -> next = p -> next;
	if(Q -> rear == p)
	     Q -> rear = Q -> front;
	free(p);
	return OK;	  
}
