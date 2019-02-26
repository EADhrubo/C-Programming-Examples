# include <stdio.h>
# include <conio.h>
void main()
{
	int month,day;
	printf("\n month= ");
	scanf(" %d",&month);
	printf("\n day= ");
	scanf(" %d",&day);
	if (month==1)
	{
		day=day;
	}
	else if (month==2)
	{
		day=day+31;
	}
	else if (month==3)
	{
		day=day+31+28;
	}
	else if (month==4)
	{
		day=day+31+28+31;
	}
	else if (month==5)
	{
		day=day+31+28+31+30;
	}
	else if (month==6)
	{
		day=day+31+28+31+30+31;
	}
	else if (month==7)
	{
		day=day+31+28+31+30+31+30;
	}
	else if (month==8)
	{
		day=day+31+28+31+30+31+30+31;
	}
	else if (month==9)
	{
		day=day+31+28+31+30+31+30+31+31;
	}
	else if (month==10)
	{
		day=day+31+28+31+30+31+30+31+31+30;
	}
	else if (month==11)
	{
		day=day+31+28+31+30+31+30+31+31+30+31;
	}	
	else if (month==12)
	{
		day=day+31+28+31+30+31+30+31+31+30+31+30;
	}
	if (day%7==1)
	{
		printf("\n Tuesday.");
	}
	else if (day%7==2)
	{
		printf("\n Wednesday.");
	}
	else if (day%7==3)
	{
		printf("\n Thursday.");
	}
	else if (day%7==4)
	{
		printf("\n Friday.");
	}
	else if (day%7==5)
	{
		printf("\n Saturday.");
	}
	else if (day%7==6)
	{
		printf("\n Sunday.");
	}
	else if (day%7==0)
	{
		printf("\n Monday.");
	}
	getch();
}

