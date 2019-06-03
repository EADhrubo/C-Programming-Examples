# include <stdio.h>
# include <conio.h>
void main()
{
	int x,y,z,a;
	float ratio;
	printf(" x,y,z,a: ");
	scanf(" %d %d %d %d",&x,&y,&z,&a);
	if (z==a)
	{
		printf("\n Ratio is infinity.");
	}
	ratio=(float) (x-y)/(float) (z-a);
	printf("\n\a The ratio is %f.",ratio);
	getch();
}