#define _CRT_SECURE_NO_WARNINGS 1 
//ģ���¼ �����λ��� ������ȷ����Ϊ 123456
#include <stdio.h>
#include <string.h>
int main()
{
	char password[20] = { 0 };
	int i;
	for(i=0;i<3;i++)
	{
		scanf("%s", password);  //password ����������������ǵ�ַ������Ҫ&ȡ��ַ 
		if (strcmp(password, "123456") == 0)
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
			printf("�������������%d�λ��ᣬ������\n",2-i);
	}
	if (i == 3)
		printf("���Ļ������ù�\n");
	return 0;
}