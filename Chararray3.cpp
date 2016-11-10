#include<stdio.h>
#define MAXLINE 5
#define LIMIT 20
#define MAXLINECHARS 1000
int ngetline(char s[], int lim)
{
	int i, c;

	for (i = 0; i<lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;

	if (c == '\n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';

	return i;
}
void main()
{
	int len, a = 0, i = 0, j;
	char line[MAXLINECHARS], long20[MAXLINE][MAXLINECHARS];

	while ((len = ngetline(line, MAXLINECHARS)) > 0 && a<MAXLINE)
	{
		if (len > LIMIT)
		{
			i = 0;
			while ((long20[a][i] = line[i]) != '\0')
				++i;
			++a;
		}
	}
	for (i = 0; i < a; i++)
	{
		j = 0;
		while (long20[i][j] != '\0')
		{
			printf("%c", long20[i][j]);
			++j;
		}
	}
	getch();
}
