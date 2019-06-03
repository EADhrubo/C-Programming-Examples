# include <stdio.h>
# include <conio.h>
# include <string.h>
# include <stdlib.h>
int main()
{
	char str[100];
	int i=0;
	printf("\n Enter something: ");
	gets(str);
	while(1)
	{
		if(str[i]=='\0')
			break;
		++i;
	}
	printf("\n\a The length of the given string is %d.",i);
	getch();
	return 0;
}
