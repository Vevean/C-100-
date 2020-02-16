//48.题目：两个变量值互换。
#include<stdio.h>
int main()
{
	int a,b,t;
	scanf("%d",&a);
	scanf("%d",&b);
	t=a;
	a=b;
	b=t;
	printf("交换后a的值为%d,b的值为%d",a,b);
}
