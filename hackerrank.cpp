#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int N, a[64][64],z,k,j,i,l;
	scanf_s("%d", &N);
	a[0][0] = 1;
	for (k = 1; k <= N; k++)
	{
		for (i = 0; i < (int)pow(2.0, k - 1); i++)
		{
			for (j = 0; j < (int)pow(2.0, k - 1); j++)
			{
				z = 1;
				for (l = 0; l < 3; l++)
				{
					if (l == 0)
					{
						a[i][j + (int)pow(2.0, k - 1)] = a[i][j] + (int)pow(2.0, 2 * (k - 1))*z;
						z++;
					}
					else if (l == 1)
					{
						a[i + (int)pow(2.0, k - 1)][j] = a[i][j] + (int)pow(2.0, 2 * (k - 1))*z;
						z++;
					}
					else
						a[i + (int)pow(2.0, k - 1)][j+(int)pow(2.0, k - 1)] = a[i][j] + (int)pow(2.0, 2 * (k - 1))*z;
				}
			}
		}
	}
	for (i = 0; i < pow(2.0, N); i++)
	{
		for (j = 0; j < pow(2.0, N); j++)
		{
			if ((a[i][j] / 10) == 0)
				printf("00%d ", a[i][j]);
			else if ((a[i][j] / 100) == 0)
				printf("0%d ", a[i][j]);
			else if ((a[i][j] / 1000) == 0)
				printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}