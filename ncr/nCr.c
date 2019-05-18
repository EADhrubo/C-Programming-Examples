# include <stdio.h>
# include <conio.h>
int factorial(int x);
int main ()
{
	int n,r,a;
	printf("\n n= ");
	scanf(" %d",&n);
	printf("\n r= ");
	scanf(" %d",&r);
	a=factorial(n)/(factorial(r)*factorial(n-r));
	printf("\n\a %dC%d is %d.",n,r,a);
	getch();
	return 0;
}
int factorial(int x)
{
	if (x==1)
	{
		return 1;
	}
	else
	{
		return (x*factorial(x-1));
	}
}

