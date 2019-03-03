# include <stdio.h>
# include <conio.h>
void main()
{
	char letter;
	printf("\n Enter a letter: ");
	scanf(" %c",&letter);
	switch (letter)
	{
	case 'a': case 'e': case 'i': case 'o': case 'u':
		printf("\n\a You have typed a vowel.");
		break;
	default       :
		printf("\n\a You have typed a consonant.");
		break;
	}
	getch();
}
