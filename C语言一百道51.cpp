//51.题目：数字比较。
#include<stdio.h>

int main()
{
	int a, b, c, max;
	
	scanf("%d%d%d", &a, &b, &c);
	
	max = a>b ? a:b;
	max = c>max ? c:max;
	
	printf("max=%d", max);
	
	return 0;
}

