//70.��Ŀ����дһ������������nΪż��ʱ�����ú�����1/2+1/4+...+1/n,������nΪ����ʱ�����ú���1/1+1/3+...+1/n
#include<stdio.h>
double sum1(int n){
	int i;
	double sum=0;
	for(i=1;i<=n/2;i++)
	{
		sum+=1.0/2*i;
	}
	return sum;
}
double sum2(int n){
	int i;
	double sum=1.0;
	for(i=1;i<=(n-1)/2;i++)
	{
		sum+=1.0/(2*i+1);
	}
	return sum;
}
int main()
{
	int n;
	double sum=0.0;
	scanf("%d",&n);
	if(n%2==0){
		sum=sum1(n);
	}else{
		sum=sum2(n);
	}
	printf("��Ϊ%lf",sum);
}
