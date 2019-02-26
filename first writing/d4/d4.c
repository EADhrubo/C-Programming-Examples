# include <stdio.h>
# include <conio.h>
void main()
{
	int a,b,c,d,e;
	float f;
	printf("\n a= ");
	scanf("%d",&a);
	printf("\n b= ");
	scanf("%d",&b);
	c=a+b;
	d=a-b;
	e=a*b;
	f=a*1.000/b;
	printf("\n c= %d,d= %d,e= %d,f= %f.",c,d,e,f);
	getch();
}