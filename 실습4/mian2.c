#include<stdio.h>

int main()
{
	int arr[4][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16} };
	int newarr[4][4];
	for (int i2 = 0; i1 < 4; i1++)
	{
		for (int i1 = 0; i2 < 4; i2++)
		{
			newarr[i1][i2] = arr[i2][3-i1]
		}
	}
}