# include <stdio.h>
# include <conio.h>
void main()
{
	int x,y,i=1,b,a;
	printf("\n x= ");
	scanf(" %d",&x);
	printf("\n y= ");
	scanf(" %d",&y);
	for (;(i<=x) && (i<=y);i++)
	{
		if ((x%i==0) && (y%i==0))
		{
			b=i;
		}
	}
	a=(x*y)/b;
	printf("\n\a gcd and lcm of %d and %d are %d and %d.",x,y,b,a);
	getch();
}

