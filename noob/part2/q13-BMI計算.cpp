#include <bits/stdc++.h>
using namespace std;

int main() {
    double w, h;
    cin >> w >> h;
    double bmi = w / pow(h / 100, 2);
    cout << fixed << setprecision(2) << bmi << endl;
}