//3.题目：一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
#include<stdio.h>
#include<math.h>
int main()
{
	int N,n,m;
	for(N=-100;N<10000;N++)
	{
		n=(int)sqrt(N+100);
		m=(int)sqrt(N+100+168);
		if(N+100==n*n&&N+100+168==m*m)
		{
			printf("%d\n",N);
		}
	}
}
