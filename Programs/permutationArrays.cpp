#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int a[n], b[n];
	int result = 1;

	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for(int i = 0; i < n; i++) {
		cin >> b[i];
	}
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if(a[i] == b[j]) {
				b[j] = 0;
				break;
			}
		}
	}
	for(int i = 0; i < n; i++) {
		if(b[i] != 0) {
			result = 0;
		}
	}
	if(result == 0) {
		cout << "no" << '\n';
	}
	else {
		cout << "yes" << '\n';
	}

	return 0;
}