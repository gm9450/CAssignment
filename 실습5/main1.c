#include<stdio.h>

int main(int argc, char *argv[])
{
	int a, b, result = 1;
	if (argc < 3)
	{
		printf("���ڸ� �ΰ� �Է��Ͻÿ�.\n");
		return 0;
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	for (int i = 0; i < b; i++)
	{
		result = result * a;
	}

	printf("%d�� %d�� ������ %d�Դϴ�.\n", a, b, result);

	return 0;
}