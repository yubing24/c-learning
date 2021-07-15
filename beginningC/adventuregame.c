/*Tommy's Adventure*/

#include <stdio.h>

int main(void)
{
	printf("\n\n\n	Welcome to Tommy's Adventure!\n\n\n	Tommy is a little boy who has huge curiosity about everything.\n\n\n	In an afternoon, Tommy was playing alone on a barley field with his toys in the countryside.\n\n\n	He played for long time and didn't realize that the sky was getting darker and thunderstorm was coming...\n\n\n");
	
	int continue_1 = 0;
	printf("Press 1 and Enter to continue\n");
	scanf("%d", &continue_1);
	
	int greeting = 0;
	printf("	Suddenly, a old and scary witch showed up and came towards Tommy, and said: \"Hey little Tommy, how are you today?\"\n");
	printf("	If you were Tommy, what would you answer that scary witch?\n		1=\"I am pretty good, mam!\"\n"		"2=\"Not very well, I really want to play something different!\"\n");
	scanf("%d", &greeting);
	if (greeting == 1)
		{
			int invite=0;
				printf("\n	\"Great Tommy!\", said the witch, \"but would you like to play something together? I know a very interesting place ......\"""\n\n	If you were Tommy, what would you answer?  \n		1=Sure! Let's Go!\n		0=No, I don't want to deal with you!  \n");
				scanf("%d", &invite);
	
			if (invite ==1)
				printf("The witch led Tommy to a cave, Tommy felt a little bit scary but excited...\n");
	
			if (invite ==0)
				{
					int repeat = 0;
						printf("The witch say: \"Are you sure? Maybe I should give you one more chance to decide!\"" "1=play with witch 0=run away:  \n");
						scanf("%d", &repeat);
					if (repeat == 1)
						printf("\"Good, come with me, and I will bring you a small gift.\", said the witch\n");
					if (repeat == 0)
						printf("GAME OVER! The witch killed you!\n");
				}
		}
	if (greeting == 2)
		{
			int witchreact1 = 0;
				printf("\"I am sorry Tommy, but I know something more fun, come with me?\", said the witch\n\n");
				printf("As Tommy, how would you like to respond the witch?\n 1=Sure! Let's go! \n 2=Go away, old fat!\n");
				scanf("%d", &witchreact1);
			if (witchreact1 == 1)
				printf("\"Great Tommy! I'll show you the inside of the rabbit hole.....\", said the witch.\n");
			if (witchreact1 == 2)
				printf("		GAME OVER!\n		You hurt the old witch's heart!\n");
		}
	return 0;
}
	
	
