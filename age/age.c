# include <stdio.h>
# include <conio.h>
void main()
{
	int d1,d2,y1,y2,m1,m2,a,b,c;
	printf("\n Enter present day: ");
	scanf(" %d %d %d", &d1,&m1,&y1);
	printf("\n Enter birthday: ");
	scanf(" %d %d %d", &d2,&m2,&y2);
	if (d1>=d2)
	{
		a=d1-d2+1;
		if (m1>=m2)
		{
			b=m1-m2;
			c=y1-y2;
			printf("\n\a Your age is %d years %d months %d days.",c,b,a);
		}
		else 
		{
			b=m1+12-m2;
			c=y1-y2-1;
			printf("\n\a Your age is %d years %d months %d days.",c,b,a);
		}
	}
	else 
	{
		a=d1+30-d2;
		if (m1>=m2)
		{
			b=m1-m2-1;
			c=y1-y2;
			printf("\n\a Your age is %d years %d months %d days.",c,b,a);
		}
		else 
		{
			b=(m1+12)-(m2+1);
			c=y1-y2-1;
			printf("\n\a Your age is %d years %d months %d days.",c,b,a);
		}
	}
	getch();
}
