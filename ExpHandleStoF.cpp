#include<stdio.h>
#define max 100
#include <math.h>
void main()
{
	int len;
	double f;
	char line[max];
	while ((len = mgetline(line, max)) > 0)
	{
		f=atof(line);
		printf("\n%lf\n", f);
	}
	getch();
}
int mgetline(char s[], int lim)
{
	int c, a = 0;
	while ((c = getchar()) != EOF && c != '\n' && a < lim)
		s[a++] = c;
	if (c == '\n')
		s[a++] = c;
	s[a] = '\0';
	return a;
}
double atof(char s[])
{
	int i = 0, z, flag = 0; 
	double p, val = 0,exp=0;
	while (s[i] != '.')
	{
		val = 10 * val + (s[i]-'0');
		i++;
	}
	if (s[i] == '.')
		i++;
	z = i;
	while (s[i] != 'e')
	{
		val = val * 10 + (s[i]-'0');
		i++;
	}
	p = pow(10.0, i - z);
	val = val / p;
	if (s[i] == 'e')
		i++;
	if (s[i] == '-')
	{
		flag = 1;
		i++;
	}
	while (s[i] != '\n')
	{
		exp = 10 * exp + (s[i]-'0');
		++i;
	}
	if (flag == 1)
		return (val/pow(10.0,exp));
	else
		return (val*pow(10.0,exp));
}