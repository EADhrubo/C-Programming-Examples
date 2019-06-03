# include <stdio.h>
# include <conio.h>
# include <string.h>
# include <stdlib.h>
int main ()
{
	char str[100],str1[100];
	int i,j=0;
	printf("\n Enter something: ");
	gets(str);
	while (1)
	{
		i=0;
		while (1)
		{
			if((str[j]==' ') || (str[j]=='\0'))
				break;
			str1[i]=str[j];
			++i;
			++j;
		}
		str1[i]='\0';
		strrev(str1);
		printf("%s ",str1);
        if (str[j]=='\0')
			break;
		++j;
	}
	getch();
	return 0;
}



