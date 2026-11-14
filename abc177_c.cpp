#include <ios>
#include <iostream>
#include <print>

constexpr unsigned int n_max = 2 * 1e5;

constexpr unsigned long long mod = 1e9 + 7;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    unsigned int n;
    std::cin >> n;
    unsigned long long ai, prefix = 0, result = 0;
    while (n-- > 0) {
        std::cin >> ai;
        ai %= mod;
        result = (result + prefix * ai) % mod;
        prefix = (prefix + ai) % mod;
    }
    std::println("{}", result);
    return 0;
}
