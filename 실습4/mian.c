#include<stdio.h>

// n = 10 -> 1010
// n = 100 -> 1100100
void main()
{
	int n;
	printf("10진수 정수 입력: ");
	scanf_s("%d", &n);
	int i = 0;
	int s1 = n;
	while (s1 != 1 && s1 != 0)
	{
		s1 >>= 1;
		i += 1;
	}
	for (int k = i; k >= 0; k--)
	{
		int s2 = n >> k;
		if (s2 % 2 == 0) printf("%d", 0);
		else if (s2 % 2 != 0) printf("%d", 1);
	}
}
