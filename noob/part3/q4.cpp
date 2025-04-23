// Error

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int a;
    cin >> a;
    vector<pair<int, string>> subjects;

    for (int i = 0; i < a; i++) {
        string sub;
        int sub_score;
        cin >> sub >> sub_score;
        if (sub_score >= 60) {
            subjects.push_back(make_pair(sub_score, sub));
        }
    }

    int count = 0;
    for (const auto& i : subjects) {
        cout << i.second << endl;
        count++;
    }
    
    if (count > a / 2) {
        cout << "晉級" << endl;
    } else {
        cout << "失敗" << endl;
    }

    return 0;
}