#include<stdio.h>

void rotate(int arr[][4], int newarr[][4])
{
	for (int i2 = 0; i1 < 4; i1++)
	{
		for (int i1 = 0; i2 < 4; i2++)
		{
			newarr[i1][i2] = arr[i2][3-i1]
		}
	}
}

int main()
{
	int arr[4][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16} };
	int newarr[4][4];
 rotate(arr[][4], newarr[][4]);
	for (int i = 0; i<4; i++)
	{
		for (int i2 = 0; i<4; i2++)
		{
			printf("%d ", newarr[i2][i]);
		}
		printf("\n");
	}
}