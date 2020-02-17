//61.题目：输入3个数a,b,c，按大小顺序输出。
#include<stdio.h>

int main()
{
	int a, b, c, max;//逗号,(大/中/普通)括号，右端需有空白字符
	
	scanf("%d%d%d", &a, &b, &c);
	
	if( a>b)    max = a;//为了代码可视性高，操作符需被空白字符包围
	else        max = b;
	if( c>max)  max = c;
	
	printf("max=%d", max);
	
	return 0;
}

