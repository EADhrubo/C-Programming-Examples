# include <stdio.h>
# include <conio.h>
void main()
{
	int i,n,sum,a,b=1;
	printf("\n i,n= ");
	scanf("%d %d",&i,&n);
	sum=0;
	while (b<=n)
	{
		
		if ((i%2)==0)
		{
			a=-i;
		}
		else
		{
			a=i;
		}
		sum=sum+a;
		++b;
		++i;
	}
	printf("\n\a The sum is %d.",sum);
	getch();
}