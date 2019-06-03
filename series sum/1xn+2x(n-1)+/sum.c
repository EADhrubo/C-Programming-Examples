# include <stdio.h>
# include <conio.h>
void main ()
{
	int i,n,b,sum=0,c;
	printf("\n n= ");
	scanf(" %d",&n);
	b=n;
	for (i=1;i<=n;++i)
	{
		c=i*b;
		--b;
		sum=sum+c;
	}
	printf("\n\a The sum is %d.",sum);
	getch();
}
