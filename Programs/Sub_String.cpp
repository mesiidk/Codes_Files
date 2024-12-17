#include <bits/stdc++.h>
using namespace std;

int main() {
	string s = "abcdef";
	int lenght = s.size();
	for(int i = 0; i < lenght; i++) {
		for(int j = 1; j < i; j++) {
			cout << j;
		}
		cout << '\n';
	}

	return 0;
}