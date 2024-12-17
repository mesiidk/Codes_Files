#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	int len = s.size();
	
	for(int i = 0; i < len; i++) {
		if(s[i] == ',') {
			s[i] = ' ';

		}
		else if(s[i] >= 'A' && s[i] <= 'Z') {
			s[i] = s[i] + 32;
		}
		else {
			s[i] = s[i] - 32;
		}
	}
	cout << s << '\n';
	
	return 0;
}
