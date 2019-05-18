# include <stdio.h>
# include <conio.h>
void main()
{
	int hour,minute,second,x;
	printf("\n Enter your number: ");
	scanf("%d",&second);
	hour=second/3600;
	x=second%3600;
	minute=x/60;
	second=x%60;
	printf("\n hour=%d \n minute=%d \n second=%d.",hour,minute,second);
	getch();
}
