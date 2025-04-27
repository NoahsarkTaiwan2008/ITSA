#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    for (int i = 0; i < a; i++) {
        double bmi = 0;
        cin >> bmi;
        if (bmi < 18.5) {
            cout << "體重過輕" << endl;
        } else if (bmi >= 18.5 && bmi < 24) {
            cout << "正常" << endl;
        } else if (bmi >= 24 && bmi < 28) {
            cout << "體重過重" << endl;
        } else if (bmi >= 28) {
            cout << "肥胖" << endl;
        }
    }
}