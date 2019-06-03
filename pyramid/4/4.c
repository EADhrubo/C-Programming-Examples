# include <stdio.h>
# include <conio.h>
void main ()
{
	int i,n,a,b,j;
	printf("\n n= ");
	scanf(" %d",&n);
	for (i=1;i<=n;++i)
	{
		a=i;
		for (;(n-a);++a)
		{
			printf(" ");
		}
		for (b=i,j=1;j<=(2*b-1);++j)
		{
			printf("*");
		}
		printf("\n");
	}
	getch();
}
