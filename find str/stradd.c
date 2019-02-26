# include <stdio.h>
# include <conio.h>
# include <string.h>
# include <stdlib.h>
int main()
{
	char str1[100],str2[100],str3[100],*p;
	int l1,l3,i=0,b=0;
	printf("\n Enter 1st string: ");
	gets(str1);
	printf("\n Enter 2nd string: ");
	gets(str2);
	printf("\n Enter 3rd string: ");
	gets(str3);
	l1=strlen(str1);
	l3=strlen(str3);
	p=strstr(str1,str2);
	if(!p)
	{
		printf("\n\a Not Found");
		goto no;
	}
	while(1)
	{
		if(i==l1)
			break;
		p=strstr(str1+i,str2);
		if(!p)
			break;
		strncpy(p,str3,l3);
		++b;
		++i;
	}
	printf("\n\a After finding and replacing 1st string is:%s",str1);
	printf("\n\a Considering overlapping %s is in %s at %d times.",str2,str1,b);
no:
	getch();
	return 0;
}