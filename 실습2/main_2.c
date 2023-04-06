#include <stdio.h>

// 재귀함수 이용 - 값이 줄어드는 방향으로 사용
// return사용 -> 값을 저장
// 피보나치 수열 하나의 값씩 반환
// 이것을 반복

int fibonacci(int n)
{
	static int f = 0;
	if (n == 0)
	{
		f = 0;
		return f;
	}
	else if (n == 1)
	{
		f = 1;
		return f;
	}
	else
	{
		f = fibonacci(n - 2) + fibonacci(n - 1);
		return f;
	}
}

int main()
{
	int n;
	printf("나열할 수를 입력해주세요 : ");
	scanf_s("%d", &n);

	// 반복 n까지의 피보나치 수열 구하기
	int i;
	for (i = 0; i < n; i++)
	{
		int f;
		f = fibonacci(i);
		printf("%d ", f);
	}
	return 0;
}