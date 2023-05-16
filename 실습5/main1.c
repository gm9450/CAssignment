#include<stdio.h>

int main(int argc, char *argv[])
{
	int a, b, result = 1;
	if (argc < 3)
	{
		printf("인자를 두개 입력하시오.\n");
		return 0;
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	for (int i = 0; i < b; i++)
	{
		result = result * a;
	}

	printf("%d의 %d의 제곱은 %d입니다.\n", a, b, result);

	return 0;
}