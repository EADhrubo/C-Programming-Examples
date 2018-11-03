# include <stdio.h>
# include <conio.h>
# include <math.h>
int main()
{
	int n,i;
	double pi,x,a,term,sum;
	printf("\n x=");
	scanf("%lf",&x);
	printf("\n n=");
	scanf("%d",&n);
	a=x;
	pi=3.14159;
	x*=pi*1.000/180;
	sum=x;
	term=x;
	for(i=1;i<n;++i)
	{
		term*=-(x*x)/(2*i*(2*i+1));
		sum+=term;
		
	}
	printf("\n\a The value of sin(%lf)= %lf",a,sum);
	getch();
	return 0;
}


