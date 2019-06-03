# include <stdio.h>
# include <conio.h>
# include <string.h>
# include <stdlib.h>
int main()
{
	char str1[100],str2[100];
	int i,p,b;
	printf("\n Enter 1st string:");
	gets(str1);
	printf("\n Enter 2nd string:");
	gets(str2);
	i=0;
	b=0;
	while(1)
	{
		if(str1[i]!=str2[i])
			++b;
		++i;
		if(str1[i]=='\0')
			break;
	}
	if(b)
		printf("\n\a p=1");
	else
		printf("\n\a p=0");
	p=strcmp(str1,str2);
	printf("\n\a p=%d",p);
	getch();
	return 0;
}
			
