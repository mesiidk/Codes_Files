#include<bits/stdc++.h>
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, b; cin >> n >> b;
  int digits = 0;
  while (n > 0) {
    int last_digit = n % b;
    digits++;
    int number_without_last_digit = n / b;
    n = number_without_last_digit;
  }
  cout << digits << '\n';
  return 0;
}
