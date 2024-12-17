#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int a[n];
	int maxNum = 0;

	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for(int i = 0; i < n; i++) {
		if(maxNum < a[i]) {
			maxNum = a[i];
		}
	}
	cout << maxNum;
	
	return 0;
}
