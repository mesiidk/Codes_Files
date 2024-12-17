#include <iostream>
using namespace std;

int main() {
    float n;
    cout << "Enter a number: ";
    cin >> n;
    float m;
    cout << "Enter another number: ";
    cin >> m;
    char op;
    cout << "Enter operator: ";
    cin >> op;

    if(op == '+') cout << n + m;
    else if(op == '-') cout << n - m && m - n;
    else if(op == '*') cout << n * m;
    else if(op == '/') cout << n / m;
    else cout << "Invalid operator";

    return 0;
}
