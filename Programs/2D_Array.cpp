#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m; cin >> n >> m;
	int a[n][m] = {
				  	{5, 10, 15, 20},
				  	{25, 30, 35, 40},
				  	{45, 50, 55, 60} 	
	              };

	a[0][0] = 5;
	a[0][1] = 10;
	a[0][2] = 15;
	a[0][3] = 20;

	a[1][0] = 25;
	a[1][1] = 30;
	a[1][2] = 35;
	a[1][3] = 40;

	a[2][0] = 45;
	a[2][1] = 50;
	a[2][2] = 55;
	a[2][3] = 60;

	for(int row = 0; row < n; row++) {
		for(int colm = 0; colm < m; colm++) { // 2D_Array For The Win 
			cout << a[row][colm] << ' ';
		}
		cout << '\n';
	}

	return 0;
}
