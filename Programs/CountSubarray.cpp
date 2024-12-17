#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;

	while(t--) {
		int n; cin >> n;
		int a[n];
		int counter = 0;
		int length = 1;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		counter = n;
		for(int i = 1; i < n; i++) {
			if(a[i] >= a[i - 1]) {
				counter++;
			}
			else {
				counter = 1;
			}
			counter += length - 1;
		}
		cout << counter << '\n';
		
	}

	    return 0;
}
