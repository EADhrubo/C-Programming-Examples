# include <stdio.h>
# include <conio.h>
void main()
{
	int x1,x2,y1,y2,a,b;
	printf("\n x1= ");
	scanf(" %d",&x1);
	printf("\n y1= ");
	scanf(" %d",&y1);
	printf("\n x2= ");
	scanf(" %d",&x2);
	printf("\n y2= ");
	scanf(" %d",&y2);
	a=x1-x2;
	if (a<0)
	{
		a=-a;
	}
	b=y1-y2;
	if (b<0)
	{
		b=-b;
	}
	printf("\n\a The manhattan distance is %d.",a+b);
	getch();
}
