#include <bits/stdc++.h>
using namespace std;
int main() {
  long long x, y;
  int ans = 0;
  cin >> x >> y;
  for(int i = 1; i <= y; i++) {
    if(x <= y) {
      ++ans;
      x *= 2;
    }
  }
  cout << ans << '\n';
  return 0;
}