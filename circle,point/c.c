# include <stdio.h>
# include <conio.h>
# include <math.h>
struct point
{
	int x;
	int y;
};
struct circle
{
	struct point c;
	int r;
};
void intersect(struct circle c1,struct circle c2);
void position(struct circle c3,struct point po);
void sort(struct circle c4[],int n);
int main()
{
	int i,n;
	struct point po;
    struct circle c1,c2,c3,c4[10];
	printf("\n circle c1's centre and radius: ");
	scanf(" %d %d %d",&c1.c.x,&c1.c.y,&c1.r);
    printf("\n circle c2's centre and radius: ");
	scanf(" %d %d %d",&c2.c.x,&c2.c.y,&c2.r);
	intersect(c1,c2);
    printf("\n circle c3's centre and radius: ");
	scanf(" %d %d %d",&c3.c.x,&c3.c.y,&c3.r);
	printf("\n point po: ");
	scanf(" %d %d",&po.x,&po.y);
	position(c3,po);
	printf("\n n= ");
	scanf(" %d",&n);
	for (i=0;i<n;++i)
	{
		printf("\n circle %d's centre and radius: ",i+1);
		scanf(" %d %d %d",&c4[i].c.x,&c4[i].c.y,&c4[i].r);
	}
	sort(c4,n);
	getch();
	return 0;
}
void intersect(struct circle c1,struct circle c2)
{
	int d,e,g;
	float f;
	e=(c1.r)+(c2.r);
    d=((c1.c.x)-(c2.c.x))*((c1.c.x)-(c2.c.x))+((c1.c.y)-(c2.c.y))*((c1.c.y)-(c2.c.y));
	f=sqrt(d);
	g=(int)f;
	if(g>e)
	{
		printf("\n\a Not Intersect");
	}
	else if(g<e)
	{
		printf("\n\a Intersects");
	}
}
void position(struct circle c3,struct point po)
{
	int d,e,g;
	float f;
	d=c3.r;
	e=((c3.c.x)-(po.x))*((c3.c.x)-(po.x))+((c3.c.y)-(po.y))*((c3.c.y)-(po.y));
	f=sqrt(e);
    g=(int)f;
	if(g>d)
	{
		printf("\n\a Outside");
	}
	else if(g<d)
	{
		printf("\n\a Inside");
	}
	else if (g==d)
	{
		printf("\n\a On the boundary");
	}
}
void sort(struct circle c4[],int n)
{
	int j,k;
	struct circle temp[10];
	for(j=0;j<n;++j)
	{
		for(k=j+1;k<n;++k)
		{
			if(c4[j].r<c4[k].r)
			{
				temp[0]=c4[k];
				c4[k]=c4[j];
				c4[j]=temp[0];
				
			}
		}
	}
	printf("\n After sorting:");
	for(j=0;j<n;++j)
	{
		printf("\n\a %d %d %d",c4[j].c.x,c4[j].c.y,c4[j].r);
	}
}


