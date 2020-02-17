//56.题目：计算字符串长度。
#include <stdio.h>
#include <string.h>
int main(){
    char str[100] = { 0 };
    size_t len;
    gets(str);
    len = strlen(str);
    printf("Length: %d\n", len);

    return 0;
}
