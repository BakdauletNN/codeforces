#include <iostream>
using namespace std;
 
int main() {
    int n, k;
    cin >> n >> k;
    int* array = new int[n];
    
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    
    int k_score = array[k-1];
    int count = 0;
    
    for (int i = 0; i < n; i++) {
        if (array[i] >= k_score && array[i] > 0) {
            count++;
        }
    }
    
    delete[] array;
    cout << count;
    
    return 0;
}
