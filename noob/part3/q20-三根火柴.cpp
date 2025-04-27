#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a > b) swap(a, b);
    if (b > c) swap(b, c);
    if (a > b) swap(a, b);

    if (a + b <= c) {
        cout << "Not Triangle" << endl;
    } else if (a * a + b * b == c * c) {
        cout << "Right Triangle" << endl;
    } else if (a * a + b * b < c * c) {
        cout << "Obtuse Triangle" << endl;
    } else {
        cout << "Acute Triangle" << endl;
    }

    return 0;
}