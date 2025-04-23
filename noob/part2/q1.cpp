#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    double area = a * b / 2;
    cout << fixed << setprecision(1) << "Triangle area:" << area << endl;
}