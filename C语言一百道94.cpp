//94.题目：计算2的20次方。不允许用**和pow()
#include<stdio.h>
int f(int n)
{
	int power;
	if(n==0)
	{
		power=1;
	}
	if(n>0)
	{
	power=2*f(n-1);
	}
	return power;
}
int main()
{
	int num;
	num=f(20);
	printf("2的20次方为%d",num);
}
