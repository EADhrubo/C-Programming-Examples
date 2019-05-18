# include <stdio.h>
# include <conio.h>
void main()
{
	char ch;
	printf("\n Press any letter : ");
	ch=getche();
	while ((ch!='N') && (ch!='n'))
	{
		putch( '\a' );
		putch( '\b' );
		ch=getche();
	}
	printf("\n Thanks for hearing noise.");
	getch();
}