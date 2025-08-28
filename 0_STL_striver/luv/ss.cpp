#include <iostream>

long long findOriginalAmount(int n, long long x) {
    long long originalAmount = x + 1;
    for (int i = n - 1; i >= 1; --i) {
        originalAmount = 3 * (originalAmount + 1);
    }
    return originalAmount;
}

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        long long x;
        std::cin >> n >> x;

        std::cout << findOriginalAmount(n, x) << std::endl;
    }
    return 0;
}