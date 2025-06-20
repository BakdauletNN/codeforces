#include <iostream>
#include <vector>
using namespace std;


int main() {
    int n;
    cin >> n; 
    vector<vector<int>> teams(n, vector<int>(2)); 
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cin >> teams[i][0] >> teams[i][1]; 
    }
    for (int k = 0; k < n; k++) {
        for (int j = k + 1; j < n; j++) {
            if (teams[k][0] == teams[j][1]) {
                cnt++;
            }
            if (teams[k][1] == teams[j][0]) {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
