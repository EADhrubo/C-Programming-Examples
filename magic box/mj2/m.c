#include<stdio.h>
#include<conio.h>
int main()
{
int num[100][100]= {0},i,j,n,k=1,p_i,p_j;
scanf("%d",&n);
if(n%2)
{
i=0;
j=n/2;
while(k<=n*n)
{
if(i<0)
i=n-1;
if(j>=n)
j=0;
if(num[i][j]==0)
{
num[i][j]=k++;
p_i=i;
p_j=j;
i--;
j++;
}
else
{
i=p_i;
j=p_j;
i++;
}
}

for(i=0; i<n; i++)
{
for(j=0; j<n; j++)
{
printf("%2d ",num[i][j]);
}
printf("\n\n\n");
}
}
//n even hole ki hoy ektu pore dibo,eta aro easy...
/*else
{
}*/
getch();
return 0;
}