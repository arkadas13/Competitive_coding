#include<stdio.h>
#define  max 100
int strend(char *s, char *t)
{
	int flag = 0;
	for (; *s != '\0'; s++)
		;
	char *p;
	p = t;
	for (; *t != '\0'; t++)
		;
	while (t != p)
	{
		if (*t-- == *s--)
			flag = 1;
		else
		{
			flag = 0;
			break;
		}
	}
	return flag;
}
void main()
{
	char a[max] = "arkadasarka";
	char b[max] = "arka";
	int i= strend(&a, &b);
	printf("%d", i);
	getch();
}