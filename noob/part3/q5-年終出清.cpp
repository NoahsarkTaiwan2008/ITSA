#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 10) {
        n *= 100;
    } else if (n >= 10 && n < 30) {
        n = (n * 100) * 0.9;
    } else if (n >= 30 && n <= 99) {
        n = (n * 100) * 0.8;
    } else if (n >= 100) {
        n = (n * 100) * 0.7;
    }

    cout << n << endl;
    return 0;
}