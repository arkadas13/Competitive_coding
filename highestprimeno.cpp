#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

	int a, i, j, k, flag, b, g;
	scanf_s("%d", &a);
	for (i = 0; i<a; i++){
		g = 0;
		scanf_s("%d", &b);
		for (j = 2; j <= b; j++){
			if (b%j == 0){
				flag = 1;
				for (k = 1; k <= j / 2; k++){
					if (j%k == 0 && k>1){
						flag = 0;
						break;
					}
				}
				if (flag == 1 && j>g)
					g = j;
			}
		}
		printf("%d\n", g);
	}
	return 0;
}
