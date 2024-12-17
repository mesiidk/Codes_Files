#include <bits/stdc++.h>
using namespace std;
void stars(int n) {
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << "\n";
	}
}

int main() {

	int n = 5; 
	stars(n);
	return 0;
}
