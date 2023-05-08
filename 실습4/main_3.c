#include<stdio.h>

void printArr1(int arr[10], int newarr[10]) {
	int k = 0;
	printf("홀수 출력: ");
	for (int i = 0; i < 10; i++)
	{
		int n = arr[i];
		if (n % 2 == 1)
		{
			newarr[k] = n;
			k++;
		}
	}
	for (int i = 0; i < k; i++)
	{
		printf("%d", newarr[i]);
		if (i < k - 1) printf(",");
	}
	printf("\n");
}

void printArr2(int arr[10], int newarr[10]) {
	int k = 0;
	printf("짝수 출력: ");
	for (int i = 0; i < 10; i++)
	{
		int n = arr[i];
		if (n % 2 == 0)
		{
			newarr[k] = n;
			k++;
		}
	}
	for (int i = 0; i < k; i++)
	{
		printf("%d", newarr[i]);
		if (i < k - 1) printf(",");
	}
	printf("\n");
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
	printArr1(arr, newarr);
	printArr2(arr, newarr);
	return 0;
}