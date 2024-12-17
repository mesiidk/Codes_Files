#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c, sum; cin >> a >> b >> c;

	for(int i = 0; i <= 10000; i++) {
		sum = a + (b * i);
		if(sum == c) {
			cout << "Yes" << '\n';
			return 0;
		} else if(  )
	}
	cout << "No" << '\n';
	return 0;
}
