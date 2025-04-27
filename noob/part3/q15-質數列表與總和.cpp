#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x) {
    if (x <= 1) return false;
    for (int i = 2; i * i <= x; ++i) {
        if (x % i == 0) return false;
    }
    return true;
}

int main() {
    vector<int> primes;
    int n;
    cin >> n;
    long long sum = 0;
    int num = 2;

    while (primes.size() < n) {
        if (isPrime(num)) {
            primes.push_back(num);
            sum += num;
        }
        num++;
    }

    for (int i = 0; i < primes.size(); i++) {
        cout << primes[i] << (i == primes.size() - 1 ? "" : ",");
    }

    cout << endl << sum << endl;

    return 0;
}