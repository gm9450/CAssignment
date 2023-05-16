#include<stdio.h>

//C:\Users\jbnu\source\repos\Project2\x64\Debug
//Project2.exe

int main(int argc, char *argv[])
{
	if (!strcmp(argv[1], argv[2]))
	{
		printf("%s와 %s는 동일한 문자열입니다.\n", argv[1], argv[2]);
	}
	else
	{
		printf("%s와 %s는 동일하지 않은 문자열입니다.\n", argv[1], argv[2]);
	}
	return 0;
}