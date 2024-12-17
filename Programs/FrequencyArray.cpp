#include<iostream>
using namespace std;

int main() {
  int n, m; cin >> n >> m;
  int a[n + 1];
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }

  int frequency[m + 1];
 
  for (int i = 1; i <= m; i++) {
    frequency[i] = 0;
  }

  
  for (int i = 1; i <= n; i++) {
    frequency[a[i]]++;
  }

  
  for (int i = 1; i <= m; i++) {
    cout << frequency[i] << '\n';
  }
  return 0;
}