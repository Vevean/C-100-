//1.��Ŀ�����ĸ����֣�1��2��3��4������ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ��٣�
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
	printf("�����%d�ֻ�����ͬ�����ظ����ֵ���λ��",count);
}
