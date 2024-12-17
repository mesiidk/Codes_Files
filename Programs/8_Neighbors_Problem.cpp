#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m; cin >> n >> m;
	char a[100][100];

	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++) {
			cin >> a[i][j]; 
		}
	}
	int x, y; cin >> x >> y;
	if(a[x][y - 1] != '.' &&
	   a[x - 1][y] != '.' &&
	   a[x + 1][y] != '.' &&
	   a[x][y + 1] != '.' &&
	   a[x - 1][y + 1] != '.' &&
	   a[x + 1][y - 1] != '.' &&
	   a[x - 1][y - 1] != '.' &&
	   a[x + 1][y + 1] != '.') {
		cout << "yes" << '\n';
	}
	else {
		cout << "no" << '\n';
	}

	return 0;
}