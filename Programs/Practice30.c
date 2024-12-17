#include <stdio.h>

int main() {
    float length, width, area;

    printf("Enter the lenght of rectangle: ");
    scanf("%f", &length);
    printf("Enter the width of rectangle: ");
    scanf("%f", &width);

    area = length * width;

    printf("The area is %f", area);

    return 0;
}
