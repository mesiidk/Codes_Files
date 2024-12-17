#include <bits/stdc++.h>
using namespace std;

void print(int p, int n) {
	if(p > n) {
		return;
	}
	cout << p << '\n';
	print(p + 1, n);
}
int main() {
	int n;
	cin >> n;
    print(1, n);
	return 0;
}