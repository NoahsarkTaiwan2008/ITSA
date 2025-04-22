#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    for (int i = 0; i < a; i++) {
        int n = 0;
        cin >> n;
        cout << n << " " << n * n << " " << n * n * n << endl;
    } 
}