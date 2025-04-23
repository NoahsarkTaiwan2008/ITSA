#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int x) {
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) return false;
    }
    return true;
}

int main() {
    long long n;
    cin >> n;
    if (isPrime(n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}