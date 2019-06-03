# include <stdio.h>
# include <conio.h>
void main ()
{
	int i,n,a;
	printf("\n n= ");
	scanf(" %d",&n);
	for (i=1;i<=n;++i)
	{
		a=i;
		for (;a;--a)
		{
			printf("*");
		}
		printf("\n");
	}
	getch();
}