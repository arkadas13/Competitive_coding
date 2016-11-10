#include <stdio.h>
long long int fermantlittletheorem(long long int den, long long int n)
{
	if (n == 0)
		return 1;
	else if (n % 2 == 0)
		return (long long int)(fermantlittletheorem(den, n / 2)*fermantlittletheorem(den, n / 2)) % 1000000007;
	else
		return (long long int)(fermantlittletheorem(den, n / 2)*(fermantlittletheorem(den, n / 2)*den) % 1000000007) % 1000000007;
}
int main()
{
	long long int i, j, N, T, arr[1000], a, num, den1, den2, den3, den, den_to_num, sum;
	arr[0] = 1;
	for (i = 1; i < 1000; i++)
	{
		arr[i] = (long long int)((arr[i - 1] * i) % 1000000007);
	}
	scanf_s("%lld", &T);
	for (a = 0; a<T; a++)
	{
		sum = 0;
		scanf_s("%lld", &N);
		for (i = 1; i <= N - 2; i++)
		{
			for (j = 1; j <= N - 1 - i; j++)
			{
					num = arr[N];
					den1 = arr[i];
					den2 = arr[j];
					den3 = arr[N - j-i];
					den = (long long int)(den1*(den2*den3) % 1000000007) % 1000000007;
					den_to_num = (long long int)fermantlittletheorem(den, 1000000005);
					sum += (den_to_num*num) % 1000000007;
			}
		}
		printf("%lld\n", sum);
	}
	return 0;
}