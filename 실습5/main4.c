#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
	int len;
	char encode[100];
	char ch, encoded_ch;
	if (argc < 2)
	{
		printf("인자를 입력하시오.\n");
		return 0;
	}
	len = strlen(argv[1]);
	for (int i = 0; i < len; i++)
	{
		ch = argv[1][i];
		// 알파벳인 경우
		if (ch >= 'a' && ch <= 'z')
		{
			encoded_ch = ch - 3;
			if (encoded_ch < 'a')
			{
				encoded_ch = 'z' - ('a' - encoded_ch - 1);
			}
		}
		else
		{
			encoded_ch = ch;
		}
		encode[i] = encoded_ch;
	}
	encode[len] = '\0';
	printf("%s", encode);

	return 0;
}
