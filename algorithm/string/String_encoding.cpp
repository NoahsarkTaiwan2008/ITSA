#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    
    while (cin >> n) {
        int result = 0;
        for (int i = 0; i < n.size(); i++) {
            result = result * 26 + n.at(i) - 'A' + 1;
        }
        cout << result << endl;
    }
}