#include<stdio.h>
int main()
{
	int consumer_ID, units_consumed, Amount_charges, surcharge_amount = 0;
	float charge_per_unit, net_amount;
	char Customer_name[20];
	printf("\nEnter your Consumer ID: ");
	scanf("%d", & consumer_ID);
	printf("\nEnter your name: ");
	scanf(" %s", & Customer_name);
	printf("\nEnter Units Consumed: ");
	scanf("%d", & units_consumed);
	if (units_consumed < 200)
	{
		charge_per_unit = 16.20;
		Amount_charges = charge_per_unit * units_consumed;
	}
	else if (units_consumed >= 200 && units_consumed <= 300) 
	{
		charge_per_unit = 20.10;
		Amount_charges = charge_per_unit * units_consumed;
	}
	else if (units_consumed >= 300 && units_consumed <= 500)
	{
		charge_per_unit = 27.10;
		Amount_charges = charge_per_unit * units_consumed;
	}
	else if (units_consumed >= 500)
	{
		charge_per_unit = 35.90;
		Amount_charges = charge_per_unit * units_consumed;
	}	
	if (Amount_charges > 18000)
	{
		surcharge_amount = (15 * Amount_charges)/100;
		net_amount = Amount_charges + surcharge_amount;
	}
	else
	{
	net_amount = Amount_charges + surcharge_amount;
	}
	printf("\nCustomer ID: %d\n", consumer_ID);
	printf("\nCustomer Name: %s\n", Customer_name);
	printf("\nUnits Consumed: %d\n", units_consumed);
	printf("\nAmount Charges @ Rs. %.2f per unit: %d", charge_per_unit, Amount_charges);
	printf("\nSurcharge Amount: %d\n", surcharge_amount);
	printf("\nNet Amount Paid by the Customer: %.2f\n", net_amount);
}