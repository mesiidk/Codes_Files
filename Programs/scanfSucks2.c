#include <stdio.h>

int main(void)
{
    char name[40];
    printf("What's your name? ");
    scanf("%39[^\n]", name);
    //     ^ note the space here, matching any whitespace
    printf("Hello %s!\n", name);
}
