#include<stdio.h>
#define max 100
void strncopy(char *s, char *t, int n)
{
	int i = 0;
	for (; i < n; i++)
		*s++ = *t++;
	*s = '\0';
}
void strncat(char *s, char *t, int n)
{
	int j = 0;
	while (*s++ != '\0')
		;
	--s;
	char *p;
	p = t;
	for (; *t != '\0' && (t - p)<n; s++, t++)
		*s = *t;
	*s = '\0';
}
int strncmp(char *s, char *t, int n)
{
	int p = n - 1;;
	while (--n != 0)
	{
		if (*s + p - n != *t + p - n)
			return *s + p - n - *t + p - n;
		else
			return 0;
	}
}
void main()
{
	int c, n,m;
	z:
	m = 0,n=0;
	printf("\nenter n\n");
	while ((c = getchar()) != '\n')
		n = 10 * n + (c - '0');
	printf("%d\n", n);
	printf("\nchoose....\n");
	while ((c = getchar()) != '\n')
		m = 10 * m + (c - '0');
	printf("%d\n", m);
	char b[max] = "giligilichu";
	if (c == '\n')
	{
		if (m == 1)
		{
			char a[max];
			strncopy(&a, &b, n);
			printf("%s", a);
		}
		else if (m == 2)
		{
			char a[max] = "Abracadabra";
			strncat(&a, &b, n);
			printf("%s", a);
		}
		else if (m == 3)
		{
			char a[max] = "Abracadabra";
			printf("%d", strncmp(&a, &b, n));
		}
		else
			printf("invalid choice");
		goto z;
	}
	getch();
}