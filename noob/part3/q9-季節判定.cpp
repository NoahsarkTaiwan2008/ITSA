#include <iostream>
using namespace std;

int main() {
    int m;
    cin >> m;

    if (m >= 3 && m <= 5) {
        cout << "Spring" << endl;
    } else if (m >= 6 && m <= 8) {
        cout << "Summer" << endl;
    } else if (m >= 9 && m <= 11) {
        cout << "Autumn" << endl;
    } else if (m == 1 || m == 2 || m == 12) {
        cout << "Winter" << endl;
    }
}