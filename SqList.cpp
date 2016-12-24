#define ElemType int
#define Status int
#define OK 0
#define OVERFLOW -2
#define ERROR 1
#define MAXSIZE 100
#include<stdio.h>
typedef struct{
	ElemType *elem;
	int length;
}SqList;

Status InitList_Sq(SqList &L){//初始化 
	L.elem = new ElemType[MAXSIZE];
	if(!L.elem) return OVERFLOW;
	L.length=0;
	return OK;
}

int LocateElem_Sq(SqList L,ElemType e){//查找 
	for(int i=0;i<=L.length;i++)
		if(L.elem[i]==e) return i+1;
	return 0;
}

Status ListInsert_Sq(SqList &L,int i,ElemType e){
	if(i<1||i>L.length+1) return ERROR;
	if(L.length==MAXSIZE) return ERROR;
	for(int j=L.length-1;j>=i-1;j--)
		L.elem[j+1]=L.elem[j];
	L.elem[i-1]=e;
	L.length++;
	return OK;
}

Status ListDelete_Sq(SqList &L,int i,ElemType &e){
	if((i<1)||(i>L.length)) return ERROR;
	e=L.elem[i-1];
	for(int j=i;j<=L.length-1;j++)
		L.elem[j-1]=L.elem[j];
	L.length--;
	return OK;
}

bool ListEmpty(SqList L){
	if(L.length==0) return true;
	else return false;
}

int ListLength(SqList L){
	return L.length;
}

int main(){
	SqList L;
	InitList_Sq(L);
	printf("输入一个整数n表示数据个数：");
	scanf("%d",&L.length);
	printf("输入数据元素，以空格分开"); 
	for(int i=0;i<L.length;i++){
		scanf("%d",&L.elem[i]);
	}
	for(int i=0;i<L.length;i++){
		printf("%d ",L.elem[i]);
	}
	return 0;
}
