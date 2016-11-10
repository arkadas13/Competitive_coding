#include <stdio.h> 
#define T2S 8
void main()
{
	int c,x,cc=0,sc=0,i,flag=0,ct,j,k,a;
	while ((c = getchar()) != EOF)
	{
		if (c != '@' && flag == 0 && c != '\n')
		{
			cc++; //char count
			putchar(c);
		}
		else if (c == '@')
		{
			sc++; //space count
			flag = 1;
		}
		else if (c == '\n')
		{
			cc = 0;
			sc = 0;
			flag = 0;
		}
		else
		{
			ct=T2S-(cc%T2S);//1 tab after character=no of spaces<range 1-8>
			if (sc < ct)
			{
				a = sc;
				for (; a > 0;--a)
					putchar(' ');
			}
			else if (sc == ct)
			{
				putchar('\t');
			}
			else
			{
				putchar('\t');
				j = (sc - ct) % T2S;
				k = (sc - ct) / T2S;
				for (; k > 0; k--)
					putchar('\t');
				for (; j > 0; j--)
					putchar(' ');
			}
			putchar(c);
			sc = 0; 
			cc = 1;
			flag = 0;
			}
	}
	getch();
}