# include <stdio.h>
# include <conio.h>
# include <stdlib.h>
# include <string.h>
int main()
{
	char str1[100],str2[100],str3[100]="";
	int i=0,j;
	printf("\n Enter something:");
	gets(str1);
	while(1)
	{
		j=0;
		while(1)
		{
			if((str1[i]==' ') || (str1[i]=='\0'))
				break;
			str2[j]=str1[i];
			++i;
			++j;
		}
        if(j)
		{
			str2[j]='\0';
			strcat(str3,str2);
			if(str1[i]=='\0')
				break;
			strcat(str3," ");
		}
		if(str1[i]=='\0')
			break;
		++i;
	}
	printf("\n\a The new string is %s",str3);
	getch();
	return 0;
}




