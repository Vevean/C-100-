//79.��Ŀ����ȡ7������1��50��������ֵ��ÿ��ȡһ��ֵ�������ӡ����ֵ�����ģ���
#include<stdio.h>
int main()
{
	int i,a[7],j;
	for(i=0;i<7;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<7;i++)
	{
		for(j=0;j<a[i];j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
