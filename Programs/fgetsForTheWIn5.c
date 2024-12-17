#include <stdio.h>

int main(void)
{
    int a;
    int rc;
    printf("enter a number: ");
    while ((rc = scanf("%d", &a)) == 0)  // Neither success (1) nor EOF
    {
        // clear what is left, the * means only match and discard:
        scanf("%*[^\n]");
        // input was not a number, ask again:
        printf("enter a number: ");
    }
    if (rc == EOF)
    {
        printf("Nothing more to read - and no number found\n");
    }
    else
    {
        printf("You entered %d.\n", a);
    }
}
