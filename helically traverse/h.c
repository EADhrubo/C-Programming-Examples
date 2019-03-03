# include <stdio.h>
# include <conio.h>
int main()
{
	int a[100][100],i,j,M,N,b,c;
	printf("\n M=");
	scanf("%d",&M);
	printf("\n N=");
	scanf("%d",&N);
	for(i=0;i<M;++i)
	{
		for(j=0;j<N;++j)
		{
			printf("\n a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n Given Matrix is:\n");
	for(i=0;i<M;++i)
	{
		for(j=0;j<N;++j)
		{
			printf("%2d",a[i][j]);
		}
		printf("\n");
	}
	printf("\n Helically traverse:");
	b=M;
	c=N;
	j=0;
	while(1)
	{
		if((b==0) && (c==0))
			break;
		for(i=j;j<c;++j)
		{
			if(a[i][j]==-1)
				break;
			printf("%2d",a[i][j]);
			a[i][j]=-1;
		}
		--j;
		++i;
		for(;i<b;++i)
		{
			if(a[i][j]==-1)
				break;
			printf("%2d",a[i][j]);
			a[i][j]=-1;
		}
		--i;
		--j;
		for(;j>=0;--j)
		{
			if(a[i][j]==-1)
				break;
			printf("%2d",a[i][j]);
			a[i][j]=-1;
		}
		++j;
		--i;
		for(;i>=0;--i)
		{	
			if(a[i][j]==-1)
				break;
			printf("%2d",a[i][j]);
			a[i][j]=-1;
		}
		++j;
		--b;
		--c;
	}
	getch();
	return 0;
}







