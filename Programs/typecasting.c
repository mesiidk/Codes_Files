#include <stdio.h>

int main() {
    for(char i = 65; i <= 95; i++) {
        char ch = (char)i;
        printf("%c --> ", ch);
        printf("%d\n", i);
    }

    return 0;
}
