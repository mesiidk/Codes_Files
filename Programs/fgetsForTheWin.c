#include <stdio.h>

int main() {
    char buffer[50];  // Allocate space for 49 characters plus the null terminator

    printf("Enter a line of text: ");
    fgets(buffer, sizeof(buffer), stdin);

    printf("You entered: %s", buffer);

    return 0;
}
