//84.��Ŀ���Ӽ�������һ���ַ�������Сд��ĸȫ��ת���ɴ�д��ĸ��Ȼ�������һ�������ļ�"test"�б��档
#include<stdio.h>
#include<conio.h> 
int main()
{
	char ch;
	ch=getchar();
	FILE *fp;
	fp=fopen("text.txt","w");
	while(ch!='!')
	{
		if(ch=='!')
		{
			break;
		}
		if(ch>96&ch<123)//��ĸ�Ƚ���asciiֵ 
		{
		
			ch=ch-32;
		}
	fputc(ch,fp);
	ch=getchar();
	}
}
