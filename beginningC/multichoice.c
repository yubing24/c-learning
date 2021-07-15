#include<stdio.h>

int main(void)
{
	printf("	\n\n\nStatistics Review\n");
	
	float question1 = 0;
	printf("Question--1 Calculate the mean of the following numbers then enter your answer below:\n		15, 22, 33, 51, 83, 48, 90, 91, 93, 84, 62, 51\nWrite you answer here then press [enter]\nAnswer: ");
	scanf("%f", &question1);
	if (question1 == 60.25)
		printf("Correct!\n");
	else
		printf("Sorry, the correct answer is 60.25\n");

	float question2 =0;
	printf("\n\nQuestion--2 What is the standard deviation of data in Question 1 if it's from a POPULATION?\nWrite you answer here then press [enter]\nAnswer (keep 4 digits if necessary): ");
	scanf("%f", &question2);
	if (question2 == 26.7118)
		printf("Correct!\n");
	else
		printf("Sorry, the correct answer is 26.7118\n");
	
	float question3 = 0;
	printf("\n\nQuestion--3 What is the standard deviation of data in Question 1 if it's from a SAMPLE?\nWrite your answer here then press [enter]\nAnser (keep 4 digits if necessary): ");
	scanf("%f", &question3);
	if (question3 = 27.8996)
		printf ("Correct!\n");
	else
		printf("Sorry, the correct answer is 27.8996");
	
	return 0;
}

