#include <bits/stdc++.h>
using namespace std;

int main() {
    double x1, x2, y1, y2;
    cin >> x1 >> y1;
    cin >> x2 >> y2; 
    double d = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
    cout << fixed << setprecision(2) << d << endl;
}