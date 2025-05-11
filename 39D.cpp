#include <iostream>
 
int main() {
    int array[6];
    int idx = 3; 
 
    for (int i = 0; i < 6; i++) {
        std::cin >> array[i];
    }
 
    for (int i = 0; i < 3; i++) {
        if (array[i] == array[idx]) {
            std::cout << "YES";
            return 0;  
        }
        idx++;
    }
 
    std::cout << "NO";
    return 0;
}
