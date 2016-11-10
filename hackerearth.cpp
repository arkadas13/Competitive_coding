#include <stdio.h>

int main()
{
	int T, i, l, N, K, j, a[10001], c,posi;
	scanf_s("%d", &T);
	for (i = 0; i<T; i++)
	{
		l = 10001;
		posi = 0;
		scanf_s("%d", &N);
		scanf_s("%d", &K);
		for (j = 0; j<N; j++)
		{
			scanf_s("%d", &a[j]);
		}
		for (j = 0; j<N; j++)
		{
			scanf_s("%d", &c);
			printf("*****%d", l);
			if (a[j] >= K)
			{
				if (l>c);
				{
					l = c;
					posi = j;
				}
			}
		}

	}
	return 0;
}
