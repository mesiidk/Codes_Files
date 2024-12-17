#include <bits/stdc++.h>
using namespace std;
int memo[100];
int calls;
int power_of_two(int n) {
	calls++;
	if(n == 0) {
		return 1;
	}
	if(memo[n] != -1) {
		return memo[n];
	}
	return memo[n] = power_of_two(n - 1) + power_of_two(n - 1);
}
int main() {
	int n = 3;
	for(int i = 1; i <= n; i++) {
		memo[i] = -1;
	}
	cout << power_of_two(n) << '\n' << calls << '\n';
}