#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;
    int bin[10] = {0}, i = 0;
    
    if (n < 0) {
        n = 256 + n;
    }
    while (n != 0) {
        bin[i++] = n % 2;
        n /= 2;
    }

    for (int j = 7; j >= 0; j--) {
        cout << bin[j];
    }
    cout << endl;
}