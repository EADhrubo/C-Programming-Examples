# include <stdio.h>
# include <conio.h>
# include <math.h>
int main ()
{
	long int a[50],x,c,b,i,j,sum;
	printf("\n Enter a number: ");
	scanf(" %ld",&x);
	b=x;
	i=0;
	while (b)
	{
		a[i]=b%10;
		b=b/10;
		++i;
	}
	--i;
	c=i;
	for (sum=0,j=0,i=0;i<=c;++i)
	{
		sum+=a[i]*pow(2,j);
		++j;
	}
	printf("\n\a The decimal form of this binary number is %d.",sum);
	getch();
	return 0;
}
