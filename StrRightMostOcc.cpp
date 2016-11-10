#include<stdio.h>
#define max 100
void main()
{
	int len1, len2, i;
	char line1[max], line2[max];
	while ((len1 = mgetline(line1, max)) > 0 && (len2 = mgetline(line2, max)) > 0)
	{
		i=strindex(line1, line2);
		printf("%d", i);
	}
	getch();
}
int mgetline(char s[], int lim)
{
	int a = 0;
	int c;
	while ((c = getchar()) != EOF && c!='\n'&& a < lim)
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
int strindex(char s[], char t[])
{
	int u = 0, v = 0, w = 0, x, pos = -1, flag=0,z;

	while (t[v] != '\n')
		++v;
	while (s[w + v] != '\0')
	{
		if (t[0] == s[w])
		{
			z = w;
			flag = 1;
			for (x = w; x < w + v; x++,z++)
			{
				if (t[x - w] != s[z])
				{
					flag = 0;
					break;
				}
			}
		}
		if (flag == 1)
		{
			pos = w;
		}
		w++;
		flag = 0;
	} 
	return pos+1;
}