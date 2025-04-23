#include <iostream>
using namespace std;

bool test(int a) {
    for (int i = 2; i < a - 1; i++) {
        if (a % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    for (int i = n; i > n; i--) {
        if (test(i)) {
            cout << i << endl;
            return 0;
        }
    }
    cout << "1" << endl;
}