#include<stdio.h>
#define MAXCOL 20
#define TABVAL 8

void main()
{
	int len, c, pos = 0, ct,a=0,posistore=0,i;
	char line[MAXCOL];
	while ((c = getchar()) != EOF)
	{
		++a;
		if (c != '\t' && c != ' ' && a <= MAXCOL)
		{
			line[a - 1] = c;
			++pos;
		}
		else if (c == '\t' && a <= MAXCOL)
		{
			ct = TABVAL - (pos%TABVAL);
			posistore = a - 1;
			for (; ct > 0; --ct)
			{
				line[a - 1] = ' ';
				++a;
			}
			a = a - 1;

			pos = 0;
		}
		else if (c == ' ' && a <= MAXCOL)
		{
			line[a - 1] = ' ';
			posistore = a - 1;
			++pos;
		}
		else if (c == '\n')
		{
			a = 0;
			pos = 0;
			posistore = 0;
		}
		else
		{
			for (i = 0; i <= (posistore - 1); i++)
				putchar(line[i]);
			putchar('\n');
			a = 0;
			pos = 0;
			int flag = 0;
			for (i = posistore; i < MAXCOL; i++)
			{
				if (line[i] != ' ')
				{
					flag = 1;
					posistore = i;
					break;
				}
			}
			if (flag == 1)
			{
				for (i = posistore; i < MAXCOL; i++);
				{
					putchar(line[i]);
					++a;
					++pos;
				}
			}
		}
	}
	getch();
}