#include<stdio.h>

void printArr(int arr[10], int newarr[10]) {
	int k = 0;
	printf("배열 요소의 출력: ");
	// 홀수 일때
	for (int i = 0; i < 10; i++)
	{
		int n = arr[i];
		if (n % 2 == 1)
		{
			newarr[k] = n;
			k++;
		}
	}
	// 짝수 일때
	for (int i = 9; i >= 0; i--)
	{
		int n = arr[i];
		if (n % 2 == 0)
		{
			newarr[k] = n;
			k++;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d", newarr[i]);
		if (i < 9) printf(",");
	}
}

	int main(void) {
		int arr[10];
		int n;
		for (int i = 0; i < 10; i++) {
			printf("입력: ");
			scanf_s("%d", &n);
			arr[i] = n;
		}
		int newarr[10];
		printArr(arr, newarr);// 짝수
		return 0;
	}