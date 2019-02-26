# include <stdio.h>
# include <conio.h>
int main ()
{
	int a[10][10],i,j,k,b[10][10],s2=0,s3=0,c,d;
	printf("\n Enter matrix size: ");
	scanf(" %d",&k);
	for (i=0;i<k;++i)
	{
		for (j=0;j<k;++j)
		{
			printf("\n a[%d][%d]= ",i,j);
			scanf(" %d",&a[i][j]);
		}
	}
	for (i=0;i<k;++i)
	{
		for (j=0;j<k;++j)
		{
			if (i==j)
			{
				c=0;
				d=j;
				b[c][d]=a[i][j];
			}
			else if (i>j)
			{
				s2=s2+a[i][j];
			}
			else if (i<j)
			{
				s3=s3+a[i][j];
			}
		}
	}
	printf("\n\a The main diagonal elements are : ");
	for (c=0,d=0;d<k;++d)
	{
		printf(" %d",b[c][d]);
	}
	printf("\n\a Sum of elements above the diagonal : %d",s3);
    printf("\n\a Sum of elements below the diagonal : %d",s2);
	getch();
	return 0;
}




