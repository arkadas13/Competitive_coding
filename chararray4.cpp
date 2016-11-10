#include<stdio.h>
#define MAXLINE 1000

void main()
{
	int len, j;
	char line[MAXLINE], linecopy[MAXLINE];

	while ((len = mgetline(linecopy, MAXLINE))>0)
	{
		for (j = 0; j <= len; ++j)
			line[j] = linecopy[len - j-1];
		line[len++] = '\n';
		line[len++] = '\0';
		printf("%s", line);

	}
	
	getch();
}

int mgetline(char s[], int lim)
{
	int i, c;

	for (i = 0; i<lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;

	return i;
}