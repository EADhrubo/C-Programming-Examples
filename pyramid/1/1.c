# include <stdio.h>
# include <conio.h>
void main()
{
	int n,i,a,c,d,e;
	printf("\n n= ");
	scanf(" %d",&n);
	for (i=1;i<=n;i++)
	{
		for (a=1;a<=(n-i);a++)
		{
			printf("     ");
		}
		c=i;
		for (;c<=2*i-1;c++)
			{
				printf("%5d",c);
			}
		--c;
		d=c;
		e=i;
			while (e<=(d-1))
			{
				printf("%5d",--c);
				++e;
			}
			printf("\n");
	}
	getch();
}


