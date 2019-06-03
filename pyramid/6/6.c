# include <stdio.h>
# include <conio.h>
void main ()
{
	int i,n,a,b,c,m;
	printf("\n n= ");
	scanf(" %d",&n);
	m=n;
	for (i=1;i<=n;++i)
	{
		a=i;
		for (;(a-1)!=0;--a)
		{
			printf(" ");
		}
		b=m;
		for (c=1;c<=b;++c)
		{
			printf("%d",c);
		}
		--b;
		for (;b;--b)
		{
			printf("%d",b);
		}
		--m;
		printf("\n");
	}
	getch();
}
