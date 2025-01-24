#include <bits/stdc++.h>
using namespace std;

int findMaximumZeroes(vector<int> arr) {
    int n = arr.size();
    
    if (n < 5) {
        return count(arr.begin(), arr.end(), 0);
    }
    
    int max_zeroes = 0;
    
    for (int i = 0; i <= n - 5; i++) {
        vector<int> prefix(arr.begin() + i, arr.begin() + i + 5);
        int min_value = *min_element(prefix.begin(), prefix.end());
        
        for (int j = i; j < i + 5; j++) {
            arr[j] -= min_value;
        }
    }
    
    max_zeroes = count(arr.begin(), arr.end(), 0);
    
    return max_zeroes;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int result = findMaximumZeroes(arr);
    cout << result << endl;
    
    return 0;
}
