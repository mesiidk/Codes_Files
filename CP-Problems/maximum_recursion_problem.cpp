#include <bits/stdc++.h>
using namespace std;

long long maximum_num = -1e6;
long long n;
long long a[10000];

int maximum(long long i) {
	if(i >= n) {
		return 0;
	}
	 return max(a[i], maximum(i + 1));	
}

int main() {
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> a[i]; 
	}
	cout << maximum(1) << '\n';

	return 0;
}