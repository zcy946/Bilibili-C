#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
void add(int* p)
{
	(*p)++;
}
int main()
{
	int n = 0;
	printf("%d\n", n);
	add(&n);
	printf("%d\n", n);
	add(&n);
	printf("%d\n", n);
	return 0;
}