//62.��Ŀ���������飬�������һ��Ԫ�ؽ�������С�������һ��Ԫ�ؽ�����������顣
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
