//83.题目：从键盘输入一些字符，逐个把它们写到磁盘文件上，直到输入一个#为止。
#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *fp;
	fp=fopen("text.txt","w");
	char ch;
	ch=getchar();
	while(ch!='#'){
	fputc(ch,fp);
	ch=getchar();
	}
	fclose(fp);
	return 0;
}
