# include <stdio.h>
# include <conio.h>
void main()
{
	int i,n,b,a,c,d,f;
	printf("\n i= ");
	scanf(" %d",&i);
	printf("\n n= ");
	scanf(" %d",&n);
	f=i;
	d=0;
	printf("\n Armstrong numbers : \n");
    for (;i<=n;i++)
	{
		b=0;
		a=i;
		while (a!=0)
		{
			c=a%10;
			b+=c*c*c;
			a=a/10;
		}
		if (b==i)
		{
			++d;
			printf(" %d",i);
		}
	}
	printf("\n\a There are %d armstrong numbers between %d and %d.",d,f,n);
	getch();
}
