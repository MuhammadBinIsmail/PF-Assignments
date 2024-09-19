#include<stdio.h>
int main()
{
	int n;
	printf("\nEnter a positive integer between 1<=n<-9: ");
	scanf("%d",& n);
	if (n >= 1 && n<= 9)
	{
		switch(n)
		{
			case 1:
				printf("\none\n");
				break;
			case 2:
				printf("\ntwo\n");
				break;
			case 3:
				printf("\nthree\n");
				break;
			case 4:
				printf("\nfour\n");
				break;
			case 5:
				printf("\nfive\n");
				break;
			case 6:
				printf("\nsix\n");
				break;
			case 7:
				printf("\nseven/n");
				break;
			case 8:
				printf("\neight\n");
				break;
			case 9:
				printf("\nnine\n");
				break;
		}
	}
	else
	{	printf("\nInvalid Input\n");
	}
	if (n > 9)
	{
		printf("\ngreater than 9\n");
	}
}
