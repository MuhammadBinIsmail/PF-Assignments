#include<stdio.h>
int main()
{
	int x1 = 5, x2 = 3, y1 = 4, y2 = 2;
	float slope;
	slope = (y2 - y1)/(x2 - x1);
	printf("The slope is: %.3f", slope);
	return 0;
}