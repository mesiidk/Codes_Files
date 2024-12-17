#include <stdio.h>

int main() {
    int ch;

    // EOF পাওয়া হওয়া পর্যন্ত স্ট্যান্ডার্ড ইনপুট থেকে অক্ষর পড়ুন
    while ((ch = getchar()) != EOF) {
        // অক্ষর প্রস্তুত করুন
        putchar(ch);
    }

    return 0;
}
