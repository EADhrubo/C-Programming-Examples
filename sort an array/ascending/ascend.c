# include <stdio.h>
# include <conio.h>
int main ()
{
	int a[100],i,j,n,temp;
	printf("\n n= ");
	scanf(" %d",&n);
	for (i=0;i<n;++i)
	{
		printf("\n a[%d]=  ",i);
		scanf(" %d",&a[i]);
	}
	printf("\n a[%d]=",n);
	for (i=0;i<n;++i)
	{
		printf(" %d",a[i]);
	}
	for (i=0;i<n;++i)
	{
		for (j=i+1;j<n;++j)
		{
			if (a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\n After sorting this array by ascending order\n a[%d]=",n);
    for (i=0;i<n;++i)
	{
		printf(" %d",a[i]);
	}
	getch();
	return 0;
}
