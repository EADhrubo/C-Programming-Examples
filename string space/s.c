# include <stdio.h>
# include <conio.h>
# include <string.h>
# include <stdlib.h>
int main()
{
	char str1[100],str2[100],str3[100];
	int i=0;
	printf("\n Enter something:");
	gets(str1);
	while(1)
	{
		if(str1[i]=='\0')
			break;
		
