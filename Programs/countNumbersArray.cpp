 #include <bits/stdc++.h>
 using namespace std;
 
 int main() {
 	int n; cin >> n;
 	int a[n];
 	int count = 0;

 	for(int i = 0; i <= n - 1; i++) {
 		cin >> a[i];
 	}
 	for(int i = 0; i < n - 1; i++) {
      	if(a[i] == a[i + 1]) {
      		count++;
      	}
 	}
 	cout << count << '\n';
 	
 	return 0;
 }
 