#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m; cin >> n >> m;
	for(int i = n; i <= m; i++) {
		if(m%n==0) {
			cout << "Yes" << '\n';
			return 0;
		}
	}
	cout << "No" << '\n';
	
	return 0;
}
