# include <stdio.h>
# include <conio.h>
void main ()
{
	int x,b=0;
	printf("\n x= ");
	scanf(" %d",&x);
	while (x!=1)
	{
		if (x%2==0)
		{
			x=x/2;
			++b;
		}
		else if (x%2!=0)
		{
			x=3*x+1;
			++b;
		}
	}
	printf("\n\a The transformation will go on %d times.",b);
	getch();
}