# include <stdio.h>
# include <conio.h>
void main()
{
	unsigned long int i,sum,n;
	printf("\n i= ");
	scanf(" %ld",&i);
	printf("\n n= ");
	scanf(" %ld",&n);
	for (i,sum=0;i<=n;i++)
	{
		sum+=i;
	}
	printf("\n\a The sum is %ld.",sum);
	getch();
}