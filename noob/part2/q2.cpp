#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    double area = ((a + b) * c) / 2.0;
    cout << fixed << setprecision(1) << "Trapezoid area:" << area << endl;
}