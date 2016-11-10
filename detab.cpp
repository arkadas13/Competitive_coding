#include<stdio.h>
#define T2P 8
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
	return 0;
}
void main()
{
	int len,x,y,z,pos=0,s;
	char line[MAXLINECHARS];
	while((len = ngetline(line, MAXLINECHARS)) > 0)
	{
		for (x = 0; x <= len; x++)
		{
			if (line[x] == '\t')
			{
				s = T2P - (pos%T2P);
				for (y = len; y > x; y--)
				{
					line[y + s -1] = line[y];
				}
				for (z = x; z < (x + s); z++)
				{
					line[z] = '@';
				}
				len = len + s;
				pos = 0;
				x = x+s-1;
			}
			else
			{	
				pos++;
			}
		}
		printf("%s", line);
	}
}