#include <stdio.h>

int main() {
    int age;
    printf("What Is Your Age?\n");
    scanf("%d" , &age);

    if (age >= 12) {
            printf("You Are Allowed To Access\n");
    }

    else {
            printf("You Are Not Allowed To Access\n");
    }

}
