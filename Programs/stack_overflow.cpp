#include <bits/stdc++.h>
using namespace std;

void fun(int n) {
	if(n == 0) {
		return;
	}
	else fun(n - 1);
}
int main() {
	int n = 1e6;	
	fun(n);
	return 0;
}