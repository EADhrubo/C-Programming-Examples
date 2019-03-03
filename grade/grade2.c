# include <stdio.h>
# include <conio.h>
void main()
{
	int score,grade;
	printf("\n Score= ");
	scanf(" %d",&score);
	grade=score/10;
	switch (grade)
	{
	case  10:
	case   9:
		printf("\n\a Your grade is A.");
		break;
	case   8:
		printf("\n\a Your grade is B.");
		break;
	case   7:
		printf("\n\a Your grade is C.");
		break;
	case   6:
		printf("\n\a Your grade is D.");
		break;
	default :
		printf("\n\a Your grade is F.");
		break;
	}
			 
	getch();
}






