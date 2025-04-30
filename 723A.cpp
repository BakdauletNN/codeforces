#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    int coords[] = {x1, x2, x3};
    sort(coords, coords + 3);
    cout << coords[2] - coords[0];  // max - min
    return 0;
}