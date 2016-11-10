#include<stdio.h>
#include<string.h>
#define maxchar 1000
#define maxline 5
char *line[maxline];
int mgetline(char *s, int lim,int z)//line i/p func
{
	int c, a = z;
	for (; (c = getchar())!=EOF && a < lim && c!='\n'; a++)
		*(s + a) = c;
	if (c == '\n')
		*(s+a) = '\0';
	return a-z+1;
}

void sort()//bubble sort tech.
{
	int j, k, y, u, v;
	char *temp;
	for (j = 0;j<maxline-1; j++)
	{
		for (k = 0; k< maxline - j - 1; k++)
		{
			y = 0;
			for (; *(line[k] + y) != '\0'&& *(line[k + 1] + y) != '\0'; y++)//comapring b/w arrays.
			{
				u = (*(line[k] + y) - 'a');
				v = (*(line[k + 1] + y) - 'a');
				if (u!=v)
				{ 
					if (u > v)
					{
						temp = line[k];
						line[k] = line[k + 1];
						line[k + 1] = temp;
						break;
					}
					else
						break;
				}
			}
		}
	}
}
void main()
{
	char line1[maxchar];
	int len, i = 0, sum = 0;
	while (i < (maxline)&&(len = mgetline(line1, maxchar,sum))>0)//getting 5 line i/ps
	{
		line[i] = &line1[sum];
		sum += len;
		i++;
	}
	sort();//passing pointer array
	for (; i > 0; --i)
		printf("%s\n", line[i - 1]);
	getch();
}

