# include <stdio.h>
# include <conio.h>
void main()
{
	int x,i=0,a,b;
	printf("\n x= ");
	scanf(" %d",&x);
	b=x;
	do
	{
        a=b%10;
		b=b/10;
		i+=a;
	}while (b!=0);
	printf("\n\a The sum of the numbers of %d is %d.",x,i);
	getch();
}


