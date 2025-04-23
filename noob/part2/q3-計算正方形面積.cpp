#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int a = 0;
    cin >> a;
    for (int i = 0; i < a; i++) {
        double n = 0;
        cin >> n;
        double area = 0;
        area = n * n;
        double rounded_area = round(area * 10.0) / 10.0;
        cout << fixed << setprecision(1) << rounded_area << endl;
    }
}