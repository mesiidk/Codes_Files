#include <stdio.h>

int main() {
    double n;
    double m;
    char op;
    printf("Enter a number: ");
    scanf("%lf", &n);
    printf("Enter another number: ");
    scanf("%lf", &m);
    printf("Enter operator: ");
    scanf(" %c", &op);

    for (int i =1; i <= 5; i++) {

        if(op == '+') {
        }
        else if(op == '-') {
        }
        else if(op == '*') {
        }
        else if(op == '/') {
           }
            else
                printf("Invalid operator");
}
          if(op == '+') {
            printf("%lf", n + m);
        }
        else if(op == '-') {
            printf("%lf", n - m);
        }
        else if(op == '*') {
            printf("%lf", n * m);
        }
        else if(op == '/') {
            printf("%lf", n / m);

        }
    return 0;
}
