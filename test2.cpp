#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int M, N, i, j, R, m, mi, r, c, x, k, y;
	scanf_s("%d %d %d", &M, &N, &R);
	int a[100][100];
	for (i = 0; i<M; i++)
	{
		for (j = 0; j<N; j++)
			scanf_s("%d", &a[i][j]);
	}
	for (i = 0; i<R; i++)
	{
		m = 0;
		if (M >= N)
			mi = N;
		else
			mi = M;
		r = mi / 2 - 1 - m;
		c = mi / 2 - 1 - m;
		while (r >= 0 && c >= 0)
		{
			x = a[r][N - 1 - c];
			for (j = N - 1 - c; j>c; j--)
			{
				y = a[r][j - 1];
				a[r][j - 1] = x;
				x = y;
			}
			for (j = r; j<M - 1 - r; j++)
			{
				y = a[j + 1][c];
				a[j + 1][c] = x;
				x = y;
			}
			for (j = c; j<N - 1 - c; j++)
			{
				y = a[M - 1 - r][j + 1];
				a[M - 1 - r][j + 1] = x;
				x = y;
			}
			for (j = M - 1 - r; j>r; j--)
			{
				y = a[j - 1][N - 1 - c];
				a[j - 1][N - 1 - c] = x;
				x = y;
			}
			m++;
			r = mi / 2 - 1 - m;
			c = mi / 2 - 1 - m;
		}
	}
	for (i = 0; i<M; i++)
	{
		for (j = 0; j<N; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	return 0;
}
