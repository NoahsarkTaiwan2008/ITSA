#include <bits/stdc++.h>
using namespace std;

int main() {
    string a;
    cin >> a;

    string b;
    cin >> b;

    size_t n = 0;
    int count = 0;
    while ((n = b.find(a, n)) != string::npos) {
        count++;
        n++;
    }

    cout << count << endl;
}