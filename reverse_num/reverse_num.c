# include <stdio.h>
# include <conio.h>
void main()
{
	int x,i,a,sum;
	printf("\n x= ");
	scanf(" %d",&x);
	sum=0;
	a=x;
	do
	{
		i=a%10;
		a=a/10;
		sum=sum*10+i;
	}while (a!=0);
	printf("\n\a The sum of given number %d and reverse number %d is %d.",x,sum,x+sum);
	getch();
}

