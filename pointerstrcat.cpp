#include<stdio.h>
#define max 100
void strcat(char *s, char *t)
{
	while (*s++ != '\0')
		;
	*s--;
	for (; *t != '\0'; s++, t++)
		*s = *t;
}
void main()
{
	char a[max] = "arkadas";
	char b[max] = "porkodas";
	strcat(&a, &b);
	printf("%s", a);
	getch();
}