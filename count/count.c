# include <stdio.h>
# include <conio.h>
void main()
{
	int x;
	printf("\n First loop :\n");
	for (x=5;x<=19;x++)
	{
		printf("\a %d",x);
	}
	printf("\n Second loop :\n");
	for (x=3;x<=14;x+=4)
	{
		printf("\a %d",x);
	}
	printf("\n Third loop :\n");
	for (x=124;x>58;x-=16)
	{
		printf("\a %d",x);
	}
	getch();
}
