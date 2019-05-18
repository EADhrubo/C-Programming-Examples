# include <stdio.h>
# include <conio.h>
int main ()
{
	int a[100],i,j,temp,n,d,c,b[100];
	printf("\n n= ");
	scanf(" %d",&n);
	for (i=0;i<n;++i)
	{
		printf("\n a[%d]= ",i);
		scanf(" %d",&a[i]);
	}
	printf("\n a[%d]=",n);
	for (i=0;i<n;++i)
	{
		printf("  %d",a[i]);
	}
	c=0;
	for (i=0,j=1;j<n;++i,++j)
	{
		if (a[i]==a[j])
		{
			d=1;
			for (;j<n;++i,++j)
			{
				if (a[i]==a[j])
				{
					++d;
				}
				else
					break;
			}
			b[c]=d;
			++c;
		}
	}
	for (i=0;i<n;++i)
	{
		for (j=i+1;j<n;++j)
		{
			if (b[i]<b[j])
			{
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		}
	}
	printf("\n\a Maximum contiguous segment is  %d",b[0]);
	getch();
	return 0;
}
