// WA

#include <bits/stdc++.h>
using namespace std;

int main() {
    int time;
    cin >> time;

    double cost = time;
    if (time <= 800) {
        cost *= 0.9;
    } else if (time > 800 && time < 1500) {
        cost = (cost * 0.9) * 0.9;
    } else {
        cost = (cost * 0.9) * 0.75;
    }
    cout << fixed << setprecision(1) << cost << endl;

}