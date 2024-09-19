#include<stdio.h>
int main()
{
	int item_cost;
	float discount, amount_after_discount;
	printf("\nEnter the cost of items: ");
	scanf("%d", & item_cost);
	if (item_cost >= 500){
		if (item_cost < 2000){
			discount = (5 * item_cost)/100;
			amount_after_discount = item_cost - discount;
		}
		else if (item_cost >= 2000 && item_cost <= 4000 ){
			discount = (10 * item_cost)/100;
			amount_after_discount = item_cost - discount;
		}
		else if (item_cost > 4000 && item_cost <= 6000){
			discount = (20 * item_cost)/100;
			amount_after_discount = item_cost - discount;
		}
		else if (item_cost > 6000){
			discount = (35 * item_cost)/100;
			amount_after_discount = item_cost - discount;
		}
	printf("\nThe actual amount is: %d\n", item_cost);
	printf("\nThe amount saved is: %.2f\n", discount);
	printf("\nThe amount after discount is: %.2f\n", amount_after_discount);
	}
	else{
		printf("\n You are not elligble for discount.\n");
	}
}