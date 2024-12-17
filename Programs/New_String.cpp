#include <bits/stdc++.h>
using namespace std;

int main() {
    string first, sec;
    cin >> first >> sec;
    int count = 0;
    int count2 = 0;

    for(int i = 0; first[i] != '\0'; i++) {
    	count++;
    }
	for(int i = 0; sec[i] != '\0'; i++) {
		count2++;
	}
	cout << count << ' ' << count2 << '\n';
	cout << first << ' ' << sec;

	return 0;
}