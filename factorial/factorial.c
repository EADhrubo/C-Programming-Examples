# include <stdio.h>
# include <conio.h>
void main()
{
	int x,i,a=1;
	printf("\n x= ");
	scanf(" %d",&x);
	i=x;
	for(;i!=0;--i)
	{
		a=a*i;
	}
	printf("\n\a The factorial of %d is %d.",x,a);
	getch();
}