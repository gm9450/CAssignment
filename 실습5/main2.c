#include<stdio.h>

//C:\Users\jbnu\source\repos\Project2\x64\Debug
//Project2.exe

int main(int argc, char *argv[])
{
	if (!strcmp(argv[1], argv[2]))
	{
		printf("%s�� %s�� ������ ���ڿ��Դϴ�.\n", argv[1], argv[2]);
	}
	else
	{
		printf("%s�� %s�� �������� ���� ���ڿ��Դϴ�.\n", argv[1], argv[2]);
	}
	return 0;
}