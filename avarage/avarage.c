# include <stdio.h>
# include <conio.h>
int main ()
{
	int I,a[100],n,sum=0;
	float x;
	printf("\n I= ");
	scanf(" %d",&I);
	for (n=0;n<I;++n)
	{
		printf("Enter value : ");
		scanf(" %d",&a[n]);
		sum=sum+a[n];
	}
	x=(sum)*1.00/I;
	printf("\n\a The avarage is %f.",x);
	getch();
	return 0;
}
