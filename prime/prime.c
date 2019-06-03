# include <stdio.h>
# include <conio.h>
void main()
{
	int x,i,b=0;
	printf("\n x= ");
	scanf(" %d",&x);
	for (i=2;i<=(x/2);i++)
	{
		if (x%i==0)
		{
			++b;
		}
	}
	if (b==0)
	{
		printf("\n\a It is a prime number ");
	}
	else
	{
		printf("\n\a It is not a prime number ");
	}
	getch();
}


