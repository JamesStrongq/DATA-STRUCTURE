#include<stdio.h>
#define MAXSIZE 100
#define OK 1
#define ERROR 0
typedef int ElemType;
typedef int Status;

typedef struct{
	ElemType data[MAXSIZE];
	int top1;
	int top2;
	
}SqDoubleStack;

Status Push(SqDoubleStack *S,ElemType e,int stackNumber){
	if(S -> top1 + 1 == S -> top2)
	       return ERROR;
	if(stackNumber == 1){
		S -> top1++;
		S -> data[S -> top1] = e;
	}else if(stackNumber == 2){
		S -> top2 --;
		S -> data[S -> top2] = e;
	}
	return OK;
}

Status Pop(SqStack *S,ElemType *e,int stackNumber){
	if(stackNumber == 1){
		if(S -> top1 == -1)
		    return ERROR;
		else{
			*e = S -> data[S -> top1];
			S -> top1 --;
		}
		   
	}
	if(stackNumber == 2){
		if(S -> top2 == MAXSIZE){
			return ERROR;
		}else{
			*e = S -> data[S -> top2];
			S -> top2 ++;
		}
	}
	return OK;
}
