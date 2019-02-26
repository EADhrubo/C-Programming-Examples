# include <stdio.h>
# include <conio.h>
int main()
{
	int x,a[10],i;
	char str[10],ch;
	float y;
	FILE *fp,*p;
	fp=fopen("F:\\Games\\programming\\file\\file1.txt","w+");
	printf("\n Enter two numbers: ");
	scanf(" %d %f",&x,&y);
	fprintf(fp,"%d %f",x,y);
	for(i=0;i<10;++i)
	{
		printf("\n a[%d]= ",i);
		scanf(" %d",&a[i]);
	}
	for(i=0;i<10;++i)
	{
		fprintf(fp," %d",a[i]);
	}
	printf("Enter something: ");
	fflush(stdin);
	gets(str);
	fprintf(fp,"\n%s",str);
	rewind(fp);
	p=fopen("F:\\Games\\programming\\file\\file2.txt","w");
	while((ch=fgetc(fp))!=EOF)
	{
		fprintf(p,"%c",ch);
	}
	fclose(fp);
	fclose(p);
	getch();
	return 0;
}
	



