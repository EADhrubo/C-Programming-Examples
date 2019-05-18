# include <stdio.h>
# include <conio.h>
void main()
{
	int y1,y2,i,a=0;
	printf("\n y1= ");
	scanf(" %d",&y1);
	printf("\n y2= ");
	scanf(" %d",&y2);
	for (i=y1;i<=y2;i++)
	{
		if (i%100==0)
		{
			if (i%400==0)
			{
				a++;
			}
		}
		else 
		{
			if (i%4==0)
			{
				a++;
			}
		}
	}
	printf("\n\a There are %d leap years between %d and %d .",a,y1,y2);
	getch();
}
