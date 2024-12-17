#include<iostream>
#include<climits> // for using INT_MIN and INT_MAX
using namespace std;

int get_maximum(int a[], int n) {
  int maximum = INT_MIN; // INT_MIN = the minimum possible value of an int = -2^31
  for (int i = 1; i <= n; i++) {
    if (a[i] > maximum) maximum = a[i];
  }
  return maximum;
}

int get_minimum(int a[], int n) {
  int minimum = INT_MAX; // INT_MAX = the maximum possible value of an int = 2^31 -1
  for (int i = 1; i <= n; i++) {
    if (a[i] < minimum) minimum = a[i];
  }
  return minimum;
}

bool is_prime(int n) {
  if (n == 1) return false;
  for (int i = 2; i < n; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

int count_primes(int a[], int n) {
  int count = 0;
  for (int i = 1; i <= n; i++) {
    count += is_prime(a[i]);
  }
  return count;
}

int count_divisors(int n) {
  int count = 0;
  for (int i = 1; i <= n; i++) {
    if (n % i == 0) count++;
  }
  return count;
}

int get_maximum_number_with_maximum_number_of_divisors(int a[], int n) {
  int max_divisor_count = INT_MIN;
  int number = INT_MIN;
  for (int i = 1; i <= n; i++) {
    int divisor_count = count_divisors(a[i]);
    if (divisor_count > max_divisor_count) {
      max_divisor_count = divisor_count;
      number = a[i];
    }
    else if (divisor_count == max_divisor_count) {
      number = max(number, a[i]);
    }
  }
  return number;
}

bool is_palindrome(int n) {
  int original_number = n;
  int reversed_number = 0;
  while (n > 0) {
    int last_digit = n % 10;

    reversed_number = reversed_number * 10 + last_digit;

    int number_without_last_digit = n / 10;
    n = number_without_last_digit;
  }
  return reversed_number == original_number;
}

int count_palindromes(int a[], int n) {
  int count = 0;
  for(int i = 1; i <= n; i++) {
    count += is_palindrome(a[i]);
  }
  return count;
}

void solve() {
  int n; cin >> n;
  int a[n + 1];
  for(int i = 1 ; i <= n; i++) {
    cin >> a[i];
  }
  cout << "The maximum number : " << get_maximum(a, n) << '\n';
  cout << "The minimum number : " << get_minimum(a, n) << '\n';
  cout << "The number of prime numbers : " << count_primes(a, n) << '\n';
  cout << "The number of palindrome numbers : " << count_palindromes(a, n) << '\n';
  cout << "The number that has the maximum number of divisors : " << get_maximum_number_with_maximum_number_of_divisors(a, n) << '\n';
}

int main() {
  solve();
  return 0;
}