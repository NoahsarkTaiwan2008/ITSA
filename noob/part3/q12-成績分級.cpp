#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    for (int i = 0; i < a; i++) {
        int score = 0;
        cin >> score;

        if (score >= 90 && score <= 100) {
            cout << "優等" << endl;
        } else if (score >= 80 && score <= 89) {
            cout << "甲等" << endl;
        } else if (score >= 70 && score <= 79) {
            cout << "乙等" << endl;
        } else if (score >= 60 && score <= 69) {
            cout << "丙等" << endl;
        } else {
            cout << "不及格" << endl;
        }
    }
}