#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--) {
		string s;
		cin >> s;
		int count = 0;

		for(int i = 0; s[i] != '\0'; i++) {
			count++;
		}

		if(count <= 10) {
			cout << s << '\n';
		}
		else {
			cout << s[0] << count - 2 << s[count - 1] << '\n';
		}
	}
	
	return 0;
}
