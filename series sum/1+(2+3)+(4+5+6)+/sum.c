# include <stdio.h>
# include <conio.h>
void main()
{
	int i,n,a,b=1,sum=0,c;
	printf("\n i,n= ");
	scanf("%d %d",&i,&n);
	sum=0;
	c=i;
	while (b<=n)
	{
		a=1;
		while (a<=b)
		{
			sum=sum+c;
			++a;
			++c;
		}
		++b;
	}
	printf("\n\a The sum is %d.",sum);
	getch();
}

	