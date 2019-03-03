# include <stdio.h>
# include <conio.h>
# include <string.h>
# include <stdlib.h>
int main()
{
	char str1[100],str2[100];
	int i=1,b=0,j=0,c=0,l;
	printf("\n Enter a secret word : ");
	gets(str1);
	l=strlen(str1);
	system("cls");
	while ((b!=10) && (c!=l))
	{
		printf("\n Enter %dth letter : ",i);
		gets(str2);
		if (str1[j]==str2[0])
		{
			printf("\n\a RIghT");
			++j;
			++i;
			++c;
		}
		else 
		{
			printf("\n\a WrOnG");
			++b;
		}
	}
	if (b==10)
	{
		printf("\n\a SORRY !!! You've failed \n Try again ");
	}
	else 
	{
		printf("\n\a CONGRATULATION !!! You've won ");
	}
	getch();
	return 0;
}



