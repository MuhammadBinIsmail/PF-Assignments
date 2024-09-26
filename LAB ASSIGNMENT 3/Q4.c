#include <stdio.h>
int main()
{
	float fuel_average,no_of_litersused,total_fuel_used, forward_fuelcost, backward_fuelcost, total_fuelcost;
	printf("\nEnter your car's fuel average in positive format: ");
	scanf("%f", & fuel_average);
	if (fuel_average > 0)
	{
		no_of_litersused = 1207/fuel_average;
		total_fuel_used = 2 * no_of_litersused;
		forward_fuelcost = 118 * no_of_litersused;
		backward_fuelcost = 123 * no_of_litersused;
		total_fuelcost = forward_fuelcost + backward_fuelcost;
		printf("\nThe total fuel cost both ways is: %.2f \n", total_fuelcost);
		printf("\nThe total fuel consumed in litres for the total trip is: %.2f \n", total_fuel_used);
	}
	else{
		printf("\nInvalid input \nEnter positive value for your car's fuel average\n");
	}
		
}