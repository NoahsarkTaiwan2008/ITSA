#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a;
    cin >> a;
    for (int i = 0; i < a; i++) {
        int a = 0, b = 0;
        cin >> a >> b;
        cout << pow((a + b), 2) << endl;
    }
}