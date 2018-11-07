# include <stdio.h>
# include <conio.h>
void main()
{
	int a,b,c,d;
	printf("\n a= ");
	scanf(" %d",&a);
	printf("\n b= ");
	scanf(" %d",&b);
	printf("\n c= ");
	scanf(" %d",&c);
	printf("\n d= ");
	scanf(" %d",&d);
	if (((a>b) && (b>c) && (b>d)) || ((c>b) && (b>a) && (b>d)) || ((d>b) && (b>a) && (c<b)))
	{
		printf("\n\a 2nd largest is b=%d.",b);
	}
	else if (((a<b) && (a>c) && (a>d)) || ((c>a) && (b<a) && (a>d)) || ((d>a) && (b<a) && (c<a)))
	{
		printf("\n\a 2nd largest is a=%d.",a);
	}
	else if (((a>c) && (c>b) && (c>d)) || ((c<b) && (c>a) && (c>d)) || ((d>c) && (b<c) && (a<c)))
	{
		printf("\n\a 2nd largest is c=%d.",c);
	}
	else if (((a>d) && (d>b) && (d>c)) || ((d<b) && (d>a) && (c<d)) || ((c>d) && (b<d) && (a<d)))
	{
		printf("\n\a 2nd largest is d=%d.",d);
	}
	getch();
}