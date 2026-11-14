#include <ios>
#include <iostream>
#include <print>

constexpr long long mod = 1e9 + 7;

long long pow(long long a, long long b) {
    if (b == 0) {
        return 1;
    }
    a %= mod;
    long long c = pow(a, b / 2);
    c = c * c % mod;
    if (b % 2 == 1) {
        c = c * a % mod;
    }
    return c;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    long long n;
    std::cin >> n;
    std::println(
        "{}",
        ((pow(10, n) - pow(9, n) * 2 + pow(8, n)) % mod + mod) % mod
    );
    return 0;
}
