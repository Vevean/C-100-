//96.��Ŀ������һ������ɾ������ĵ�����n���ڵ㣬���ҷ��������ͷ��㡣
#include<stdio.h>
#include<stdlib.h> 
struct ListNode{
	int a;
	struct ListNode *next;
};
int count=1;
struct ListNode *readlist(){//�������� 
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
struct ListNode *delet(struct ListNode *head){//ɾ�������ڼ����ڵ� 
	int n,i=0;
	printf("��������Ҫɾ���ĵ����ڼ����ڵ�");
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
