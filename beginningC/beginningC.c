//Beginning C-2013
#include <stdio.h>	// A statement about library used in this program
			// file.h is called header file, indicating library. Every C program needs to claim this
			// Four fundamental stages of C program: editing, compiling, linking, and executing
			// This is also the source file of this program
			// The # works as a indicator that this is a preprocess directive
#define PI 3.14159f


int main(void)		// This states that this programm is about function main()
			// Every C program must have a function called main()
			// Word int defines that the function will return with a integer
			// Word void means that no data can be transferred to main(), at present
{								// The contents and {} are the body of the function
								// At this stage, this function main() does nothing in this program
	int chapter = 0;
	printf("\n	This is the program of Marc Gregoire's Beginning C, 2013(c).\n");		//printf() is a statement function
	printf("	Select the chapter of program you want to execute\n");
	printf("	Contents\n");
	printf("	Chapter 1 - Programming in C\n	Chapter 2 - First Steps in Programming\n	Chapter 3 - Making Decisions\n	Chapter 4 - Loops\n	Chapter 5 - Arrays\n	Chapter 6 - Applications with Strings and Text\n	Chapter 7 - Pointers\n	Chapter 8 - Structuring Your Programs\n	Chapter 9 - More on Functions\n	Chapter 10 - Essential Input and Output\n	Chapter 11 - Structuring Data\n	Chapter 12 - Working with Files\n	Chapter 13 - The Preprocessor and Debugging\n	Chapter 14 - Advanced and Sepcialized Topics\n\n	Type the chapter number then press [Enter]:  ");
	scanf("%d", &chapter);
	if (chapter ==1)
	{
		// Program 1.1 Hello World
		printf("\n\nProgram 1.1 Hello World\n");	// Whey save the program, use filename.c
		printf("\n	Hello World\n\n");
		
		// Program 1.2 Second C Program
		printf("Program 1.2 Second C Program\n");
		printf("\n	\"If at first you don't succeed, try, try, try again\"\n\n");
	
		// Program 1.3 Another Simple C Program
		printf("Program 1.3 Another Simple C Program\n");
		printf("\n	Beware the Ides of Marche!\n\n");

		// Program 1.4 Fourth Simple C Program
		printf("Program 1.4 Fourth Simple C Program\n");
		printf("\n	My formula for success?\n	Rise early, work late, strike oil!\n\n");
	
		// Program 1.5 Fifth Simple C Program
		printf("Program 1.5 Fifth Simple C Program\n");
		printf("\n	\"It is a wise father that knows his own child\"\n						--Shakespeare\n\n");	
		
		// Program 1.6 Sixth C Program -- Beep Notification
		printf("Program 1.6 Sixth C Program -- Beep Notification\n");
		printf("\n	Becareful !!\n\n\a");

		// Program 1.7 A Simple Macro
		printf("Program 1.7 A Simple Macro\n");
		#define INCHES_PER_FOOT 12
		printf("\n	#define INCHES_PER_FOOT 12\n");
		printf("\n	There are %d inches in a foot.\n\n", INCHES_PER_FOOT);
	
		// Program 1.7 A Longer Program
		printf("Program 1.7 A Longer Program\n");
		printf("\n	Hi there!\n\n\n	This program is a bit");
		printf(" longer than the others.");
		printf("\n	But really, it's only more text.\n\n\n\a\a");
		printf("	Hey, wait a minute!! What was that???\n\n");
		printf("	\t1.\tA bird?\n");
		printf("	\t2.\tA plane?\n");
		printf("	\t3.\tA control character?\n");
		printf("\n	\t\b\bAnd how will this look when it prints out?\n\n");

		// Exercise 1.1 
		printf("Exercise 1.1 Name Label\n");
		printf("\n	Name: Bing\n");
		printf("	Address: Madison, WI.\n\n");
		
		// Exercise 1.2
		printf("Exercise 1.2 Name Label-Updated\n\n	Name:Bing\n	Address: Madison, WI.\n\n");

		// Exercise 1.3
		printf("Exercise 1.3 Print A Specific Format\n\n");
		printf("	\"It's freezing in here,\" he said coldly.\n\n");

		return 0;					// This is a statment that the function main() end here
								// Returning a zero value from main() indicates that the program terminated normally; a nonzero value would indicate an abnormal return, which means things did not proceed as they should have when the program ended.
	}
	
	if (chapter == 2)
	{
		printf("\n	Chapter 2 covers several important topics, including\n		1. Memory\n		2. Variable\n\n");
		
		// Program 2.2 Using a Variable
		printf("\nProgram 2.2 Using a Variable\n");
		int salary;					// Declare a variable called "salary". Declaration ends with ;, and word 'int' specifies the data type of variable "salary
		salary = 10000;					// Operator "=" is an assignment operator, assigning a value to a variable
		printf("\n	My salary is %d.\n", salary);   // Two arguments in this function, separated by ',', they are: a control string and a variable. %d is a conversion specifier, a decimal specifier that applies to integer values

		// Program 2.3 Using More Variables
		printf("\nProgram 2.3 Using More Variables\n");
		int brothers;
		int brides;
		brothers = 7;
		brides = 7;
		printf("\n	%d brides for %d brothers\n\n", brides, brothers);	
		
		// Program 2.4 Simple Calculations
		printf("Program 2.4 Simple Calculation\n");
		int total_pets;
		int cats;
		int dogs;
		int ponies;
		int others;
		cats = 2;
		dogs = 1;
		ponies = 1;
		others = 46;
		total_pets = cats + dogs + ponies + others;
		printf("\n	We have %d cats, %d dogs, %d ponies, and %d others. In total %d pets\n\n", cats, dogs, ponies, others, total_pets); 	
		
		// Program 2.5 Calculations with Cookies
		printf("Program 2.5 Calculation with Cookies\n");
		int cookies = 5;
		int cookie_calories = 125;
		int total_eaten = 0;
		int eaten = 2;
		cookies = cookies - eaten;
		total_eaten = total_eaten + eaten;
		printf("\n	I have eaten %d cookies. There are %d cookies left.\n", eaten, cookies);
		eaten = 3;
		cookies = cookies - eaten;
		total_eaten = total_eaten + eaten;
		printf("	I have eaten %d more. Now there are %d cookies left.\n", eaten, cookies);
		printf("	Total energy consumed is %d calories. \n\n", total_eaten*cookie_calories);

		// Program 2.6 Cookies Per Kid
		printf("Program 2.6 Cookies Per Kid\n");
		cookies = 45;					// Since cookies is already a defined function, just change the value here
		int children = 7;
		int cookies_per_child = cookies/children;
		int cookies_left_over = cookies%children;
		printf("	You have %d children and %d cookies\n", children, cookies);
   		printf("	Give each child %d cookies.\n", cookies_per_child);
		printf("	There are %d cookies left over.\n\n", cookies_left_over);

		// Program 2.7 Division with Float Values
		printf("Program 2.7 Division with Float Values\n");
		float plank_length = 10.0f;			// In feet
  		float piece_count = 4.0f;             		// Number of equal pieces
  		float piece_length = 0.0f;          		// Length of a piece in feet
 		piece_length = plank_length/piece_count;
 		printf("\n	A plank %.3f feet long can be cut into %.3f pieces %.3f feet long.\n\n", plank_length, piece_count, piece_length);		
		
		//Program 2.8 Calculations on a table
		printf("Program 2.8 Calculations on a Table\n");
		float radius = 0.0f;                  // The radius of the table
		float diameter = 0.0f;                // The diameter of the table
		float circumference = 0.0f;           // The circumference of the table
		float area = 0.0f;                    // The area of the table
		float Pi = 3.14159265f;
		printf("\n	Input the diameter of the table:");
		scanf("%f", &diameter);               // Read the diameter from the keyboard
		radius = diameter/2.0f;               // Calculate the radius
		circumference = 2.0f*Pi*radius;       // Calculate the circumference
		area = Pi*radius*radius;              // Calculate the area
		printf("\n	The circumference is %.2f.", circumference);
		printf("\n	The area is %.2f.\n\n", area);
		
		return 0;
	}
	return 0;
}
