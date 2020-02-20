//3.题目：一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,i;
	for(i=-100;i<10000;i++)
	{
		a=(int)sqrt(i+100);
		b=(int)sqrt(i+100+168) ;
		if(a*a==(i+100)&&b*b==(i+100+168))
		{
			printf("%d ",i);
		}
	}
	return 0;
} 
