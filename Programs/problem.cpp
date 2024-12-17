#include <bits/stdc++.h>
using namespace std;

int main() {
	int d, t, s; cin >> d >> t >> s;
	int mul = t * s;
	if(d <= mul) {
        cout << "Yes" << '\n';
	}
	else {
        cout << "No" << '\n';
	}

	return 0;
}
