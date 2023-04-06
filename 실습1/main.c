#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double C = 0.0;
	printf("¼·¾¾ : ");
	scanf("%lf", & C);

	double F = C * 9.0 / 5 + 32;
	printf("È­¾¾ : %f \n", F);

	return 0;
}