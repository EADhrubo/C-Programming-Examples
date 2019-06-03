# include <stdio.h>
# include <conio.h>
void main()
{
	int year,month,day,x;
	printf(" Enter your number: ");
	scanf(" %d", &day);
	year=day/365;
	x=day%365;
	month=x/30;
	day=x%30;
	printf("\n year= %d,month= %d,day= %d.",year,month,day);
	getch();
}