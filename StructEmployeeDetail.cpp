#include<stdio.h>
struct name{
	char fn[11];
	char mn[11];
	char ln[11];
};
struct emp_det{
	struct name fd;
	int empno;
	char address[100];
};
main()
{
	
	struct emp_det ed[5];
	int c, i, j;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; (c=getchar())!= '\n'; j++)
			ed[i].fd.fn[j] = c;
		ed[i].fd.fn[j] = '\0';
	}
	for (i = 0; i < 5; i++)
	printf("%s\n", ed[i].fd.fn);
	return 0;
}