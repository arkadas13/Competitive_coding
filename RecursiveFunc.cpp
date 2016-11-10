#include<stdio.h>
#include<string.h>
void recur(char s[], int b, int j)//starts swapping position from inside to out.(recursive function)
{
	int temp;
	if (j < b / 2)
		recur(s, b, ++j);
	temp = s[j];
	s[j] = s[b - j-1];
	s[b - j-1] = temp;
}
void main()
{
	char n[12] = "abracadabr";
	recur(n,strlen(n),0);
	printf("%s",n);
	getch();
}
