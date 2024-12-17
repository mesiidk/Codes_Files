#include<iostream>
using namespace std;


const int N = 3030;

bool is_prime[N];
bool check_prime(int n) {
  if (n == 1) return false; 
  for (int i = 2; i < n; i++) {
    if (n % i == 0) { 
      return false;
    }
  }
  return true;
}
bool is_almost_prime(int n) {
  int prime_divisor_count = 0;
  for (int i = 1; i <= n; i++) {
    if (n % i == 0) { 
      if (is_prime[i]) { 
        prime_divisor_count++;
      }
    }
  }
  if (prime_divisor_count == 2) return true;
  else return false;
}
int main() {
  int n; cin >> n;
  
  for (int i = 1; i <= n; i++) {
    is_prime[i] = check_prime(i);
  }
  int ans = 0;
  // Level 1
  for (int i = 1; i <= n; i++) {
    if (is_almost_prime(i)) {
      ++ans;
    }
  }
  cout << ans << '\n';
  return 0;
}