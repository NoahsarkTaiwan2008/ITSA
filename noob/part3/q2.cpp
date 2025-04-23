#include <iostream>
using namespace std;

int main() {
    char n;
    cin >> n;
    n = tolower(n);
    if (n == 'a' || n =='e' || n =='i' || n =='o' || n =='u') {
        cout << "母音" << endl;
    } else {
        cout << "子音" << endl;
    }
}