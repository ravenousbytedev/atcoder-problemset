#include <ios>
#include <iostream>
#include <print>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    unsigned int n, k;
    std::cin >> n >> k;
    unsigned int digit_count = 1;
    for (unsigned int power = k; power <= n; power *= k) {
        ++digit_count;
    }
    std::println("{}", digit_count);
    return 0;
}
