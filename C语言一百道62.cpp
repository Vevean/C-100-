//62.题目：输入数组，最大的与第一个元素交换，最小的与最后一个元素交换，输出数组。
#include<stdio.h>
int main()
{
	int a[10],i,max=0,min=0,t;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++){
		if(a[i]>a[max])
		{
			max=i;
		}
	}
	t=a[0];
	a[0]=a[max];
	a[max]=t;
	for(i=0;i<10;i++){
		if(a[i]<a[min])
		{
			min=i;
		}
	}
	t=a[9];
	a[9]=a[min];
	a[min]=t;
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
}
