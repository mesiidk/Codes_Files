#include <stdio.h>

int main() {
   int num , remainder;

   num = 10672;
   remainder = num % 2;

   if (remainder == 0) {
        printf("The Number Is Even\n");
   }
   else {
        printf("The Number Is Odd");
   }

}
