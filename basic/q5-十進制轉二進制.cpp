#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int n;
    cin >> n;
    bitset<8> bin(n);
    cout << bin << endl;
}