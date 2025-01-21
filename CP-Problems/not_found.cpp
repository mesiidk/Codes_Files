#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 9;
char s[N];
int frequency[26];
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> s;
  int n = strlen(s);
  for (int i = 0; i < n; i++) {
    frequency[s[i] - 'a']++;
  }
  for (char ch = 'a'; ch <= 'z'; ch++) {
    if (frequency[ch - 'a'] == 0) {
      cout << ch << '\n';
      return 0;
    }
  }
  cout << "None\n";
  return 0;
}