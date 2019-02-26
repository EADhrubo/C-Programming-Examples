# include <stdio.h>
# include <conio.h>
void main()
{
	int r,i,n;
	printf("\n r= ");
	scanf(" %d",&r);
	printf("\n n= ");
	scanf(" %d",&n);
	printf("Even numbers : \n");
	i=r;
	for (;i<=n;i++)
	{
		if (i%2==0)
		{
			printf("\a %d ",i);
		}
	}
	printf("\n Odd numbers : \n");
	for (;r<=n;r++)
	{
		if (r%2!=0)
		{
			printf("\a %d ",r);
		}
	}
	getch();
}
