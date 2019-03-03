# include <stdio.h>
# include <conio.h>
void main()
{
	int x=2,y=1;
	printf("\n %d %d ",y++,x++);
	printf("\n %d %d ",y,y=x++);
	printf("\n %d %d ",++y,++x);
	printf("\n %d %d ",y++,x++);
	printf("\n %d %d ",++y,y=++x);
	printf("\n %d %d ",y,x); 
	getch();
}
