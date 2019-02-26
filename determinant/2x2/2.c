# include <stdio.h>
# include <conio.h>
int main()
{
	int a[2][2],i,j,d;
	for(i=0;i<2;++i)
	{
		for(j=0;j<2;++j)
		{
			printf("\n a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n Given Matrix:\n");
	for(i=0;i<2;++i)
	{
		for(j=0;j<2;++j)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	d=a[0][0]*a[1][1]-a[1][0]*a[0][1];
	printf("\n\a The determinant of the given matrix is %d",d);
	getch();
	return 0;
}
