//96.题目：给定一个链表，删除链表的倒数第n个节点，并且返回链表的头结点。
#include<stdio.h>
#include<stdlib.h> 
struct ListNode{
	int a;
	struct ListNode *next;
};
int count=1;
struct ListNode *readlist(){//创建链表 
	struct ListNode *head=NULL,*end=NULL;
	int num;
	while(scanf("%d",&num)&&num!=-1)
	{
		count++;
		struct ListNode *p=(struct ListNode*)malloc(sizeof(struct ListNode));
		p->a=num;
		if(head==NULL)
		{
			head=end=p;
		}else{
			end->next=p;
			end=p;
			p->next=NULL;
		}
	}
	return head;
}
struct ListNode *delet(struct ListNode *head){//删除倒数第几个节点 
	int n,i=0;
	printf("请输入你要删除的倒数第几个节点");
	scanf("%d",&n);
	struct ListNode *p1,*p=head;
	printf("%d ",p->a);
	while(p->next!=NULL)
	{
		i++;
		p1=p;
		p=p->next;
		if(i==(count-n))
		{
			p1->next=p->next;
			free(p);
			p=p1->next;
		}
		
		printf("%d ",p->a);
	}
}

int main()
{
	struct ListNode *head=(struct ListNode*)malloc(sizeof(struct ListNode));
	head=readlist();
	delet(head);
}
