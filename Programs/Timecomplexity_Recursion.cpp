#include <bits/stdc++.h>
using namespace std;

int time(int n) {
	if(n == 0) return 1;
	return time(n - 1) + time(n - 1);
}

int main() {
	cout << time(4) << '\n';
	return 0;
}