//1.题目：有四个数字：1、2、3、4，能组成多少个互不相同且无重复数字的三位数？各是多少？
#include<stdio.h>
int main()
{
	int i,j,k,count=0;
	for(i=1;i<5;i++)
	{
		for(j=1;j<5;j++)
		{
			for(k=1;k<5;k++)
			{
				if(i!=j&&i!=k&&j!=k)
				{
					printf("%d%d%d\n",i,j,k);
					count++;
				}
			}
		}
	}
	printf("能组成%d种互不相同且无重复数字的三位数",count);
}
