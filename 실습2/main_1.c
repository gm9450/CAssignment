#include <stdio.h>

// 2정수를 입력받음
// 구구단 함수를 만듬
// 구구단 함수를 반복하게함
// 2개의 정수를 크기대로 비교함

void ggd(int n)
{
	int i;
	for (i = 1; i < 10; i++)
	{
		printf("%d * %d = %d \n", n, i, n * i);
	}
}

int main(void)
{
	int n1, n2;
	printf("두 정수를 입력해주세요 : ");
	scanf_s("%d %d", &n1, &n2);

	if (n1 >= n2)
		while (n2 <= n1)
		{
			printf("%d단\n", n2);
			ggd(n2);
			n2++;
		}
	else if (n2 > n1)
		while (n1 <= n2)
		{
			printf("%d단\n", n1);
			ggd(n1);
			n1++;
		};
}