//8.��Ŀ����� 9*9 �˷��ھ���
#include<stdio.h>
int main()
{
	int i,j;
	for(i=0;i<9;i++)//��������
	{
		for(j=1;j<=i+1;j++)
		{
			printf("%d * %d = %d ",j,i+1,(i+1)*j);
		}
		printf("\n");
	} 
}
