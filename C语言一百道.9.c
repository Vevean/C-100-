//9.��Ŀ��������������¥�ݡ���Ҫ n ������ܵ���¥����ÿ��������� 1 �� 2 ��̨�ס����ж����ֲ�ͬ�ķ�����������¥���أ�
#include<stdio.h>
f(int n)
{
	int dp[n+1],i;
	for(i=0;i<3;i++)
	{
		dp[i]=i;
	}
	for(i=3;i<=n;i++)
	{
		dp[i]=dp[i-1]+dp[i-2];
	}
	return dp[n];
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",f(n));
}
