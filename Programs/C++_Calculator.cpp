#include <bits/stdc++.h>
using namespace std;

int main() {
	double num, num2;

	cout << "Enter a number" << '\n';

	cin >> num;

    cout << "Enter another number" << '\n';

    cin >> num2;

    char op;

    cout << "Enter Operator" << '\n';

    cin >> op;

    if(op == '+') {
    	cout << num + num2 << '\n';
    }
    else if(op == '-') {
    	cout << num - num2 << '\n';
    }
    else if(op == '*') {
    	cout << num * num2 << '\n';
    }
    else if(op == '/') {
    	cout << num / num2 << '\n';
    }
    else
    	cout << "Invalid Operator" << '\n';

	return 0;
}
