#include <bits/stdc++.h>
using namespace std;

int main() {
	int row = 3;
	int colm = 3;
	string a[row][colm] = {
							{"God_Of_War", "DMC_5", "Forza"},
							{"Spider_Mon", "Street_Fighter", "Fifa"},
							{"Elden_Ring", "DarkSouls", "Mk"}	
	                   	  };
	for(int i = 0; i < row; i++) {
		for(int j = 0; j < colm; j++) {
			cout << a[i][j] << ',';
		}
		cout << '\n';
	}
	
	return 0;
}
