# include <stdio.h>
# include <conio.h>
void main()
{
	long int x,a,i,b=0,c=0;
	printf("\n x= ");
	scanf(" %ld",&x);
	i=x;
	while (i!=0)
	{
		a=i%10;
		b+=a << c;
		++c;
		i=i/10;
	}
	printf("\n\a The decimal equivalent of %ld is : %ld.",x,b);
	getch();
}
