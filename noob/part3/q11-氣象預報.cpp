// WA

#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    for (int i = 0; i < a; i++) {
        int t = 0;
        int aqi = 0;
        cin >> t >> aqi;

        if (t > 37 || aqi > 150) {
            cout << "避免外出" << endl;
        } else {
            cout << "可依需要待在戶外" << endl;
        }
    }
}