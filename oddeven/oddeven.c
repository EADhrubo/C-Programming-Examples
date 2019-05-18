# include <stdio.h>
# include <conio.h>
void main()
{
	int x;
	printf("\n\a Enter a number : ");
	scanf(" %d",&x);
	if (x%2==0)
	{
		printf("\n It is an even number.");
	}
	else 
	{
		printf("\n It is an odd number.");
	}
	getch();
}

