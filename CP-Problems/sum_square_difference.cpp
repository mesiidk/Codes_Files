#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
	ll t;
	cin >> t;
	while(t--) {
		ll n;
		cin >> n;
		ll sum = 0;
		ll sum2 = 0;
		ll ans = 0;
		for(int i = 1; i <= n; ++i) {
			sum += (i * i);
		}
		for(int i = 1; i <= n; ++i) {
			sum2 += i;
		}
		ll square_of_sum = sum2 * sum2;
		if(sum > square_of_sum) {
			ans = sum - square_of_sum;
		}
		else {
			ans = square_of_sum - sum;
		}
		cout << ans << endl;

	}
	return 0;
}