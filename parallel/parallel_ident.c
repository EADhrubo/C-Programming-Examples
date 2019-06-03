# include <stdio.h>
# include <conio.h>
void main()
{
	int a1,b1,c1,a2,b2,c2;
	printf("\n a1= ");
	scanf(" %d",&a1);
	printf("\n b1= ");
	scanf(" %d",&b1);
	printf("\n c1= ");
	scanf(" %d",&c1);
	printf("\n a2= ");
	scanf(" %d",&a2);
	printf("\n b2= ");
	scanf(" %d",&b2);
	printf("\n c2= ");
	scanf(" %d",&c2);
	if (a1*b2==a2*b1)
	{
		printf("\n\a Two straight lines are parallel.");
	}
    else if ((float) a1/a2==(float) b1/b2==(float) c1/c2)
	{
		printf("\n\a Two straight lines are identical.");
	}
	else if (a1*a2==-b1*b2)
	{
		printf("\n\a Two straight lines are parpendicular.");
	}
	else
	{
		printf("\n\a Sorry,Neither of them .");
	}
	getch();
}
