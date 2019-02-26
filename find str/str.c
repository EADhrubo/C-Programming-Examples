# include <stdio.h>
# include <conio.h>
# include <string.h>
# include <stdlib.h>
int main ()
{
	char str1[100],str2[10],str3[10],str4[100];
	int i,j,k,l1,l2,l3,b;
	printf("\n Enter first string : ");
	gets(str1);
	printf("\n Enter second string : ");
	gets(str2);
	printf("\n Enter third string : ");
	gets(str3);
	l1=strlen(str1);
	l2=strlen(str2);
	l3=strlen(str3);
	strcpy(str4,str1);
	for (i=0;i<l1;++i)
	{
		k=i;
		j=0;
		b=0;
		while (j<l2)
		{
			if (str1[k]==str2[j])
			{
				++b;
			}
			++k;
			++j;
		}
		if (b==l2)
		{
			strcpy(str4+i,str3);
			strcat(str4+i+l3,str1+i+l2);
			strcpy(str1,str4);
		}
	}
	printf("\n Now first string is %s",str1);
	getch();
	return 0;
}

