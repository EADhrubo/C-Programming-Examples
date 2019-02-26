# include <stdio.h>
# include <conio.h>
void main()
{
	int x,y;
	printf("\n x= ");
	scanf("%d",&x);
	printf("\n y= ");
	scanf("%d",&y);
	printf("\n %d %d .",x++,y++);
	printf("\n %d %d .",++y,y=++x);
	printf("\n %d %d .",y,y=x++);
	printf("\n %d %d .",--y,x--);
	printf("\n %d %d .",y--,--x);
	printf("\n %d %d .",y,y=--x);
	getch();
	
}
