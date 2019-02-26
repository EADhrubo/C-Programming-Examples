# include <stdio.h>
# include <conio.h>
int main()
{
	int a[3][3],i,j,d;
	for(i=0;i<3;++i)
	{
		for(j=0;j<3;++j)
		{
			printf("\n a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n Given Matrix is:\n");
	for(i=0;i<3;++i)
	{
		for(j=0;j<3;++j)
		{
			printf("%2d\t",a[i][j]);
		}
		printf("\n");
	}
	d=a[0][0]*(a[1][1]*a[2][2]-a[2][1]*a[1][2])-a[0][1]*(a[1][0]*a[2][2]-a[2][0]*a[1][2])+a[0][2]*(a[1][0]*a[2][1]-a[2][0]*a[1][1]);
	printf("\n\a The determinant of the given matrix is %d.",d);
	getch();
	return 0;
}