//3.��Ŀ��һ��������������100����һ����ȫƽ�������ټ���168����һ����ȫƽ���������ʸ����Ƕ��٣�
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,i;
	for(i=-100;i<10000;i++)
	{
		a=(int)sqrt(i+100);
		b=(int)sqrt(i+100+168) ;
		if(a*a==(i+100)&&b*b==(i+100+168))
		{
			printf("%d ",i);
		}
	}
	return 0;
} 
