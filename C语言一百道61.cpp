//61.��Ŀ������3����a,b,c������С˳�������
#include<stdio.h>

int main()
{
	int a, b, c, max;//����,(��/��/��ͨ)���ţ��Ҷ����пհ��ַ�
	
	scanf("%d%d%d", &a, &b, &c);
	
	if( a>b)    max = a;//Ϊ�˴�������Ըߣ��������豻�հ��ַ���Χ
	else        max = b;
	if( c>max)  max = c;
	
	printf("max=%d", max);
	
	return 0;
}

