#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int main()
{
	int a[3*MAX-2], b[MAX], c[2*MAX - 1],A,B,i,j,sum;
	scanf_s("%d", &A);//no of elements in array a <MAX
	scanf_s("%d", &B);//no of elements in array b <MAX
	for (i = 0; i < (2*B+A-2); i++)
	{	
		if (i < (B - 1) || i>(B +A- 2))
			a[i] = 0;
		else
			scanf_s("%d", &a[i]);
	}
	for (i = 0; i < B; i++)
	{
		scanf_s("%d", &b[i]);
	}
	for (i = 0;i<(A+B-1); i++)
	{
		sum = 0;
		for (j = 0; j < B;j++)
			sum += a[i+j] * b[j];
		printf("%d ", sum);
	}
}