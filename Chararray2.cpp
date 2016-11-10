//removing trailing tabs spaces 

#include<stdio.h>
#define maxlim 1000 // max lmit of char per line
int ngetline(char s[], int lim)
{
	int i=0, c;

	while ((c = getchar()) != EOF && c != '\n')
	{
		s[i] = c;
		++i;
	}
	return (i-1);
}
void main()
{
	int len,j,flag=1,g=0; 
	char line[maxlim], line2[maxlim];
	while ((len = ngetline(line, maxlim)) > 0)
	{
		for (j = 0; j <= len; j++)
		{
			if (line[j] != '\t' || line[j] != ' ' || line[j] != '\n' || line[j] != '@')
				g = j;
		}
		for (j = 0; j <= g; ++j)
			line2[j] = line[j];
		line2[++g] = '\n';
		line2[++g] = '\0';
		printf("%s", line2);
	}
	
	getch();
}