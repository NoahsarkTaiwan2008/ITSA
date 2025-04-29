#include <iostream>
#include <vector>
#include <string>
#include <bitset>
using namespace std;

void numberASCII(char number[], vector<char> row[], bool addSpace) {
    for (int i = 0; i < 5; i++) {
        if (addSpace) {
            row[i].push_back(' ');
        }
        bitset<5> binary(number[i]);
        for (int j = 4; j >= 0; j--) {
            char c = (binary[j] ? '*' : ' ');
            row[i].push_back(c);
        }
    }
}

int main() {
    vector<char> output_rows[5];

    char zero[] = {31, 17, 17, 17, 31};
    char one[] = {1, 1, 1, 1, 1};
    char two[] = {31, 1, 31, 16, 31};
    char three[] = {31, 1, 31, 1, 31};
    char four[] = {17, 17, 31, 1, 1};
    char five[] = {31, 16, 31, 1, 31};
    char six[] = {31, 16, 31, 17, 31};
    char seven[] = {31, 1, 1, 1, 1};
    char eight[] = {31, 17, 31, 17, 31};
    char nine[] = {31, 17, 31, 1, 31};

    string a;
    cin >> a;

    for (int n = 0; n < a.length(); n++) {
        bool addSpace = (n > 0);
        switch (a[n]) {
            case '0':
                numberASCII(zero, output_rows, addSpace);
                break;
            case '1':
                numberASCII(one, output_rows, addSpace);
                break;
            case '2':
                numberASCII(two, output_rows, addSpace);
                break;
            case '3':
                numberASCII(three, output_rows, addSpace);
                break;
            case '4':
                numberASCII(four, output_rows, addSpace);
                break;
            case '5':
                numberASCII(five, output_rows, addSpace);
                break;
            case '6':
                numberASCII(six, output_rows, addSpace);
                break;
            case '7':
                numberASCII(seven, output_rows, addSpace);
                break;
            case '8':
                numberASCII(eight, output_rows, addSpace);
                break;
            case '9':
                numberASCII(nine, output_rows, addSpace);
                break;
            default:
                break;
        }
    }

    for (int i = 0; i < 5; i++) {   
        for (char c : output_rows[i]) {
            cout << c;
        }
        cout << endl;
    }
}