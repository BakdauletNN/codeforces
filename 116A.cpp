#include <iostream>
#include <algorithm>  
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
 
    int curr = 0;     
    int answer = 0; 
 
    for (int i = 0; i < n; ++i) {
        int a, b;     
        cin >> a >> b;
 
        curr -= a;         
        curr += b;         
        answer = max(answer, curr);
    }
 
    cout << answer << '\n';
    return 0;
}
