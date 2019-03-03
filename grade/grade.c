# include <stdio.h>
# include <conio.h>
void main()
{
	float score;
	printf("\n score= ");
	scanf(" %f",&score);
	if ((score>=90) && (score<100))
	{
		printf("\n\a Your grade is A.");
	}
	else if ((score>=80) && (score<90))
	{
		printf("\n\a Your grade is B.");
	}
	else if ((score>=70) && (score<80))
	{
		printf("\n\a Your grade is C.");
	}
	else if ((score>=60) && (score<70))
	{
		printf("\n\a Your grade is D.");
	}
	else
	{
		printf("\n\a Your grade is F.");
	}
	getch();
	
}