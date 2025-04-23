#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;
    for (int i = 0; i < a; i++) {
        int start = 0, end = 0;
        cin >> start >> end;

        if (start > end) {
            swap(start, end);
        }

        int total = 0;
        for (int j = start; j <= end; j++) {
            total += j;
        }
        cout << total << endl;
    }
}