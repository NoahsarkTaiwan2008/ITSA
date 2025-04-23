#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    cout << a << "+" << b << "=" << a + b << endl;
    cout << a << "*" << b << "=" << a * b << endl;
    cout << a << "-" << b << "=" << a - b << endl;

    int q = a / b;
    int r = a % b;
    if (r < 0) {
        q -= 1;
        r += b;
    }

    cout << a << "/" << b << "=" << q << "..." << r << endl;

    return 0;
}
