#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <string.h>
int main()
{
    int ret = strlen("abc");
    printf("%d\n", ret);

    printf("%d\n", strlen("abc"));

    printf("%d", printf("%d", printf("%d", 43)));
    return 0;
}
