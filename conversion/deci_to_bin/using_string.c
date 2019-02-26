# include <stdio.h>
# include <conio.h>
# include <string.h>
# include <stdlib.h>
int main ()
{
	char str[100];
	int x,b,i=0,a[100];
	printf("\n Enter a number : ");
	scanf(" %d",&x);
	while (x)
	{
		b=x%2;
		a[i]=b;
		x=x/2;
		++i;
	}
	strcpy(str,a);
	strrev(str);
	x=atoi(str);
	printf("\n\a The binary form of the decimal number is  %d.",x);
	getch();
	return 0;
}