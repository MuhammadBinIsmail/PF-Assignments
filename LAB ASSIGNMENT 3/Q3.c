#include<stdio.h>
int main()
{
	float tax_rate, Net_Salary, tax_paid;
	int salary;
	printf("\nEnter your salary: ");
	scanf("%d", &salary);
	printf("Enter tax_rate in percentage: ");
	scanf("%f", &tax_rate);
	tax_paid = (salary * tax_rate) / 100;
    Net_Salary = salary - tax_paid; 
    printf("Tax to be paid: %.2f\n", tax_paid);
    printf("Net salary after tax: %.2f\n", Net_Salary);
    return 0;
}
