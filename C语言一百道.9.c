//9.题目：假设你正在爬楼梯。需要 n 阶你才能到达楼顶。每次你可以爬 1 或 2 个台阶。你有多少种不同的方法可以爬到楼顶呢？
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
