#include <bits/stdc++.h>
using namespace std;

long long equation(int x, int n) {
	long long sum = 0;
	for(int i = 2; i <= n; i = i + 2) {
		sum += pow(x, i);
	}
	return sum;
}
int main() {
	int x, n;
	cin >> x >> n;
	cout << equation(x, n) << '\n';
	return 0;
}