#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	int n;
	cin >> n;
	int fibo = 0, first = 0, sec = 1;
	for(int i = 3; i <= n; i++) {
		fibo = first + sec;
		first = sec;
		sec = fibo;
		cout << fibo << ' ';
	}

	return 0;
}