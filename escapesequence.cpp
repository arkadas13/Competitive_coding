#include<stdio.h>
#define MAX 1000
void escape(char s[], char t[])
{
	int i = 0,j=0;
	while (s[i] != '\0')
	{
		switch (s[i])
		{
		case '\t':t[j] = '\\'; t[++j] = 't'; ++j; break;
		case '\n':t[j] = '\\'; t[++j] = 'n'; ++j; break;
		default: t[j] = s[i]; ++j; break;
		}
		++i;
	}
	t[j] = '\n';
	t[++j] = '\0';
}
int mgetline(char d[], int lim)
{
	int c;
	int a = 0;
	while ((c = getchar()) != EOF && c!='\n' && a < lim)
	{
		d[a] = c;
		++a;
	}
	if (c == '\n')
	{
		d[a] = c;
		++a;
	}
	d[a] = '\0';
	return a;
}
void main()
{
	int len1 = 0;
	char  line1[MAX], line2[MAX];
	while ((len1 = mgetline(line1, MAX))>0)
	{
		escape(line1, line2);
		printf("%s", line2);
	}
	getch();
}