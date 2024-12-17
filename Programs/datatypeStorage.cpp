#include <iostream>
#include <limits.h> // for limits of integral types
#include <float.h>  // for limits of floating-point types

int main() {
    std::cout << "Size of char: " << sizeof(char) << " byte\n";
    std::cout << "Size of short: " << sizeof(short) << " bytes\n";
    std::cout << "Size of int: " << sizeof(int) << " bytes\n";
    std::cout << "Size of long: " << sizeof(long) << " bytes\n";
    std::cout << "Size of long long: " << sizeof(long long) << " bytes\n";
    std::cout << "Size of float: " << sizeof(float) << " bytes\n";
    std::cout << "Size of double: " << sizeof(double) << " bytes\n";
    std::cout << "Size of long double: " << sizeof(long double) << " bytes\n";
    std::cout << "Size of bool: " << sizeof(bool) << " byte\n";
    std::cout << "Size of pointer: " << sizeof(void*) << " bytes\n";

    return 0;
}
