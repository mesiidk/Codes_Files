#include <bits/stdc++.h>
using namespace std;

int main() {
	int k, s, z; cin >> k >> s;
	int ans = 0;
	for(int x = 0; x <= k; x++) {
		for(int y = 0; y <= k; y++) {
			z = s - x - y;
			if(z >= 0 && z <= k)
				ans++;

		}
	}
	cout << ans << '\n';
	
	return 0;
}
