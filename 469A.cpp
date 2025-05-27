#include <iostream>
#include <vector>
#include <algorithm>  
using namespace std;


int main() {
    int n, p, q;
    cin >> n;
    cin >> p;
    vector<int> x_levels(p);
    for (int i = 0; i < p; i++) {
        cin >> x_levels[i];
    }

    cin >> q;
    vector<int> y_levels(q);
    for (int i = 0; i < q; i++) {
        cin >> y_levels[i];
    }


    vector<int> all_levels;
    all_levels.insert(all_levels.end(), x_levels.begin(), x_levels.end());
    all_levels.insert(all_levels.end(), y_levels.begin(), y_levels.end());

 
    bool can_pass_all = true;
    for (int level = 1; level <= n; level++) {
        if (find(all_levels.begin(), all_levels.end(), level) == all_levels.end()) {
            can_pass_all = false;
            break;
        }
    }

 
    if (can_pass_all) {
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}
