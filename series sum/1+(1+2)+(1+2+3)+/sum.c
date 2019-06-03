# include <stdio.h>
# include <conio.h>
void main()
{
	int i,n,b=1,sum=0,a;
	printf("\n i,n: ");
	scanf("%d %d",&i,&n);
	for (a=0;b<=n;++b)
	{
		sum=sum+i;
		a+=sum;
		++i;
	}
	printf("\n\a The sum is %d",a);
	getch();
}