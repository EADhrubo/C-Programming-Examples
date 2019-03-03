# include <stdio.h>
# include <conio.h>
# include <string.h>
# include <stdlib.h>
int main()
{
	char keyword[100],show[100],str[100],str1[100],str2[100],password[100],str3[100];
	int i,j,l,N,a,b;
	strcpy(str3,"1A9F9z3a0io4");
	printf("\n Enter password: ");
    gets(password);
    if(strcmp(password,str3))
	{
		printf("\n\a Not match.");
		goto no;
	}
	    
	else
	{
		printf("\n\a Match");
	}
	system("cls");
	printf("\n Enter secret word: ");
	gets(keyword);
	strcpy(str2,keyword);
	printf("\n Enter some information: ");
	gets(str);
	printf("\n How many chance: ");
	scanf(" %d",&N);
	fflush(stdin);
	system("cls");
	l=strlen(keyword);
	printf("\n The secret word consists of %d letters.",l);
	printf("\n Information:%s",str);
	for(i=0;i<l;++i)
	{
		show[i]='*';
	}
	show[i]='\0';
	b=0;
	j=0;
	while(1)
	{
		printf("\n");
		puts(show);
		printf("Enter a letter: ");
		gets(str1);
		a=0;
		for(i=0;i<l;++i)
		{
			if(str1[0]==keyword[i])
			{
				printf("\n\aRight!!!");
				keyword[i]='*';
				show[i]=str1[0];
				++a;
				++j;
				break;
			}
		}
		if(a==0)
		{
			printf("\n\aWrong!!");
			++b;
		}
		if(b==N)
		{
			printf("\n\aSorry!!\n\aYou've lost.!!");
			printf("\n\aThe secret word was %s.",str2);
			break;
		}
		if(j==l)
		{
			printf("\n\aCongratulations!!!\n\aYou've won.!!!");
			printf("\n\aThe secret word was %s.",str2);
			break;
		}
	}
no:
	getch();
	return 0;
}









