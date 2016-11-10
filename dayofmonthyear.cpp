#include<stdio.h>
int *z[2];
void month_day(int n, int y,int *m,int*d)
{
	int i, sum = 0;
	int leap;
	leap = ((y % 4) == 0 && (y % 100) != 0 || (y % 400) == 0) ? 1 : 0;
	for (i = 0; n > (sum + *(z[leap] + i)); i++)
		sum += *(z[leap] + i);
	*m = i;
	*d = n - sum;
}
void day_of_the_year(int d, int m, int y, int *n)
{
	int i, sum=0;
	int leap = ((y % 4) == 0 && (y % 100) != 0 || (y % 400) == 0) ? 1 : 0;
	for (i = 0; i <= m; i++)
		sum += *(z[leap] + i);
	*n = sum + d;
}
void main()
{
	char c; int sum = 0;
	int y[2][13] = { { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 },
	{ 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 } };
	z[0] = &y[0][0]; z[1] = &y[1][0];
	w:
	printf("DayOfYear,MonthDay Program\n1.Month Day\n2.Day of the Year.\nChoose....\n");
	while ((c = getchar()) != '\n')
		sum = 10 * sum + (c - '0');
	if (c == '\n')
	{
		if (sum == 1)
		{
			int month, day, doty = 0, year = 0;
			printf("Enter day of the Year.\n");
			while ((c = getchar()) != '\n')
				doty = doty * 10 + (c - '0');
			printf("Enter Year.");
			while ((c = getchar()) != '\n')
				year = 10 * year + c - '0';
			month_day(doty, year, &month, &day);
			printf("%d:%d/%d/%d", doty, day, month, year);
		}
		else if (sum == 2)
		{
			int day = 0, month = 0, year = 0, doty;
			printf("Enter day.\n");
			while ((c = getchar()) != '\n')
				day = day * 10 + (c - '0');
			printf("Enter month.\n");
			while ((c = getchar()) != '\n')
				month = month * 10 + (c - '0');
			printf("Enter Year.\n");
			while ((c = getchar()) != '\n')
				year = year * 10 + (c - '0');
			day_of_the_year(day, month, year, &doty);
			printf("%d/%d/%d:%d", day, month, year, doty);
		}
		else
			printf("Invalid choice. Please choose again.");
	}
	goto w;
	getch();
}