#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    cout << "NT10=" << a / 10 << endl;
    cout << "NT5=" << (a % 10) / 5 << endl;
    cout << "NT1=" << a % 10 % 5 << endl;
}