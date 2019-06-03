# include <stdio.h>
# include <conio.h>
void main ()
{
	int i,n,a,b;
	printf("\n n= ");
	scanf(" %d",&n);
	for (i=1;i<=n;++i)
	{
		a=i;
		for (;(n-a)!=0;++a)
		{
			printf(" ");
		}
		for (b=i;b!=0;--b)
		{
			printf("*");
		}
		printf("\n");
	}
	getch();
}