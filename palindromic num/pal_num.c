# include <stdio.h>
# include <conio.h>
void main ()
{
	int x=0,y,a,b,c=0,n;
	printf("\n n= ");
	scanf(" %d",&n);
	while (c!=n)
	{
		++x;
		y=x;
		b=0;
		while (y!=0)
		{
			a=y%10;
			b=b*10+a;
			y=y/10;
		}
		if (x==b)
		{
			++c;
		}
	}
	printf("\n\a %dth palindrome number is %d.",n,x);
	getch();
}




