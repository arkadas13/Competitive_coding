#include<stdio.h>

void main() {
	char c;
	int l = 0, w = 0, s = 0, flag = 0;
	while ((c = getchar()) != EOF) {
		++s;
		if (c == ' ' || c == '\t')
		{
			if (flag == 0)
			{
				flag = 1;
				++w;
			}
		}
		else if (c == '\n')
		{
			if (flag == 0)
			{
				++w;
				flag = 1;
			}
			++l;
		}
		else
			flag = 0;
	}
	printf("%d,%d,%d", s, w, l);
	getch();
}