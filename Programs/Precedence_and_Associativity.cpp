/* #include <bits/stdc++.h>
using namespace std;

int main() {
	int a = 32;
	int b = a + 10 << 2;
	
	cout << b;

	int a = 2 & 3 | 4;
	cout << a << '\n'; */

#include<bits/stdc++.h>
using namespace std;

int main() {
  int a = 5, b = 3, c = 4;

  cout << a + b * c << '\n';  // Multiplication has higher precedence than addition
  cout << (a + b) * c << '\n';  // Parentheses enforce addition first, then multiplication
  cout << a - b + c << '\n';  // Subtraction and addition have the same precedence (left associativity)
  cout << (a << b + c) << '\n';  // Addition has higher precedence than bitwise shift
  cout << (a * b / c) << '\n';  // Multiplication and division have the same precedence (left associativity)
  cout << (a / b * c) << '\n';  // Multiplication and division have the same precedence (left associativity)
  cout << (a | b & c) << '\n';  // Bitwise AND has higher precedence than bitwise OR
  cout << (a ^ b | c) << '\n';  // Bitwise XOR has higher precedence than bitwise OR
  cout << (a ^ b & c) << '\n';  // Bitwise AND has higher precedence than bitwise XOR
  cout << (a + b == c) << '\n';  // Addition has higher precedence than comparison
  cout << (a & b == 3) << '\n';  // Comparison has higher precedence than bitwise AND

  return 0;
}
