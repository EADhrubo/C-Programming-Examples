# include <stdio.h>
# include <conio.h>
# include <string.h>
# include <stdlib.h>
int main()
{
	char str1[100],str2[100],str3[100];
	int i=0,a=0,b=0,c=0;
	printf("\n Enter 1st string:");
	gets(str1);
	printf("\n Enter 2nd string:");
	gets(str2);
	printf("\n Enter 3rd string:");
	gets(str3);
	printf("\n\a Julius caesar's message code is :");
	while(1)
	{
		if((a==1) || (str1[i]=='\0'))
			a=1;
		else
			printf("%c",str1[i]);
		if((b==1) || (str2[i]=='\0'))
			b=1;
		else
			printf("%c",str2[i]);
		if((c==1) || (str3[i]=='\0'))
			c=1;
		else
			printf("%c",str3[i]);
		if((a==1) && (b==1) && (c==1))
			break;
		++i;
	}
	getch();
	return 0;
}



