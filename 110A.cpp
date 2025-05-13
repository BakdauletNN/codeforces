#include <iostream>
#include <string>
using namespace std;

bool isLuckyNumber(int count) {
    string s = to_string(count);
    for (char c : s) {
        if (c != '4' && c != '7') {
            return false;
        }
    }
    return true;
}

int main() {
    string n;
    cin >> n;

    int luckyCount = 0;
    for (char c : n) {
        if (c == '4' || c == '7') {
            luckyCount++;
        }
    }

    if (isLuckyNumber(luckyCount)) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
