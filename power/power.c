# include <stdio.h>
# include <conio.h>
void main()
{
	unsigned long int x,y,i=2,a;
	printf("\n x,y: ");
	scanf("%ld %ld",&x,&y);
	a=x;
	while (i<=y)
	{
		
		a=a*x;
		
		i++;
	}
	printf("\n\a %ld^%ld = %ld",x,y,a);
	getch();
}
