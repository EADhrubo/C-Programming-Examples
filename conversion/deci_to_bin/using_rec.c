# include <stdio.h>
# include <conio.h>
# include <math.h>
long int recursion(long int x);
int main ()
{
	long int x,a;
	printf("\n Enter a number : ");
	scanf(" %ld",&x);
	a=recursion(x);
	printf("\n\a The binary form of this decimal number is  %ld.",a);
	getch();
	return 0;
}
long int recursion(long int x)
{
	static int j=-1;
    long int b;
	b=x%2;
	x=x/2;
	if ((x==0) && (b==0))
	{
		return 0;
	}
	else
	{
		++j;
		return (b*pow(10,j)+recursion(x));
	}
}
