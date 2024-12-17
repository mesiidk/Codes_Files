#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--) {
		string s; cin >> s;
        int lenght = s.size();
        int counter = 0;

        for(int i = 0; i < lenght; i++) {
        	if(s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '0' ||
        	   s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '1') {
        		counter = 1;
        		return 0;
        	}
        }
        if(counter = 1) {
        	cout << "Good" << '\n';
        }
        else {
        	cout << "Bad";
        }
	}
	
	return 0;
}
