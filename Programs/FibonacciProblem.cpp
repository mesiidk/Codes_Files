#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n;
	cin >> n;
	long long fibo = 0, first = 0, sec = 1;
	if(n == 0) {
		cout << first << '\n';
	}
	else if(n == 1) {
		cout << fibo << '\n';
	}
	else {
		for(int i = 3; i <= n; i++) {
			fibo = first + sec;
			first = sec;
			sec = fibo;
		}
		cout << fibo;
	}


	return 0;
}