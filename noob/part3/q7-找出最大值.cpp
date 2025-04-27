#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> numbers;
    int a;
    cin >> a;

    for (int i = 0; i < a; i++) {
        int n = 0;
        cin >> n;
        numbers.push_back(n);
    }

    sort(numbers.begin(), numbers.end(), greater<>());

    cout << numbers[0] << endl;
}