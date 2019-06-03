# include <stdio.h>
# include <conio.h>
# include <string.h>
# include <stdlib.h>
int main()
{
	char str1[100],str2[100];
	printf("\n password is: ");
	gets(str1);
	system("cls");
	printf("\n Enter password: ");
	gets(str2);
	if(strcmp(str1,str2))
		printf("\n Not match.");
	else
		printf("\n\a Match");
	getch();
	return 0;
}