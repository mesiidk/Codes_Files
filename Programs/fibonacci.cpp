#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int fibo = 0, first = 0, sec = 1;

	if(n == 0) {
		cout << 0 << '\n';
		return 0;
	}
	else if(n == 1) {
		cout << 1 << '\n';
		return 0;
	}
	cout << first << '\n' << sec << '\n';

	for(int i = 3; i <= n; i++) {
        fibo = first + sec;
        cout << fibo << '\n';
		first = sec;
		sec = fibo;			                                                   

	}

	return 0;
}
