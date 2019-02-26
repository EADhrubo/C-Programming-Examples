# include <stdio.h>
# include <conio.h>
# include <math.h>
int bin_to_deci(int x);
int main ()
{
	int x,a;
	printf("\n Enter a number : ");
	scanf(" %d",&x);
	a=bin_to_deci(x);
	printf("\n\a The decimal form of this binary number is %d.",a);
	getch();
	return 0;
}
int bin_to_deci(int x)
{
	static int j=-1;
	int b;
	b=x%10;
	x=x/10;
	++j;
	if ((b==0) && (x==0))
	{
		return 0;
	}
	else
	{
		return (b*pow(2,j)+bin_to_deci(x));
	}
}
