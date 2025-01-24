#include <vector>
#include<iostream>
#include <algorithm>
#include <numeric>
using namespace std;

long maxProfit(int k, std::vector<int>& profit) {
    int n = profit.size();
    long max_profit = INT16_MIN;

    // Calculate the profit for each segment and its opposite
    for (int i = 0; i < n; ++i) {
        long current_profit = 0;
        for (int j = 0; j < k; ++j) {
            int segment_index = (i + j) % n;
            int opposite_index = (segment_index + n / 2) % n;
            current_profit += profit[segment_index] + profit[opposite_index];
        }
        max_profit = std::max(max_profit, current_profit);
    }

    return max_profit;
}

int main() {
    std::vector<int> profit = {1, 5, 1, 3, 7, 2};
    int k = 2;
    long result = maxProfit(k, profit);
    cout << "Max Profit: " << result <<endl;
    return 0;
}
