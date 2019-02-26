# include <stdio.h>
# include <conio.h>
int main ()
{
	int a[30],x,i=0,b;
	printf("\n Enter a number: ");
	scanf(" %d",&x);
	b=x;
	while (b!=0)
	{
		a[i]=b%2;
		b=b/2;
		++i;
	}
	--i;
	printf("\n\a The binary form of the decimal number is : ");
	for (;i>=0;--i)
	{
		printf("%d",a[i]);
	}
	getch();
	return 0;
}