#include <bits/stdc++.h>
using namespace std;
 
 
void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        int res = 0;
        int i = 0;
        while (i <= n - k) {
            bool canHike = true;
            for (int j = i; j < i + k; ++j) {
                if (a[j] != 0) {
                    canHike = false;
                    break;
                }
            }
            if (canHike) {
                res++;
                i += k; 
                if (i < n) {
                    i++; 
                }
            } else {
                i++;
            }
        }
        cout << res << endl;
    }
}
 
int main() {
    solve();
    return 0;
}
