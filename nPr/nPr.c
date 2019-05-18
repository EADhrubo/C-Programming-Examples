# include <stdio.h>
# include <conio.h>
int func(int x,int y);
int main ()
{
	int n,r,a;
	printf("\n n= ");
	scanf(" %d",&n);
	printf("\n r= ");
	scanf(" %d",&r);
	a=func(n,r);
	printf("\n %dP%d is %d.",n,r,a);
	getch();
	return 0;
}
int func(int x,int y)
{
	static int b=0;
	if (b==y)
	{
		return 1;
	}
	else
	{
		++b;
		return (x*func((x-1),y));
	}
}