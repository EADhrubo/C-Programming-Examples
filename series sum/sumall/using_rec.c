# include <stdio.h>
# include <conio.h>
int recursive(int i,int n);
int main ()
{
	int x,i,n,b;
	printf("\n i= ");
	scanf(" %d",&i);
	printf("\n n= ");
	scanf(" %d",&n);
	b=n;
	x=recursive(i,n);
	printf("\n\a The sum of %d to %d is %d.",i,b,x);
	getch();
	return 0;
}
int recursive(int i,int n)
{
	if (n==i)
	{
		return i;
	}
	else
	{
		return (n+recursive(i,n-1));
	}
}