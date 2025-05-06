#include <iostream>
using namespace std;


int main(){
    int n;
    cin >>n;
    int c = 0;
    while (n){
        if (n == 1 || n == 2 || n == 3 || n == 4 || n == 5){
            c += 1;
            cout << c;
            return 0;
        }
        n = n - 5;
        c += 1;
    }
}