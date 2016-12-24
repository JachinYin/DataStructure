#define ElemType int
#define Status int
#define OK 0
#define OVERFLOW -2
#define ERROR 1
#include<stdio.h>
typedef struct LNode{
	ElemType data;
	struct LNode *next;
}LNode,*LinkList;

Status InitList_L(LNode &L){
	L = new LNode;
	L->next=NULL;
	return OK;
}
Status GetElem_L(LNode L,int i,ElemType &e){ //查找(按照位置查找) 
	LinkList P;									//创建P指向L 
	P=L->next;
	int j = 1;									//从第一个元素开始，使P指向位置i 
	while(P&&j<i){
		P = P->next;
		j++;
	}
	if(!P||j>i)
		return ERROR;							//查找失败，i超出表长或空间已满 
	e = P->data;								//查找成功，将数据赋给e 
	return OK;
}
LNode *LocateElem(LNode L,ElemType e){
	LinkList P;
	P=L->next;
	while(P)
		;
}
