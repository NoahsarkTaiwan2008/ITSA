#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int a;
    cin >> a;
    for (int i = 0; i < a; i++) {
        int n = 0;
        cin >> n;
        if (n > 31) {
            cout << "Value of more than 31" << endl;
        } else {
            cout << fixed << setprecision(0) << pow(2, n) << endl;
        }
    }
}