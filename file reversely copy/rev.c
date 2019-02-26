# include <stdio.h>
# include <conio.h>
int main()
{
	int i,x;
	char ch;
	FILE *fp,*p;
	fp=fopen("F:\\Games\\programming\\file\\file2.txt","r");
	p=fopen("F:\\Games\\programming\\file\\file3.txt","w");
	fseek(fp,0,2);
	x=ftell(fp);
	for(i=1;i<=x;++i)
	{
		fseek(fp,-i,2);
		ch=fgetc(fp);
		fprintf(p,"%c",ch);
	}
	fclose(fp);
	fclose(p);
	getch();
	return 0;
}
