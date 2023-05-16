#include<stdio.h>

//C:\Users\jbnu\source\repos\Project2\x64\Debug
//Project2.exe

int main(int argc, char *argv[])
{
	for (int i = 0; i < strlen(argv); i++)
	{
		if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
		{
			if ((argv[1][i] >> 4) <= 'z')
				argv[1][i] = argv[1][i] >> 4;
			else
			{
				if (argv[1][i] == 'x')
				else if (argv[1][i] == 'y')
			}
		}
	}
}