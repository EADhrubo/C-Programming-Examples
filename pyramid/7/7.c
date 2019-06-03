# include <stdio.h>
# include <conio.h>
int main ()
{
	char k;
	int i,n,a,b,c,m;
	printf("\n n= ");
	scanf(" %d",&n);
	m=n;
	for (i=1;i<=n;++i)
	{
		k='a';
		a=i;
		for (;(a-1);--a)
		{
			printf(" ");
		}
		b=m;
		for (c=1;c<=b;++c)
		{
			printf("%c",k);
			++k;
		}
		k-=2;
		--b;
		for (;b;--b)
		{
			printf("%c",k);
			--k;
		}
		--m;
		printf("\n");
	}
	getch();
	return 0;
}
