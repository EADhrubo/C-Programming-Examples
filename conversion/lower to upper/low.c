# include <stdio.h>
# include <conio.h>
char upper_case(char ch);
char upper_case (char ch)
{
	if ((ch>='a') && (ch<='z'))
	{
		return ('A'+ch-'a');
	}
	else 
	{
		return ch;
	}
}
int main ()
{
	char ch,up;
	printf("\n Enter a letter : ");
	scanf(" %c",&ch);
	up=upper_case(ch);
	printf("\n\a The upper case of %c is %c.",ch,up);
	getch();
	return 0;
}
