#include <stdio.h>

int main() {
    char ch ='p';

    if (ch >= 'a' && ch <= 'z') {
            printf("%c is lower case\n" , ch);
    }
    if (ch >= 'A' && ch <= 'Z') {
            printf("%c is upper case\n" , ch);
    }

    return 0;
}
