#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i += 2) {
        cout << i << (i + 2 <= n ? " " : "");
    }
    cout << endl;
}