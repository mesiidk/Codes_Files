#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int a[n];
	int b[m];
	int counter = 0;
	int z = 0;

	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for(int i = 0; i < n; i++) {
		cin >> b[i];
	}
	for(int i = 0; i < n; i++) {
		if(a[i] == b[z]) {
			counter++;
			z++;
		}
	}
	if(counter == z) {
		cout << "YES" << '\n';
	}
	else {
		cout << "NO";
	}
	

	return 0;
}