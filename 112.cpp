#include <iostream>
#include <cctype> // для tolower()
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    for (int i = 0; i < s1.size(); i++) {  // сравниваем все символы
        if (tolower(s1[i]) < tolower(s2[i])) {
            cout << "-1" << endl;
            return 0;  // завершаем программу
        }
        else if (tolower(s1[i]) > tolower(s2[i])) {
            cout << "1" << endl;
            return 0;
        }
    }

    // если дошли сюда, значит, строки равны
    cout << "0" << endl;
    return 0;
}