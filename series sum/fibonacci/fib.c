# include <stdio.h>
# include <conio.h>
void main()
{
	int i=0,n,a=0,b=1,c,d;
	printf("\n n= ");
	scanf(" %d",&n);
	n=n-2;
	c=a+b;
	printf("\n Fibonacci series : \n 0 1");
	while (i<=n)
	{
        printf(" %d",c);
		d=c;
		c=c+b;
		b=d;
		++i;
		
	}
	getch();
}



	
