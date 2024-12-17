#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int a[n];
	int sort;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for(int i = 0; i < n; i++) {
		for(int j = i + 1; j < n; j++) {
			if(a[j] < a[i]) {
				sort = a[i];
				a[i] = a[j];
				a[j] = sort;
			}
		}
	}
	for(int i = 0; i < n; i++) {
		cout << a[i] << ' ';
	}
	
	return 0;
}
