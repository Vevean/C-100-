//35.题目：一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，十位与千位相同
#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	if(num%10==num/10000&&num%100/10==num%10000/1000)
	{
		printf("%d是回文数",num);
	}else{
		printf("%d不是回文数",num);
	}
}
