//94.��Ŀ������2��20�η�����������**��pow()
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
	printf("2��20�η�Ϊ%d",num);
}
