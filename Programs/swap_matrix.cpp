#include <bits/stdc++.h>
using namespace std;
int n;
int matrix[500][500];
void swap_matrix(int r, int c) {
	for(int i = 0; i < n; i++) {
		swap(matrix[r][i], matrix[c][i]);
	}
	for(int i = 0; i < n; i++) {
		swap(matrix[i][r], matrix[i][c]);
	}
}
int main() {
	int r, c;
	cin >> n >> r >> c;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cin >> matrix[i][j];
		}
	}
	r--;
	c--;
	swap_matrix(r, c);
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cout << matrix[i][j] << ' ';
		}
		cout << '\n';
	}

	return 0;
}