//83.��Ŀ���Ӽ�������һЩ�ַ������������д�������ļ��ϣ�ֱ������һ��#Ϊֹ��
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
