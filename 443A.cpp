#include <iostream>
#include <set>
#include <sstream>
#include <string>
using namespace std;
 
int main() {
    string line;
    getline(cin, line);
    if (line == "{}") {
        cout << 0 << endl;
        return 0;
    }
 
 
    line = line.substr(1, line.size() - 2);
 
    set<char> letters;
    stringstream ss(line);
    string token;
 
    while (getline(ss, token, ',')) {
 
        if (token[0] == ' ')
            token = token.substr(1);
        letters.insert(token[0]);
    }
 
    cout << letters.size() << endl;
    return 0;
}
