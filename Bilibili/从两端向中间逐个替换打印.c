#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <string.h>						//strlen ��ͷ�ļ�
#include <windows.h>					//Sleep ��ͷ�ļ�
int main()
{
	char arr1[] = "Welcome to GongYi!";
	char arr2[] = "##################";
	int left = 0;						//���� left Ϊ���±�����
	int right = strlen(arr1) - 1;		//���� right Ϊ���±�����
	//��arr2�е���ֵ�����arr1�滻
	while (left <= right)
	{
		arr2[left] = arr1[left];		
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(500);						//�ȴ�0.5s
		system("cls");					//����
		left++;							//left���ҽ�һ
		right--;						//right�����һ
	}
	printf("%s\n", arr2);				//���һ�δ�ӡ�����λ�
	return 0;
}