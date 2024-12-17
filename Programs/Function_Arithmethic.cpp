#include <bits/stdc++.h>
using namespace std;

int add(int a, int b) {
	return (a + b);
}

double yo(double a, double b) {
	return (a + b);
}

int multiply(int a, int b, int c) {
	return (a * b * c);
}

int division(int a, int b) {
	return (a / b);
}

int main() {
	int result = add(10, 20);
	double result2 = yo(7.9, 3.3);
	int result3 = multiply(3, 4, 5);
	int result4 = division(10, 2);

	cout << "Result = " << result << '\n';
	cout << "Result2 = " << result2 << '\n';
	cout << "Result3 = " << result3 << '\n';
	cout << "Result4 = " << result4 << '\n';

}