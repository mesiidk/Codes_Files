#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	int count = 0;
	

	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for(int i = 0; i < n; i++) {
		if(a[i] % 2 != 0) {
			cout << 0 << '\n';
			return 0;
		}
	}

		for(int j = 0; j < n; j++) {
			a[j] /= 2;
			if(a[j] % 2 != 0) {
			count++;
			cout << count << '\n';
			return 0;
			}
		}
		
	return 0;
	
}
