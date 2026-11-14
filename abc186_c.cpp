#include <ios>
#include <iostream>
#include <print>

unsigned int contains_seven(unsigned int n, unsigned int base) {
    while (n > 0) {
        if (n % base == 7) {
            return true;
        }
        n /= base;
    }
    return false;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    unsigned int n;
    std::cin >> n;
    unsigned int count = 0;
    while (n > 0) {
        if (!contains_seven(n, 10) && !contains_seven(n, 8)) {
            ++count;
        }
        --n;
    }
    std::println("{}", count);
    return 0;
}
