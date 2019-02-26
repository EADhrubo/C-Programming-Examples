# include <stdio.h>
# include <conio.h>
# include <math.h>
int main()
{
	int i,n;
	double a,x,pi,sum,term;
	printf("\n x=");
	scanf("%lf",&x);
	printf("\n n=");
	scanf("%d",&n);
	a=x;
	sum=1;
	term=1;
	pi=3.14159;
	x*=pi*1.000/180;
	for(i=1;i<n;++i)
	{
		term*=-(x*x)/(2*i*(2*i-1));
		sum+=term;
	}
	printf("\n\a The value of cos(%lf)= %lf",a,sum);
	getch();
	return 0;
}


