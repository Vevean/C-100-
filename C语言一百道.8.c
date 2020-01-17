//8.题目：输出 9*9 乘法口诀表。
#include<stdio.h>
int main()
{
	int i,j;
	for(i=0;i<9;i++)//控制行数
	{
		for(j=1;j<=i+1;j++)
		{
			printf("%d * %d = %d ",j,i+1,(i+1)*j);
		}
		printf("\n");
	} 
}
