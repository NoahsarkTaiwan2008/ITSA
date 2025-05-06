#include <bits/stdc++.h>
using namespace std;

int main() {
    int h1, m1, h2, m2;
    int pay = 0;
    cin >> h1 >> m1 >> h2 >> m2;
    
    int time1 = h1 * 60 + m1;
    int time2 = h2 * 60 + m2;
    
    int duration = time2 - time1;
    
    if (duration < 30) {
        pay = 0;
    } else if (duration <= 120) {
        pay = (duration / 30) * 30;
    } else if (duration <= 240) {
        pay = 120 / 30 * 30 + ((duration - 120) / 30) * 40; 
    } else {
        pay = 120 / 30 * 30 + (240 - 120) / 30 * 40 + ((duration - 240) / 30) * 60; 
    }
    
    cout << pay << endl;
}