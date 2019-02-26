# include <stdio.h>
# include <conio.h>
# include <math.h>
int func(int j);
int main ()
{
	int x,n,c,j;
	double a,y,sum,k;
	printf("\n x,n= ");
	scanf(" %d %d",&x,&n);
	a=22*1.00/7;
	y=x*a/180;
	for (c=1,j=0,sum=1;c<=n;++c)
	{
		j+=2;
		k=pow(-1,c)*pow(y,j)*1.000/func(j);
		sum+=k;
	}
	printf("\n\a cos(%d)= %lf.",x,sum);
	getch();
	return 0;
}
int func(int j)
{
	int i,p;
	for (i=1,p=1;i<=j;++i)
	{
		p*=i;
	}
	return p;
}

	