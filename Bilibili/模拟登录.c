#define _CRT_SECURE_NO_WARNINGS 1 
//模拟登录 有三次机会 假设正确密码为 123456
#include <stdio.h>
#include <string.h>
int main()
{
	char password[20] = { 0 };
	int i;
	for(i=0;i<3;i++)
	{
		scanf("%s", password);  //password 是数组名，本身就是地址，不需要&取地址 
		if (strcmp(password, "123456") == 0)
		{
			printf("登录成功\n");
			break;
		}
		else
			printf("密码错误，您还有%d次机会，请重试\n",2-i);
	}
	if (i == 3)
		printf("您的机会已用光\n");
	return 0;
}