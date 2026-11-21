#include <algorithm>
#include <ios>
#include <iostream>
#include <print>
#include <ranges>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    unsigned int n;
    std::cin >> n;
    std::vector<unsigned int> c(n), splits;
    splits.reserve(n);
    std::cin >> c[0];
    splits.push_back(0);
    for (unsigned int i = 1; i < n; ++i) {
        std::cin >> c[i];
        if (c[i] != c[i - 1]) {
            splits.push_back(i);
        }
    }
    for (unsigned int i = 0; i < n; ++i) {
        auto it = std::ranges::upper_bound(splits, i);
        if (*it != i) {
            --it;
        }
        unsigned int left = n, right = n;
        if (it != splits.begin()) {
            left = i + 1 - *it;
        }
        if (it != splits.end() - 1) {
            right = *(it + 1) - i;
        }
        std::print("{} ", std::min(left, right));
    }
    std::println();
    return 0;
}
