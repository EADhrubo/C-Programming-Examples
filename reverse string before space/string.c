# include <stdio.h>
# include <conio.h>
# include <string.h>
# include <stdlib.h>
int main ()
{
	char str[100],ch;
	int i;
	printf("\nEnter something: ");
	while(1)
	{
       i=0;
		while(1)
		{
			ch=getchar();
			if((ch==' ') || (ch=='\n'))
				break;
			str[i]=ch;
			++i;
		}
		str[i]='\0';
		strrev(str);
		printf("%s ",str);
		if(ch=='\n')
			break;
	}
	getch();
	return 0;
}
