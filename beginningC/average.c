#include <stdio.h>
#include <math.h>
#include "/C/src/Stat/Univariate.h"

int maxNums = 10; /*the max number of numbers we'll handle*/

/*function prototypes*/
double average(double nums[]);
double smplVar(double nums[]);
double stdDev(double nums[]);

int main()
{
printf("Enter the number of values:");
scanf("%d", &maxNums);

double numList[maxNums];
int i;


/* populate our array of numbers*/
for(i = 0; i < maxNums; i++)
{
scanf("%lf", &numList[i]);
}

/*handle our menu input*/
int choice = 0;
double answer;
while(1) 
{
choice = printMenu();
if(choice == 1)
{
answer = average(numList);
printf("%f", answer);
}
if(choice == 2)
{
/*standard deviation is just the square root of the sample
*variation
*/
answer = stdDev(numList);
printf("%f", answer);
}
if(choice == 3)
{
answer = smplVar(numList);
printf("%f", answer);
}
if(choice == 4)
return 0;
}
}

/*print the menu and return the users choice*/
int printMenu()
{
printf("\n\nMenu:\n1)Average\n2)Standard Deviation");
printf("\n3)Sample Variance\n4)exit");
printf("\nPlease make a choice: ");

int choice;
scanf("%d", &choice);
return choice;
}

/*find and print the average*/
double average(double nums[])
{
double sum = 0;
int i;

/*add up all the numbers*/
for( i = 0; i < maxNums; i++)
sum += nums[i];

/*return the total/number of values (the mean)*/
return sum/maxNums;
}


/*finds the standard deviation
*=sqrt(sum)x-mean(x)^2)/n)
*/
double stdDev(double nums[])
{
double sum = 0;
double mean = average(nums);
int i;

for(i = 0; i < maxNums; i++)
sum += pow(nums[i]-mean, 2);

return sqrt(sum/maxNums);
}

/*finds the sample variance
*=(sum(x-mean(x)^2)/n)
*/
double smplVar(double nums[])
{
double sum = 0;
double mean = average(nums);
int i;

for(i = 0; i < maxNums; i++)
sum += pow(nums[i]-mean, 2);

return sum/(maxNums-1);
}
