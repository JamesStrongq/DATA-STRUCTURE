#include<stdio.h>
#define MAXSIZE 100
#define OK 1
#define ERROR 0
typedef int ElemType;
typedef int Status;


typedef strcut{
	ElemType data[MAXSIZE];
	int top;
	
}SqStack;

Status Push(SqStack *S,ElemType e){
	if(S -> top == MAXSIZE)
	    return ERROR;
	S -> top ++;
	S -> data[S -> top] = e;
	return OK;    
	
}
Status Pop(SqStack *S,ElemType *e){
	if(S -> top == -1)
	    return ERROR;
	*e = S -> data[S -> top];
	S ->¡¡top --;
	return OK;    
	
}
