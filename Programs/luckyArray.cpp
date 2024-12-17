#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int a[n];
	int minimumNum = 1e6;
	int count = 0;

	for(int i = 0; i <= n - 1; i++) {
		cin >> a[i];
	}
	for(int i = 0; i < n; i++) {
		if(minimumNum > a[i]) {
			minimumNum = a[i];
		}
	}
	for(int i = 0; i < n; i++) {
		if(a[i] == minimumNum) {
			count++;
		}
	}
	if(count % 2 == 1) {
		cout << "Lucky" << '\n';
	}
	else {
		cout << "Unlucky" << '\n';
	}

	
	return 0;
}
