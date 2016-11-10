#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void arrayA(long int*, long int, long int, int);
void arrayB(long int*, long int, long int, int);
void print(long int*, long int*, long int, long int);

int main() {

	long int N, Q, i, j, k, l, L, R;
	int C;
	int choice;
	scanf_s("%ld", &N);
	long int a[100000];
	long int b[100000];
	for (i = 0; i<N; i++){
		a[i] = 0;
		b[i] = 0;
	}
	scanf_s("%ld", &Q);
	for (i = 0; i<Q; i++){
		scanf_s("%d", &choice);
		if (choice == 1){
			scanf_s("%ld %ld %d", &L, &R, &C);
			arrayA(a, L, R, C);
		}
		else if (choice == 2){
			scanf_s("%ld %ld %d", &L, &R, &C);
			arrayB(b, L, R, C);
		}
		else{
			scanf_s("%ld %ld", &L, &R);
			print(a, b, L, R);
		}
	}
	return 0;
}
void arrayA(long int x[], long int l, long int r, int a){
	long int i;
	for (i = l - 1; i<r; i++){
		x[i] = (x[i] + a) % 1000000007;
	}
}
void arrayB(long int x[], long int l, long int r, int a){
	long int i;
	for (i = l - 1; i<r; i++){
		x[i] = (x[i] + a) % 1000000007;
	}
}
void print(long int x[], long int y[], long int l, long int r){
	long int i, sum = 0;
	for (i = l - 1; i<r; i++){
		sum = (sum + (x[i] * y[i]) % 1000000007) % 1000000007;
	}
	printf("%lu\n", sum);
}