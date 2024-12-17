#include <bits/stdc++.h>
using namespace std;

int main() {
	string s, s2;
	cin >> s >> s2;
	char temp;

	string sum = s + s2;

	cout << s.size() << ' ' << s2.size() << '\n';
	cout << sum << '\n';

	temp = s[0];
	s[0] = s2[0];
	s2[0] = temp;

	cout << s << ' ' << s2 << '\n';
	
	return 0;
}
