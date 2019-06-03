# include <stdio.h>
# include <conio.h>
void main()
{
	unsigned long int i,n,a=2,b,c,sum=0;
	printf("\n i,n: ");
	scanf("%ld %ld",&i,&n);
	while (i<=n)
	{
		b=i;
		c=i;
		
		while (a<=b)
		{
			c=c*i;
			--b;
		}
		sum+=c;
		i++;
	}
	printf("\n\a The sum is %ld.",sum);
	getch();
}


