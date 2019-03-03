# include <stdio.h>
# include <conio.h>
# include <string.h>
# include <stdlib.h>
void strminus (char str1[],char str2[]);
int main ()
{
	char str1[100],str2[100], *p;
	int i=1,b=0,c=0,l,N=10;
	printf("\n Enter a secret word : ");
	gets(str1);
	system("cls");
	l=strlen(str1);
	printf("\n The secret word consists of %d letter",l); 
	while ((b!=N) && (c!=l))
	{
		printf("\n Enter a letter : ");
		gets(str2);
		p=strstr(str1,str2);
		if (p)
		{
			printf("\n\a RIght");
			strminus(str1,str2);
			++c;
			++i;
		}
		else
		{
			printf("\n\a WroNg");
			++b;
		}
	}
	if (b==N)
	{
		printf("\n\a SORRY !!! You've failed \n Try again ");
	}
	else
	{
		printf("\n\a CONGRATULATION !!! You've won ");
	}
	getch();
	return 0;
}
void strminus (char str1[],char str2[])
{
	char str3[100];
	int x=0,l;
	l=strlen(str1);
	for (;x<l;++x)
	{
		if (str1[x]==str2[0])
		{
			strrev(str1);
			strcpy(str3,str1);
			strcpy(str3+l-x-1,str3+l-x);
			strcpy(str1,str3);
			strrev(str1);
		}
	}
}

