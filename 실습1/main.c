#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double C = 0.0;
	printf("���� : ");
	scanf("%lf", & C);

	double F = C * 9.0 / 5 + 32;
	printf("ȭ�� : %f \n", F);

	return 0;
}