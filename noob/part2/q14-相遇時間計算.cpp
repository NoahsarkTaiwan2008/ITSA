#include <bits/stdc++.h>
using namespace std;

int main() {
    double d;
    cin >> d;

    double yourSpeed = 1.0;
    double otherSpeed = 30 * 0.0254;

        double relativeSpeed = yourSpeed - otherSpeed;
        double time = d / relativeSpeed;
        cout << ceil(time) << endl;
}