#include <bits/stdc++.h>
using namespace std;

int n;
int a[10000];

void print_even(int i) {
	if(i >= n) {
		return;
	}
	print_even(i + 2);
	cout << a[i] << ' ';
}
int main() {
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	print_even(0);


	return 0;
}