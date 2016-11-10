#include<stdio.h>
#define  max 100
void main()
{
	int c, d, i,n;
	char s[max];
	n = 42425;
	c = 16;

		d = itob(n, s, c);
		for (i = d; i >= 0; --i)
			putchar(s[i]);
	
	getch();
}
int itob(int x, char y[], int z)
{
	int v=0,u;
	if (z != 16)
	{
		while ((x /z)!= 0)
		{
			y[v] = x%z+'0';
			x = x / z;
			++v;
		}
		y[v] = x+'0';
	}
	else
	{
		while ((x / z)!= 0)
		{
			u = x%z;
			switch (u)
			{
				case 10:y[v] = 'A'; ++v; break;
				case 11:y[v] = 'B'; ++v; break;
				case 12:y[v] = 'C'; ++v; break;
				case 13:y[v] = 'D'; ++v; break;
				case 14:y[v] = 'E'; ++v; break;
				case 15:y[v] = 'F'; ++v; break;
				default:y[v]= u+'0'; ++v; break;
			}
			x = x / z;
		}
		switch (x)
		{
		case 10:y[v] = 'A';  break;
		case 11:y[v] = 'B';  break;
		case 12:y[v] = 'C';  break;
		case 13:y[v] = 'D';  break;
		case 14:y[v] = 'E';  break;
		case 15:y[v] = 'F';  break;
		default: y[v] = x+'0';  break;
		}
	}
	return v;
}
