// function.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
void main()
{
	int c;
	a:
	printf("Temperature Convertion\n");
	printf("1.FtoC\n");
	printf("2.CtoF\n");
	printf("Enter your choice\n");
	c = getchar();
	if (c == '1')
	{
		for (int i = 0; i <= 300; i += 20)
		{
			printf("%d,%d\n", i, tempconv(i));
		}
	}
	else if (c == '2')
	{
		for (int i = 0; i <= 300; i += 20)
		{
			printf("%d,%d\n", i, tempconv2(i));
		}
	}
	else
	{
		printf("invalid choice please choose again....\n");
		goto a;
	}

	getch();
}

int tempconv(int fahrenheit)
{
	int celcius = 5 * (fahrenheit - 32) / 9;
	return celcius;
}
int tempconv2(int celcius)
{
	int fahrenheit = 9*celcius/5+32;
	return fahrenheit;
}
