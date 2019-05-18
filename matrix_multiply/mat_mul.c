# include <stdio.h>
# include <conio.h>
int main ()
{
	int a[20][20],b[20][20],c[20][20],i,j,k,sum,M,N,F,G;
	printf("\n M= ");
	scanf(" %d",&M);
    printf("\n N= ");
	scanf(" %d",&N);
	printf("\n F= ");
	scanf(" %d",&F);
	printf("\n G= ");
	scanf(" %d",&G);
	if (N==F)
	{
		for (i=0;i<M;++i)
		{
			for (j=0;j<N;++j)
			{
				printf("\n a[%d][%d]= ",i,j);
				scanf(" %d",&a[i][j]);
			}
		}
		for (i=0;i<F;++i)
		{
			for (j=0;j<G;++j)
			{
				printf("\n b[%d][%d]= ",i,j);
				scanf(" %d",&b[i][j]);
			}
		}
		printf("\n Matrix A : ");
		for (i=0;i<M;++i)
		{
			printf("\n\t");
			for (j=0;j<N;++j)
			{
				printf("\t %d",a[i][j]);
			}
		}
		printf("\n Matrix B : ");
		for (i=0;i<F;++i)
		{
			printf("\n\t");
			for (j=0;j<G;++j)
			{
				printf("\t %d",b[i][j]);
			}
		}
		printf("\n Matrix C : ");
		for (i=0;i<M;++i)
		{
			for (j=0;j<G;++j)
			{
				sum=0;
				for (k=0;k<N;++k)
				{
					sum=sum+a[i][k]*b[k][j];
				}
				c[i][j]=sum;
			}
		}
		for (i=0;i<M;++i)
		{
			printf("\n\t");
			for (j=0;j<G;++j)
			{
				printf("\t %d",c[i][j]);
			}
		}
	}
	else
	{
		printf("\n\a Cannot multiply");
	}
	getch();
	return 0;
}



