//4.����ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ���
#include<stdio.h>
int main()
{
	int year,month,day,i;
	scanf("%d %02d %02d",&year,&month,&day);
	int a[2][12]={{31,29,31,30,31,30,31,31,30,31,30,31},{31,28,31,30,31,30,31,31,30,31,30,31}};
	if(year%4==0&&year%100!=0||year%400==0)//Ϊ���� 
	{
		for(i=0;i<month-1;i++)
		{
			day+=a[0][i];
		}
	}else{
		for(i=0;i<month-1;i++)
		{
			day+=a[1][i];
		}
	}
	printf("��һ������һ��ĵ�%d��",day);
}
