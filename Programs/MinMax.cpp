#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	int minimum_num = 1e9;
	int maximum_num = -1e9;
	int position_of_minimumNum;
	int position_of_maximumNum;

	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for(int i = 0; i < n; i++) {
		if(minimum_num > a[i]) {
			minimum_num = a[i];
			position_of_minimumNum = i;
		}
	}
	for(int j = 0; j < n; j++) {
		if(maximum_num < a[j]) {
			maximum_num = a[j];
			position_of_maximumNum = j;
		}
	}
	
	a[position_of_minimumNum] = maximum_num;
	a[position_of_maximumNum] = minimum_num;
	
	for(int i = 0; i < n; i++) {
		cout << a[i] << ' ';
	}
	cout << '\n';
	
	return 0;
}
