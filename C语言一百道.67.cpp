//67.题目：创建一个链表。
#include<stdio.h>
#include<stdlib.h>
struct Node{
	int a;
	struct Node *next;
};
struct Node *readlist()
{
	int num;
	struct Node *head=NULL;
	struct Node *end=NULL;
	while(scanf("%d",&num)&&num!=-1)
	{
	struct Node *p=(struct Node*)malloc(sizeof(struct Node));
	p->a=num;
	if(head==NULL)
	{
		head=end=p;
	}else{
		end->next=p;
		end=p;
		end->next=NULL;
	}
	}
	return head;
}
int main()
{
	struct Node *L=readlist();
	while(L){
		printf("%d ",L->a);
		L=L->next;
	}
}

