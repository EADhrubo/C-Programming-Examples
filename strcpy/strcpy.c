# include <stdio.h>
# include <conio.h>
# include <string.h>
# include <stdlib.h>
int main()
{
	char str1[100],str2[100];
	int i=0;
	printf("\n Enter something: ");
	gets(str1);
	while(1)
	{
		if(str1[i]=='\0')
		{
			str2[i]='\0';
			break;
		}
		str2[i]=str1[i];
		++i;
	}
	printf("\n\a The copy of the given string is :%s",str2);
	getch();
	return 0;
}
