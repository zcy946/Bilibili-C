#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <string.h>						//strlen 的头文件
#include <windows.h>					//Sleep 的头文件
int main()
{
	char arr1[] = "Welcome to GongYi!";
	char arr2[] = "##################";
	int left = 0;						//定义 left 为左下标数组
	int right = strlen(arr1) - 1;		//定义 right 为右下标数组
	//让arr2中的数值逐个被arr1替换
	while (left <= right)
	{
		arr2[left] = arr1[left];		
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(500);						//等待0.5s
		system("cls");					//清屏
		left++;							//left向右进一
		right--;						//right向左进一
	}
	printf("%s\n", arr2);				//最后一次打印出整段话
	return 0;
}