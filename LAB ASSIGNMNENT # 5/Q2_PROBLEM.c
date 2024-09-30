
// MORE PROBLEMS :'D

// Q.2 Create a program that calculates the final grade of a student based on multiple criteria,
//    including attendance, assignment scores, and exam results, using nested decision structures.

#include <stdio.h>
int main()
{
	int attendance, assignmentscores, examresults;
	printf("\nEnter your attendance in percentage format: ");
	scanf("%d", & attendance);
	printf("\nEnter your assignment score out of 100: ");
	scanf("%d", & assignmentscores);
	printf("\nEnter your complete Exam Results out of 100: ");
	scanf("%d", & examresults);
	if (attendance >= 0 && attendance <= 100)
	{
		if (assignmentscores >= 0 && assignmentscores <= 100)
		{
			if (examresults >= 0 && examresults <= 100)
			{
				if (attendance >= 95 && assignmentscores >= 90 && examresults >= 90)
				{
					printf("\nCongragulations, you got an A+ grade.");
				}
				else if (attendance >= 85 && assignmentscores >= 80 && examresults >= 80)
				{
					printf("\nCongragulations, you got an A grade.");
				}
				else if (attendance >= 75 && assignmentscores >= 70 && examresults >= 70)
				{
					printf("\nYou got an B grade.");
				}
				else if (attendance >= 70 && assignmentscores >= 60 && examresults >= 60)
				{
					printf("\nYou got an C grade.");
				}
				else if (attendance >= 65 && assignmentscores >= 55 && examresults >= 55)
				{
					printf("\nYou got an D grade.");
				}
				else if (attendance >= 60 && assignmentscores >= 50 && examresults >= 50)
				{
					printf("\nYou got an E grade.");
				}
				else
				{
					printf("\nYou got an F grade.");
				}
			}
			else
			{
				printf("Invalid Input");
			}
		}
		else
		{
			printf("Invalid Input");
		}
	}
	else
	{
		printf("Invalid Input");
	}
	
	return 0;
}