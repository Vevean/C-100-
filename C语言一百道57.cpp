//57.题目：打印出杨辉三角形


#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()

{

    int i,j,n = 0;

    //首先定义二维数组计数符号i,j 还有杨辉三角行数的初始化

    int a[100][100] = {0};

    //二维数组大小可自定，但切记不可使其超过整形数组的大小

    while(n < 1 || n >100)

    //在输入的值不正确时自动初始化问题，重新输入

    {

        printf("请输入要打印的杨辉三角行数>:");

        scanf("%d",&n);

    }

    for(i = 0; i < n ; i++)

    {

        a[i][0] = 1;

        //每一行第一个为1，用第一个for循环的输入

    }

    for(i = 1; i < n; i++ )//第一层循环i决定第几行

    {

        for(j = 1; j <= i; j++)//第二层循环借用i限制每行字符数目

        {

            a[i][j] = a[i-1][j-1]+a[i-1][j];

        }

    }

    for(i = 0; i < n; i++)//一个for循环逐行打印叫a的二维数组

    {

        for(j = 0; j <= i; j++)

            printf("%5d",a[i][j]);

        printf("\n");

    }

    return 0;

}

