//47.题目：求输入数字的平方，如果平方运算后小于 50 则退出。
#include<stdio.h>
int main()
{
	int num,a;
	scanf("%d",&num);
	a=num*num;
	if(a<50)
	{
		return 0;
	}
	else{
		printf("%d",a);
	}
	
}
