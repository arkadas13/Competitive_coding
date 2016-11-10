#include<stdio.h>
#define max 1000
void main()
{
	int i, j;
	char line1[max];
	int len1;
	len1= mgetline(line1, max);
	int posi = len1;

	char line2[max];
	int len2;
	len2 = mgetline(line2, max);
	for (i = len1-1; i>0 ; i--)
	{
		for (j = 0; j < len2; j++)
		{
			if (line1[i] == line2[j])
			{
				posi = i+1;
			}
		}
	}
	printf("%d", posi);
	getch();
}
int mgetline(char s[], int lim)
{
	char c;
	int a=0;
	while ((c = getchar()) != EOF && c!='\n' && a < lim)
	{
		s[a] = c;
		++a;
	}
	if (c == '\n')
	{
		s[a] = c;
		++a;
	}
	s[a] = '\0';
	return a;
}