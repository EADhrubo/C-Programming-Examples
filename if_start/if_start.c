# include <stdio.h>
# include <conio.h>
void main()
{
	int x,y;
	printf("\n x= ");
	scanf("%d",&x);
	printf("\n y= ");
	scanf("%d",&y);
	if (x>=y)
	{
		printf("\n x is grater than or equal to y.");
	}
	else
	{
		printf("\n y is grater than x.");
	}
	getch();
}