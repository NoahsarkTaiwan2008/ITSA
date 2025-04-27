#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;
    int num = 0;

    for (int i = 0; i < n.size(); i++) {
        int number = 0;
        number = n[i] - '0';
        number = int(pow(number, 3));
        num += number;
    }

    if (stoi(n) == num) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}