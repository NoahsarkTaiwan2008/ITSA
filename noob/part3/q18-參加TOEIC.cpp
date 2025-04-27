#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> stu_score;
    int student;

    cin >> student;

    for (int i = 0; i < student; i++) {
        int score = 0;
        cin >> score;
        stu_score.push_back(score);
    }

    int max_score = *max_element(stu_score.begin(), stu_score.end());
    int count_over_900 = 0;
    int count_in_600_to_700 = 0;
    double average = 0;

    for (int i = 0; i < stu_score.size(); i++) {
        average += stu_score[i];
        if (stu_score[i] > 900) {
            count_over_900++;
        } else if (stu_score[i] >= 600 && stu_score[i] <= 700) {
            count_in_600_to_700++;
        }
    }

    cout << max_score << endl;
    cout << count_over_900 << endl;
    cout << count_in_600_to_700 << endl;
    cout << fixed << setprecision(1) << average / student << endl;
}