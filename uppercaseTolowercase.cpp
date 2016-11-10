#include<stdio.h>

void main()
{
	int c,j;
	while ((c = getchar()) != EOF && ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
	{
		j=convert(c);
		printf("%c", j);
	}
	getch(); 
}
int convert(int z)
{
	int i;
	(z >= 'a'&&z <= 'z') ? (i = z - 32) : (i=z + 32);
	return i;
}