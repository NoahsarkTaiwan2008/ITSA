#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int a = 0;
        long long temp = 1;
        cin >> a;

        if (a == 0) {
            cout << "1" << endl;
        } else {
            for (int j = 1; j <= a; j++) {
                temp *= j;
            }
            cout << temp << endl;
        }
    }
}