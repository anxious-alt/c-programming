#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float radius, diameter, circumference, area; // local variables
    // input radius of circle from user
    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    
    // calculate diameter, circumference, and area
    diameter = 2 * radius;
    circumference = 2 * M_PI * radius; // M_PI is a constant for pi in math.h
    area = M_PI * (radius * radius); // Using M_PI for a more accurate value of pi
    
    // print the results
    printf("Diameter of the circle = %.2f units\n", diameter);
    printf("Circumference of the circle = %.2f units\n", circumference);
    printf("Area of the circle = %.2f sq.units\n", area);

    return 0;
}
