#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int a[n];
	int temp;

	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for(int i = 0; i < n; i++) {
		for(int j = i; j < n; j++) {
			if(a[i] > a[j]) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for(int i = 0; i < n; i++) {
		cout << a[i] << '\n';
	}



	return 0;
}