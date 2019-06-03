# include <stdio.h>
# include <conio.h>
# include <string.h>
# include <stdlib.h>
int main ()
{
	char str1[100],str2[100];
	int i=0,j=0;
	printf("\n 1st string: ");
	gets(str1);
	printf("\n 2nd string: ");
	gets(str2);
	while(1)
	{
		if(str1[i]=='\0')
			break;
		++i;
	}
	while(1)
	{
		if(str2[j]=='\0')
		{
			str1[i]='\0';
			break;
		}
		str1[i]=str2[j];
		++i;
		++j;
	}
	printf("\n\a After concatenation: %s",str1);
	getch();
	return 0;
}



