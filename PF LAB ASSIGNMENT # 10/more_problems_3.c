/*Create a program with a constant that defines the maximum allowable temperature (in
Celsius). Write a function to compare input temperatures and use a static variable to
count how many times temperatures exceeded the limit.
*/

#include <stdio.h>
#define max_temperature 43.0

void check_temperature(float temperature)
{
    static int exceedlimit = 0;

    if (temperature > max_temperature)
    {
        printf("Temperature %.2f exceeds the maximum limit of %.2f.\n", temperature, max_temperature);
        exceedlimit++;
    }
    else
    {
        printf("Temperature %.2f is within the limit.\n", temperature);
    }
    printf("Number of times the limit has been exceeded so far: %d\n", exceedlimit);
}
int main()
{
    int no_of_temps;
    printf("\nEnter the number of temperatures you want to check: ");
    scanf("%d", &no_of_temps);

    for (int i = 0; i < no_of_temps; i++)
    {
        float temperatures;
        printf("Enter temperature %d in Celsius: ", i + 1);
        scanf("%f", &temperatures);
        check_temperature(temperatures);
    }
    return 0;
}
