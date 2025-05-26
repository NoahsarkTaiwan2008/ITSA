#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    getline(cin, n);
    
    cout << count(n.begin(), n.end(), ' ') + 1 << endl;

    for (char &i : n) {
        i = tolower(i);
    }

    for (char ch = 'a'; ch <= 'z'; ch++) {
        int chc = count(n.begin(), n.end(), ch);
        if (chc > 0) {
            cout << ch << " : " << chc << endl;
        }
    }
}