# include <stdio.h>
# include <conio.h>
void main()
{
	int score,total,count;
	count=score=total=0;
	while (count<5)
	{
		printf("\n score= ");
		scanf(" %d",&score);
		if ((score<0) || (score>100))
			continue;
		total+=score;
		printf("\n Total is %d.",total);
		count++;
	}
	getch();
}

