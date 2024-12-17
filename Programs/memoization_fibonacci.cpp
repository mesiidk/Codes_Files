#include <bits/stdc++.h>
using namespace std;
int memo[20];
int calls;
int f(int n) {
	calls++;
	if(n == 0 || n == 1) {
		return n;
	}
	if(memo[n] != -1) {
		return memo[n];
	}
	return memo[n] = f(n - 1) + f(n - 2);
}
int main() {
	int n = 5;
	for(int i = 1; i <= n; i++) {
		memo[i] = -1;
	}
	cout << f(n) << '\n' << calls << '\n';

	return 0;
}