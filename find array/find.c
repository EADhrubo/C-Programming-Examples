# include <stdio.h>
# include <conio.h>
int main ()
{
	int a[10],b[5],i,j,d,k,m;
	for (i=0;i<10;++i)
	{
		printf("\n a[%d]=  ",i);
		scanf(" %d",&a[i]);
	}
    for (i=0;i<5;++i)
	{
		printf("\n b[%d]=  ",i);
		scanf(" %d",&b[i]);
	}
	printf("\n a[10]= ");
	for (i=0;i<10;++i)
	{
		printf(" %d",a[i]);
	}
	printf("\n b[5]= ");
	for (i=0;i<5;++i)
	{
		printf(" %d",b[i]);
	}
	for (i=0,j=0;i<10;++i)
	{
		if (a[i]==b[j])
		{
			d=0;
			for (k=i,m=0;m<5;++m,++k)
			{
				if (a[k]==b[m])
				{
					++d;
				}
			}
		}
		if (d==5)
		{
			printf("\n\a Yes ");
			goto no;
		}
	}
	printf("\n\a No ");
no:
	getch();
	return 0;
}




