#include <bits/stdc++.h>
using namespace std;

int main() {
    string input;
    getline(cin, input);


    stringstream ss(input);
    string token;
    vector<int> values;

    while (getline(ss, token, ',')) {
        values.push_back(stoi(token));
    }

    int total = values[0];
    int a1 = values[1];
    int a2 = values[2];
    int a3 = values[3];

    int cost = a1 * 15 + a2 * 20 + a3 * 30;

    if (cost > total) {
        cout << "0" << endl;
        return 0;
    }

    int change = total - cost;

    int count_50 = change / 50;
    change %= 50;

    int count_5 = change / 5;
    change %= 5;

    int count_1 = change;

    cout << count_1 << "," << count_5 << "," << count_50 << endl;
}