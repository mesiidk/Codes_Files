#include <stdio.h>

int main() {
     int num1, num2, sum;

     printf("Enter a number:\n");
     scanf("%d", &num1);

     printf("Enter another number:\n");
     scanf("%d", &num2);

     sum = num1 + num2;

     printf("The sum of %d and %d is = %d", num1, num2, sum);

    return 0;
}
