#include <ios>
#include <iostream>
#include <print>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    unsigned int b, r;
    std::cin >> b >> r;
    std::println("{}", (30 - b) * (30 - r));
    return 0;
}
