#include <bits/stdc++.h>
using namespace std;

int main() {
	int a = 1, b, c; cin >> a >> b >> c;
	for(int i = 0; i <= 1; i++) {
		for(int j = 0; j <= 10000; j++) {
			if(a * i + b * j == c) {
				cout << "Yes" << '\n';
				return 0;
			}
		}
	}
	cout << "No" << '\n';
	
	return 0;
}
