#include <iostream>
using namespace  std;


int main(){
    int k, n, w;
    cin >>k>>n>>w;
    int res = 0;
    for (int i = 1; i <= w; i ++){
        res += k * i;
    }
    cout <<res;
    return 0;
}