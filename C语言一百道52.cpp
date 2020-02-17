//52.题目：取一个整数a从右端开始的4?7位
main()
{
unsigned a,b,c,d;
scanf("%o",&a);
b=a>>4;
c=~(~0<<4);
d=b&c;
printf("%o\n%o\n",a,d);
}
