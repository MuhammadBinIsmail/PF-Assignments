/*
Create a structure to store details about cars in a dealership, including make, model,
year, price, and mileage. Write a program that allows users to add new cars, display a
list of available cars, and search for cars by make or model.
*/

#include <stdio.h>
#include <string.h>
#define max_cars 100
typedef struct
{
    char make[50];
    char model[50];
    int year;
    double price;
    double mileage;
} Cardetails;
int add_car(Cardetails cars[], int numcars);
void display_cars(Cardetails cars[], int numcars);
void search_car(Cardetails cars[], int numcars);

int main()
{
    Cardetails cars[max_cars];
    int no_of_cars = 0;
    int userinput;
    while (1)
    {
        printf("\nCar Dealership\n");
        printf("1. Add new car\n");
        printf("2. Display all cars\n");
        printf("3. Search for cars by make or model\n");
        printf("4. Exit\n");
        printf("Enter your choice according to menu: ");
        scanf("%d", &userinput);
        switch (userinput)
        {
        case 1:
            no_of_cars = add_car(cars, no_of_cars);
            break;
        case 2:
            display_cars(cars, no_of_cars);
            break;
        case 3:
            search_car(cars, no_of_cars);
            break;
        case 4:
            printf("Thank You.\n");
            return 0;
        default:
            printf("Please provide a valid choice.\n");
        }
    }
}

int add_car(Cardetails cars[], int numcars)
{
    if (numcars >= max_cars)
    {
        printf("Maximum number of cars reached.\n");
        return numcars;
    }
    printf("Enter car make: ");
    scanf("%s", cars[numcars].make);
    printf("Enter car model: ");
    scanf("%s", cars[numcars].model);
    printf("Enter car year: ");
    scanf("%d", &cars[numcars].year);
    printf("Enter car price: ");
    scanf("%lf", &cars[numcars].price);
    printf("Enter car mileage: ");
    scanf("%lf", &cars[numcars].mileage);
    printf("Car added successfully.\n");
    return numcars + 1;
}

void display_cars(Cardetails cars[], int numcars)
{
    if (numcars == 0)
    {
        printf("No cars available.\n");
        return;
    }
    printf("\nAvailable Cars are:\n");
    for (int i = 0; i < numcars; i++)
    {
        printf("Car %d:\n", i + 1);
        printf("Make: %s\n", cars[i].make);
        printf("Model: %s\n", cars[i].model);
        printf("Year: %d\n", cars[i].year);
        printf("Price: %.2f\n", cars[i].price);
        printf("Mileage: %.2f\n", cars[i].mileage);
    }
}

void search_car(Cardetails cars[], int numcars)
{
    if (numcars == 0)
    {
        printf("No cars available.\n");
        return;
    }
    char searchTerm[50];
    printf("Enter make or model to search: ");
    scanf("%s", searchTerm);
    printf("\nResults:\n");
    int found = 0;
    for (int i = 0; i < numcars; i++)
    {
        if (strstr(cars[i].make, searchTerm) || strstr(cars[i].model, searchTerm))
        {
            printf("Car %d:\n", i + 1);
            printf("Make: %s\n", cars[i].make);
            printf("Model: %s\n", cars[i].model);
            printf("Year: %d\n", cars[i].year);
            printf("Price: %.2f\n", cars[i].price);
            printf("Mileage: %.2f\n", cars[i].mileage);
            found = 1;
        }
    }
    if (!found)
    {
        printf("No cars found according to your search: '%s'.\n", searchTerm);
    }
}
