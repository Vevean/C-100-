//3.��Ŀ��һ��������������100����һ����ȫƽ�������ټ���168����һ����ȫƽ���������ʸ����Ƕ��٣�
#include<stdio.h>
#include<math.h>
int main()
{
	int N,n,m;
	for(N=-100;N<10000;N++)
	{
		n=(int)sqrt(N+100);
		m=(int)sqrt(N+100+168);
		if(N+100==n*n&&N+100+168==m*m)
		{
			printf("%d\n",N);
		}
	}
}
