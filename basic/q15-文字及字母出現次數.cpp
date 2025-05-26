#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    getline(cin, n);

    int space = count(n.begin(), n.end(), ' ');
    cout << space + 1 << endl;

    for (char &i : n) {
        i = tolower(i);
    }

    for (char ch = 'a'; ch <= 'z'; ch++) {
        if (n.find(ch) != string::npos) {
            size_t pos = 0;
            int count = 0;
            while ((pos = n.find(ch, pos)) != string::npos) {
                count++;
                pos++;
            }
            cout << ch << " : " << count << endl;
        }
    }
}