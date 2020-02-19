//84.题目：从键盘输入一个字符串，将小写字母全部转换成大写字母，然后输出到一个磁盘文件"test"中保存。
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
		if(ch>96&ch<123)//字母比较用ascii值 
		{
		
			ch=ch-32;
		}
	fputc(ch,fp);
	ch=getchar();
	}
}
