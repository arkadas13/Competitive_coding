#include<stdio.h>
#define MAXWL 20  /* Maximum length of a word */
#define MAXNO 25 /* Maximum No of words in a sentence */

void main()
{
	int word[MAXNO];
	int i, c, j, nc, nw;

	for (i = 0; i<MAXNO; ++i)
		word[i] = 0;

	nc = nw = 0;

	while ((c = getchar()) != EOF)
	{
		++nc;
		if (c == ' ' || c == '\n' || c == '\t')
		{
			word[nw] = nc-1 ; /* -1 for excluding the space in the word length */
			++nw;
			nc = 0; /* resetting the word-length for the next word */
		}

	}
	int g = word[0], h;
	for (i = 1; i < MAXNO; ++i)
	{
		if (g < word[i])
			g = word[i];
		else if (word[i] == 0)
		{
			h = i;
			break;
		}
	}
	printf("%d\n", g);
	printf("%d\n", h);
	for (i = 0; i < g; ++i)
	{
		for (j = 0; j < h; ++j)
		{
			if (g - i - word[j] > 0)
				putchar(' ');
			else
				putchar('*');
		}
		putchar('\n');
	}

	getch();

}

