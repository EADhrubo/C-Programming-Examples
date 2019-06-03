# include <stdio.h>
# include <conio.h>
void main ()
{
	int x,i,n,b;
	printf("\n n= ");
	scanf(" %d",&n);
	b=2;
	x=3;
	while (b<n)
	{
		++x;
		for (i=2;i<=(x/2);++i)
		{
			
			if ((x%i)==0)
			{
				goto no;
			}
		}
		++b;
no:
	;}
	printf("\n\a %dth prime number is %d.",n,x);
	getch();
}




