#include <bit>
#include <ios>
#include <iostream>
#include <limits>
#include <print>
#include <string>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    unsigned long long k;
    std::cin >> k;
    std::string str(
        std::numeric_limits<unsigned long long>::digits - std::countl_zero(k),
        '0'
    );
    for (unsigned int i = 0; i < str.length(); ++i) {
        if (k >> i & 1) {
            str[str.length() - i - 1] = '2';
        }
    }
    std::println("{}", str);
    return 0;
}
