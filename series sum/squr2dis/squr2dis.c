# include <stdio.h>
# include <conio.h>
void main()
{
	int i,n,sum;
	printf("\n i= ");
	scanf(" %d",&i);
	printf("\n n= ");
	scanf(" %d",&n);
	sum=0;
	while (i<=n)
	{
			sum=sum+i*i;
			i+=2;
	}
	printf("\n\a The sum is %d.",sum);
	getch();
}