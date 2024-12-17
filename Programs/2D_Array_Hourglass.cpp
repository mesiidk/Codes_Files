#include <bits/stdc++.h>
using namespace std;

int main() {
	int a[6][6];
	int maximum_Sum = -1e6;
	int temp;

	for(int i = 0; i < 6; i++) {
		for(int j = 0; j < 6; j++) {
			cin >> a[i][j];
		}
	}
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 4; j++) {
			temp = a[i][j] + a[i][j + 1] + a[i][j + 2] + a[i + 1][j + 1]
				   + a[i + 2][j] + a[i + 2][j + 1] + a[i + 2][j + 2];
			if(temp > maximum_Sum) {
				maximum_Sum = temp;
			}
		}
	}
	cout << maximum_Sum << '\n';
	
	return 0;
}
