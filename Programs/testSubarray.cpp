#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for(int i = 0; i < n; i++) {
		for(int j = i; j < n; j++) {
			for(int l = i; l <= j; l++) {
				cout << a[l] << ' ';
			}
			cout << '\n';
		}
	}

	return 0;
}