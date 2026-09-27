#include <stdio.h>
#define PI 3.14159

int main() {
    float radius, height, volume, surfaceArea;

    printf("Enter radius of cylinder: ");
    scanf("%f", &radius);
    printf("Enter height of cylinder: ");
    scanf("%f", &height);

    volume = PI * radius * radius * height;
    surfaceArea = 2 * PI * radius * radius + 2 * PI * radius * height;

    printf("Volume of cylinder = %.2f\n", volume);
    printf("Surface Area of cylinder = %.2f\n", surfaceArea);

    return 0;
}