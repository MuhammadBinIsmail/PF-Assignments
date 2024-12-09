/*
Design a structure to store information about travel packages, including package name,
destination, duration, cost, and number of seats available. Write a program that allows
users to book a travel package and display available packages.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct travel_info
{
    char packagename[50];
    char destination[50];
    int duration;
    double cost;
    int no_seats_available;
};

void bookpackage(struct travel_info packages_detail[], int size)
{
    int option;
    printf("\nEnter the package number to book: ");
    scanf("%d", &option);

    if (option < 1 || option > size)
    {
        printf("Invalid package number.\n");
        return;
    }

    int index = option - 1;
    if (packages_detail[index].no_seats_available > 0)
    {
        packages_detail[index].no_seats_available--;
        printf("\nSuccessfully booked the package '%s'", packages_detail[index].packagename);
    }
    else
    {
        printf("\nNo seats are available for this package.\n");
    }
}
void availbalepackage(struct travel_info packages_detail[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (packages_detail[i].no_seats_available > 0)
        {
            printf("\nPackage No. %d: ", i + 1);
            printf("\nPackage Name: %s", packages_detail[i].packagename);
            printf("\nDestinatin: %s", packages_detail[i].destination);
            printf("\nDuration of Travel: %d", packages_detail[i].duration);
            printf("\nTotal Cost: %.2f", packages_detail[i].cost);
            printf("\nSeats Available: %d", packages_detail[i].no_seats_available);
        }
    }
}
int main()
{
    int userinput;
    struct travel_info packages_detail[] = {
        {"Himalian Mountains", "Himalyas", 10, 5600, 10},
        {"Picnic & Party", "Kund Malir", 17, 9300, 8},
        {"Resort", "Ormara", 19, 10600, 1},
        {"Seaview", "Gawadar", 13, 6680, 15},
        {"Beach Party", "Turle Beach", 8, 4900, 17},
    };
    int no_of_packages = sizeof(packages_detail) / sizeof(packages_detail[0]);
    
    do
    {
        printf("\n\nWelcome to Travel Management System.");
        printf("\nPress 1 to book a travel package.");
        printf("\nPress 2 to display available packages.");
        printf("\nPress 3 to exit.\n");
        printf("\nEnter your choice from the above menu: ");
        scanf("%d", &userinput);
        switch (userinput)
        {
        case 1:
            bookpackage(packages_detail, no_of_packages);
            break;
        case 2:
            availbalepackage(packages_detail, no_of_packages);
            break;
        case 3:
            printf("Thank you.");
            break;
        default:
            printf("Invalid option. Select the correct option.");
        }
    } while (userinput != 3);
    return 0;
}