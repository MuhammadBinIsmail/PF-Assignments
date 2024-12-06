/*
Define a structure to represent a point in 2D space with x and y coordinates. Implement
functions to calculate the distance between two points and to check if a point lies within
a specific rectangular boundary.
*/

#include <stdio.h>
#include <math.h>
typedef struct {
    double x;
    double y;
} Point2Dspace;

double calculatedistance(Point2Dspace p1, Point2Dspace p2)
{
    return sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y));
}

int checkpoint(Point2Dspace p, Point2Dspace bottomleft, Point2Dspace topright)
{
    return (p.x >= bottomleft.x && p.x <= topright.x &&
            p.y >= bottomleft.y && p.y <= topright.y);
}

int main()
{
    Point2Dspace p1, p2, bottomleft, topright;
    printf("Enter coordinates of the first point in the form (x y): ");
    scanf("%lf %lf", &p1.x, &p1.y);
    printf("Enter coordinates of the second point in the form (x y): ");
    scanf("%lf %lf", &p2.x, &p2.y);
    double distance = calculatedistance(p1, p2);
    printf("Distance between the points: %.2f\n", distance);
    printf("Enter coordinates of the bottom-left corner of the rectangle (x y): ");
    scanf("%lf %lf", &bottomleft.x, &bottomleft.y);
    printf("Enter coordinates of the top-right corner of the rectangle (x y): ");
    scanf("%lf %lf", &topright.x, &topright.y);

    if (checkpoint(p1, bottomleft, topright))
    {
        printf("First point lies in the rectangle.\n");
    }
    else
    {
        printf("First point does not lie in the rectangle.\n");
    }

    if (checkpoint(p2, bottomleft, topright))
    {
        printf("Second point lies in the rectangle.\n");
    }
    else
    {
        printf("Second point does not lie in the rectangle.\n");
    }
    return 0;
}
