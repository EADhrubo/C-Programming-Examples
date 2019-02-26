# include <stdio.h>
# include <conio.h>
int recursive(int a);
int recursive(int a)
{
	if (a==1)
	{
		return 1;
	}
	else
	{
		return (a * recursive(a-1));
	}
}  
int main ()
{
	int a,x;
	printf("\n a= ");
	scanf(" %d",&a);
	x=recursive(a);
	printf("\n\a The factorial of %d is %d.",a,x);
	getch();
	return 0;
}