#include<stdio.h>
#define MAX 100
void main()
{
	int c;
	int a = 0, i = 0, j = 0, val = 1, b;
	int line[MAX];
	while ((c = getchar()) != EOF && a < MAX)
	{
		
		if (c >= '0' && c <= '9') 
		{
			line[a] = c - '0';
			a++;
		}
		else if ((c >= 'a' && c <= 'f'))
		{
			line[a] = (c - 'a' +10);
			a++;
		}
		else if (c >= 'A' && c <= 'F')
		{
			line[a] = (c - 'A' + 10);
			a++;
		}
		else if (c=='\n')
		{
			a--;
			for (; (a) >= 0; a--)
			{
				b = j;
				j++;
				for (; b > 0; --b)
				{
					val =val* 16;
				}
				i = i + (line[a] * val);
				val = 1;
			}
			printf("%d", i);
			j = 0;
			i = 0;
		}
	}
	getch();
}