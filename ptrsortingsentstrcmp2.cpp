
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define maxchar 1000
#define maxline 5
int mgetline(char *s, int lim, int z) {
	int c, a = z;
	for (; (c = getchar()) != EOF && a < lim && c != '\n'; a++)
		*(s + a) = c;
	if (c == '\n')
		*(s + a) = '\0';
	return a - z + 1;
}
void comparison(char **a, char **b) {
	int y = 0;
	char *temp;
	for (; *(*a + y) != '\0'&& *(*b + y) != '\0'; y++)
		if ((*(*a + y)) >(*(*b + y))) {
			temp = *a;
			*a = *b;
			*b = temp;
			break;
		}
		else if ((*(*a + y)) < (*(*b + y)))
			break;
}
void sort(char **t) {
	int j, k;
	for (j = 0; j<maxline; j++) {
		for (k = 0; k < maxline - j - 1; k++)
			comparison(&t[k], &t[k + 1]);
	}
}
int main(int argc, char **argv) {
	char line1[maxchar];
	char **line = (char **)malloc(maxline * sizeof(char *));
	int len, i = 0, sum = 0;
	while (i < (maxline) && (len = mgetline(line1, maxchar, sum))>0) {
		line[i] = (line1 + sum);
		sum += len;
		i++;
	}
	sort(line);
	for (; i > 0; --i)
		printf("%s\n", line[i - 1]);
	return 0;
}