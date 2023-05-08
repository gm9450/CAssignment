#include<stdio.h>

// 배열 출력 함수
void printArr(int arr[][4]) {
	for (int i1 = 0; i1 < 4; i1++)
	{
		for (int i2 = 0; i2 < 4; i2++)
		{
			if (arr[i1][i2] - 10 < 0) printf("%d  ", arr[i1][i2]);
			else printf("%d ", arr[i1][i2]);
		}
		printf("\n");
	}
	printf("\n");
}

void rotate(int arr[][4], int newarr[][4])
{
	for (int i1 = 0; i1 < 4; i1++)
	{
		for (int i2 = 0; i2 < 4; i2++)
		{
			newarr[i1][i2] = arr[3 - i2][i1];
		}
	}
	for (int i1 = 0; i1 < 4; i1++)
	{
		for (int i2 = 0; i2 < 4; i2++)
		{
			arr[i1][i2] = newarr[i1][i2];
		}
	}
}

int main()
{
	int arr[4][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16} };
	int newarr[4][4];
	rotate(arr, newarr);
	printArr(arr);
	rotate(arr, newarr);
	printArr(arr);
	rotate(arr, newarr);
	printArr(arr);
	rotate(arr, newarr);
	printArr(arr);
	return 0;
}