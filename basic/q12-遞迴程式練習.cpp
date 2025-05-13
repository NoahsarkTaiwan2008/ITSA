#include <bits/stdc++.h>
using namespace std;

int f(int n) {
    if (n == 0 || n == 1) {
        return n + 1;
    } else if (n > 1) {
        return f(n - 1) + f(floor(n / 2.0));
    } else {
        return -1;
    }
}

int main() {
    int a;
    cin >> a;
    cout << f(a) << endl;
}