//13.题目：古典问题：有一对兔子，从出生后第3个月起每个月都生一对兔子，
//小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？
#include<stdio.h>
int f(int n)
{
	if(n==1||n==2)
	{
		return 1;
	}else{
		return f(n-1)+f(n-2);
	}
}
int main()
{
	int num,sum=0;
	printf("请输入你想知道兔子总数的月份");
	scanf("%d",&num);
	sum=f(num);
	printf("兔子总数为%d对",sum);
}
