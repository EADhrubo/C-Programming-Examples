# include <stdio.h>
# include <conio.h>
# include <math.h>
void main()
{
	float x1,y1,x2,y2,d;
	printf("\n x1= ");
	scanf(" %f",&x1);
	printf("\n x2= ");
	scanf(" %f",&x2);
	printf("\n y1= ");
	scanf(" %f",&y1);
	printf("\n y2= ");
	scanf(" %f", &y2);
	d=((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2));
	printf("\n distance between(%.2f,%.2f) and (%.2f,%.2f) is  %.2f.",x1,y1,x2,y2,sqrt(d));
	getch();
}


