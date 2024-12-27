#include<bits/stdc++.h>
using namespace std;

const int N = 1e7 + 9;
int d[N];

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  for (int i = 1; i < N; i++) {
    for (int j = i; j < N; j += i) {
      d[j]++;
    }
  }

  int n; cin >> n;
  long long ans = 0;
  for (int i = 1; i <= n; i++) {
    ans += 1LL * i * d[i];
  }
  cout << ans << '\n';
  return 0;
}