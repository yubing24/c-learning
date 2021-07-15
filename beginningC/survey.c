/*C Program of Interactive Survey*/

/*Survey-Do you need Ice Cream*/

#include <stdio.h>

int main(void)
{
	printf("This is a survey about whether you should treat yourself with some icecream sometimes\n");
	
	int ready = 0;
	printf("Ready to start? 1=Yes 0=No :");
	scanf("%d", &ready);
	
	if (ready == 1)
		printf("Let's get started!\n");
	if (ready == 0)
		printf("Game Over\n");

	int frequency = 0;
	printf("Question 1--How long haven't you have ice cream? 1=A few days 2=A few weeks 3=A few months 4=A few years : \n");
	scanf("%d", &frequency);

	int dessertlove = 0;
	printf("Question 2--Do you love having dessert? 1=Yes 0=No : \n");
	scanf("%d", &dessertlove);
	
	if (dessertlove == 0)
		printf("Never mind. Do whatever you want. \n");
	
	if (dessertlove != 0)
	{
		int score = frequency + dessertlove;
		if (score >=3)
			printf("You should have some icecream! \n");
		if (score <3)
			printf("You don't need icecream unless you want to be fat. \n");
	}

	return 1;
}
