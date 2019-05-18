# include <stdio.h>
# include <conio.h>
void main()
{
	float x,y,z;
	printf("\n x= ");
	scanf(" %f",&x);
	printf("\n y= ");
	scanf(" %f",&y);
	printf("\n z= ");
	scanf(" %f",&z);
	if (x>y)
	{
		if (x>z)
		{
			printf("\n\a The largest number : %.2f.",x);
		}
		if (z>x)
		{
			printf("\n\a The largest number : %.2f.",z);
		}
	}
	else
	{
		if (y>z)
		{
			printf("\n\a The largest number : %.2f.",y);
		}
		else
		{
			printf("\n\a The largest number : %.2f.",z);
		}
	}
	getch();
}
