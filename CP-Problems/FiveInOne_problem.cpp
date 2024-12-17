#include <bits/stdc++.h>
using namespace std;

int countDivisors(int num) {
    int count = 0;
    for (int i = 1; i <= sqrt(num); i++) {
        if (num % i == 0) {
            count++;
            if (i != num / i) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    int maxNum = INT_MIN;
    int minNum = INT_MAX;
    int oddCount = 0;
    int palindromeCount = 0;
    int maxDivisorCount = 0;
    int numberWithMaxDivisors = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        if (maxNum < a[i]) {
            maxNum = a[i];
        }
        if (minNum > a[i]) {
            minNum = a[i];
        }
        if (a[i] % 2 == 1) {
            oddCount++;
        }

        int divisorCount = countDivisors(a[i]);
        if (divisorCount > maxDivisorCount) {
            maxDivisorCount = divisorCount;
            numberWithMaxDivisors = a[i];
        }
    }

    cout << "The maximum number : " << maxNum << '\n';
    cout << "The minimum number : " << minNum << '\n';
    cout << "The number of odd numbers : " << oddCount << '\n';

    for (int i = 0; i < n; i++) {
        int num = a[i];
        int original = num;
        int reversed = 0;

        while (num > 0) {
            reversed = reversed * 10 + num % 10;
            num /= 10;
        }

        if (original == reversed) {
            palindromeCount++;
        }
    }

    cout << "The number of palindrome numbers : " << palindromeCount << '\n';
    cout << "The number that has the maximum number of divisors : " << numberWithMaxDivisors << '\n';

    return 0;
}
