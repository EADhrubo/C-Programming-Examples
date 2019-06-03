# include <stdio.h>
# include <conio.h>
void square (int n);
void cube (int n);
int main ()
{
	int n;
	printf("\n n= ");
	scanf(" %d",&n);
	printf("\n  Number \t  Square ");
	square (n);
	printf("\n  Number \t  Cube ");
	cube (n);
	getch();
	return 0;
}
void square (int n)
{
	int i,s;
	for (i=1;i<=n;++i)
	{
		s=i*i;
        printf("\n    %d \t\t    %d  ",i,s);
	}
	
}
void cube (int n)
{
	int i,s;
	for (i=1;i<=n;++i)
	{
		s=i*i*i;
        printf("\n    %d \t\t    %d  ",i,s);
	}
}
	