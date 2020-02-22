//79.题目：读取7个数（1—50）的整数值，每读取一个值，程序打印出该值个数的＊。
#include<stdio.h>
int main()
{
	int i,a[7],j;
	for(i=0;i<7;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<7;i++)
	{
		for(j=0;j<a[i];j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
