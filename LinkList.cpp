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
Status GetElem_L(LNode L,int i,ElemType &e){ //����(����λ�ò���) 
	LinkList P;									//����Pָ��L 
	P=L->next;
	int j = 1;									//�ӵ�һ��Ԫ�ؿ�ʼ��ʹPָ��λ��i 
	while(P&&j<i){
		P = P->next;
		j++;
	}
	if(!P||j>i)
		return ERROR;							//����ʧ�ܣ�i��������ռ����� 
	e = P->data;								//���ҳɹ��������ݸ���e 
	return OK;
}
LNode *LocateElem(LNode L,ElemType e){
	LinkList P;
	P=L->next;
	while(P)
		;
}
