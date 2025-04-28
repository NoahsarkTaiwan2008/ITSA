#include <bits/stdc++.h>
using namespace std;

int main() {
    int number[3];
    cin >> number[0] >> number[1] >> number[2];
    string choice;
    cin >> choice;

    if (choice == "Asc") {
        sort(number, number + 3);

        for (int i = 0; i < 3; i++) {
            cout << number[i] << (i == 2 ? "" : "<");
        }
        cout << endl;
    } else if (choice == "Desc") {
        sort(number, number + 3, greater<>());

        for (int i = 0; i < 3; i++) {
            cout << number[i] << (i == 2 ? "" : ">");
        }
        cout << endl;
    }
}