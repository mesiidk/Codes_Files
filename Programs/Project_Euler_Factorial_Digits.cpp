#include<bits/stdc++.h>
using namespace std;

// Function to compute factorial of a digit
int factorial(int n) {
  int ans = 1;
  for (int i = 1; i <= n; i++) {
    ans *= i;
  }
  return ans;
}

// Function to check if a number is curious
bool is_curious(int n) {
  int m = n;
  int sum = 0;
  while (n) {
    int d = n % 10;       // Get the last digit
    sum += factorial(d);  // Add factorial of the digit to sum
    n /= 10;              // Remove the last digit
  }
  return sum % m == 0;    // Check if the sum of factorials divides the number
}

int32_t main() {
  int n; 
  cin >> n;              // Input the limit
  long long ans = 0;
  for (int i = 10; i <= n; i++) { // Iterate from 10 to n
    if (is_curious(i)) { 
      ans += i;          // Add to the answer if the number is curious
    }
  }
  cout << ans << '\n';  // Print the result
  return 0;
}