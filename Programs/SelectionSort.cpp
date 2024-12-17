#include <bits/stdc++.h>
using namespace std;

int main() {
	int n = 5;
	int a[n] = {5, 4, 3, 2, 1};
	int temp;

	for(int i = 0; i < n; i++) {
		a[i];
	}
	for(int i = 0; i < n; i++) {
		for(int j = i + 1; j < n; j++) {
			if(a[j] < a[i]) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for(int i = 0; i < n; i++) {
		cout << a[i] << ' ';
	}
	
	return 0;
}
