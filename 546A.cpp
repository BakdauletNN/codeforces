#include <iostream>
using namespace  std;


int main(){
    int k, n, w;
    cin >>k>>n>>w;
    int res = 0;
    for (int i = 1; i <= w; i ++){
        res += k * i;
    }
    if (res > n){
        cout << res - n;
    }
    else{
        cout << 0;
    }
    return 0;
}