# include <stdio.h>
# include <conio.h>
void main()
{
	float h1=0,m1=20,h2=0,m2=10,x,y,z,c,v,b,n,m;
	x=h1*60+20;
	y=h2*60+10;
	z=360-x;
	c=z*.25;
	v=360*.5;
	b=360*1;
	n=360*.75;
	m=y*.25;
	printf("\n The bill is %f.",c+v+b+n+m);
	getch();
}
