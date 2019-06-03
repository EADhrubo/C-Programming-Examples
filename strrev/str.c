# include <stdio.h>
# include <conio.h>
# include <string.h>
# include <stdlib.h>
int main ()
{
	char str[100],str1[100];
	int i,j,l;
	printf("\n Enter something: ");
	gets(str);
	l=strlen(str);
	for(i=0,j=l-1;j>=0;++i,--j)
	{
		str1[i]=str[j];
	}
	str1[i]='\0';
	puts(str1);
	getch();
	return 0;
}


