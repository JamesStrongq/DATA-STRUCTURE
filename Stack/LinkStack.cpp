#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100
#define OK 1
#define ERROR 0
typedef int ElemType;
typedef int Status;

typedef struct StackNode{
	ElemType data;
	struct StackNode *next;
}StackNode,*LinkStackPtr;
typedef struct LinkStack{
	LinkStackPtr top;
	int count;
}LinkStack;

Status Push(LinkStack *S,ElemType e){
	LinkStackPtr s = (LinkStackPtr)malloc(sizeof(StackNode));
	s -> data = e;
	s -> next = S -> top;
	S -> top = s;
	S -> count ++;
	return OK;
}

Status Pop(LinkStack *S,ElemType *e){
	LinkStackPtr p;
	*e = S -> top -> data; 
	p = S -> top;
	S -> top = S -> top -> next;
	free(p);
	S -> count --;
	return OK;
}

void CreateStack(LinkStack *S,int n){
	LinkStackPtr p;
	int i;
	int a;
    S -> count = 0;
	for(i = 0;i < n;i++){
		scanf("%d",&a);
		p = (LinkStackPtr)malloc(sizeof(StackNode));
		p -> data = a;
		p -> next = S -> top;
		S -> top = p;
		S -> count++;
	}
}
void PrintStack(LinkStack *S){
	while(S -> count != 0){
		printf("%d",S -> top -> data);
		S -> count --;
	}
}
int main(){
   LinkStack *L;
   int n;
   printf("请输入所要创建的栈的总数:\n");
   scanf("%d",&n);
   CreateStack(L,n);
   PrintStack(L);
   

   return 0;
}
