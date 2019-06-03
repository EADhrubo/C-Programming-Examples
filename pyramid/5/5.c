# include <stdio.h>
# include <conio.h>
void main ()
{
	int i,n,a,b,c,d,e,f;
	printf("\n n= ");
	scanf(" %d",&n);
	for (i=1;i<=n;++i)
	{
		a=i;
		for (;(n-a)!=0;++a)
		{
			printf(" ");
		}
		b=i;
		for (c=1;c<=(2*b-1);++c)
		{
			printf("*");
		}
		printf("\n");
	}
	--c;
	for (d=1;d<=(n-1);++d)
	{
		for (e=d;e;--e)
		{
			printf(" ");
		}
		c-=2;
			for (f=1;f<=c;++f)
			{
				printf("*");
			}
			printf("\n");
	}
	getch();
}
