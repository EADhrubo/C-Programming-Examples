#include <stdio.h>
#include <conio.h>
int main()
{
    int a[100][100]={0},i,j,k=1,x,y,n,b[100],c[100],p,q;
	printf("\n n= ");
	scanf(" %d",&n);
    /*constructing magic box*/
	if(n%2)
	{
		i=n-1;
		j=n/2;
		while(k<=n*n)
		{
            if((i==n) && (j<0))
			{
				++j;
				i-=2;
			}
			if(i==n)
			{
				i=0;
			}
			if(j<0)
			{
				j=n-1;
			}
			
			if(a[i][j]==0)
			{
				a[i][j]=k;
				++k;
			}
			else
			{
				i-=2;
				j+=1;
				a[i][j]=k;
				++k;
			}
			++i;
			--j;
		}
	}	
	for(i=0;i<n;++i)
	{
		for(j=0;j<n;++j)
		{
			
			printf(" %5d",a[i][j]);
		}
		printf("\n\a");
	}
	/*check whether it is magic box*/
	for(i=0;i<n;++i)
	{
		x=0;
		for(j=0;j<n;++j)
		{
			x+=a[i][j];
		}
		b[i]=x;
	}
    for(j=0;j<n;++j)
	{
		y=0;
		for(i=0;i<n;++i)
		{
			y+=a[i][j];
		}
		c[j]=x;
	}
	for(i=0;i<n;++i)
	{
		printf(" %5d",b[i]);
	}
	printf("\n");
    for(i=0;i<n;++i)
	{
		printf(" %5d",c[i]);
	}
	p=0;
	for(i=1;i<n;++i)
	{
		if(b[0]!=b[i])
			++p;
	}
	q=0;
	for(i=1;i<n;++i)
	{
		if(c[0]!=c[i])
			++q;
	}
	if((p==0) && (q==0))
	{
		printf("\n\a Yes! It is a Magic box.");
	}
	else
	{
		printf("\n\a No! It's not a Magic box.");
	}
    getch();
    return 0;
}
