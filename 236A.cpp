#include <iostream>
#include <set>
#include <string>
 
int main() {
    std::string mes;
    std::cin >> mes;
 
    std::set<char> unique_chars(mes.begin(), mes.end());
 
    if (unique_chars.size() % 2 == 0) {
        std::cout << "CHAT WITH HER!" << std::endl;
    } else {
        std::cout << "IGNORE HIM!" << std::endl;
    }
 
    return 0;
}
