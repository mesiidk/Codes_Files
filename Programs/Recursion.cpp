#include <bits/stdc++.h>
using namespace std;

int sum(int n) {
	cout << "We are at n = " << n << '\n';
	if(n == 0) {
		cout << "do not need to go further" << '\n';
		return 0;
	}
	int result = sum(n - 1) + n;
	cout << "returning " << result << '\n';
	return result;
}

int main() {
	cout << sum(5) << '\n';

	return 0;
}