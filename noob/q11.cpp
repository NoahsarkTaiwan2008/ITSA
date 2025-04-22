#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double c;
    cin >> c;
    double f = c * (9.0 / 5.0) + 32;
    cout << fixed << setprecision(1) << f << endl;
}