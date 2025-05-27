#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a;
    cin >> a;
    long long n;

    for (int i = 0; i < a; i++) {
        cin >> n;
        long long sum = 1;
        if (n == 1) sum = 0;

        for (long long j = 2; j * j <= n; j++) {
            if (n % j == 0) {
                sum += j;
                if (j != n / j) sum += n / j;
            }
        }

        if (n == sum && n != 1) {
            cout << "perfect" << endl;
        }else {
            cout << "nonperfect" << endl;
        }
    }
}