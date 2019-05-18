# include <stdio.h>
# include <conio.h>
int main ()
{
	int a[30][30],b[30][30],c[30][30],i,j,k,M,N,E,D;
	printf("\n M= ");
	scanf(" %d",&M);
	printf("\n N= ");
	scanf(" %d",&N);
    printf("\n E= ");
	scanf(" %d",&E);
	printf("\n D= ");
	scanf(" %d",&D);
	if ((M==E) && (N==D))
	{
	for (i=0;i<M;++i)
	{
		for (j=0;j<N;++j)
		{
			printf("\n a[%d][%d]= ",i,j);
			scanf(" %d",&a[i][j]);
		}
	}
	for (i=0;i<M;++i)
	{
		for (j=0;j<N;++j)
		{
			printf("\n b[%d][%d]= ",i,j);
			scanf(" %d",&b[i][j]);
		}
	}
	printf("\n Matrix A \n");
    for (i=0;i<M;++i)
	{
		for (j=0;j<N;++j)
		{
			printf(" %2d",a[i][j]);
			
		}
		printf("\n");
	}
    printf("\n Matrix B \n");
	for (i=0;i<M;++i)
	{
		for (j=0;j<N;++j)
		{
			printf(" %2d",b[i][j]);
			
		}
		printf("\n");
	}
	printf("\n Matrix C \n");
    for (i=0;i<M;++i)
	{
		for (j=0;j<N;++j)
		{
			k=a[i][j]+b[i][j];
			c[i][j]=k;
		}
	}
    for (i=0;i<M;++i)
	{
		for (j=0;j<N;++j)
		{
			printf(" %2d",c[i][j]);
			
		}
		printf("\n");
	}
	}
	else
	{
		printf("\n\a Cannot add");
	}
	getch();
	return 0;
}

