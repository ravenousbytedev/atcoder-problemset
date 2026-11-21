#include <ios>
#include <iostream>
#include <print>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int a, b;
    std::cin >> a >> b;
    std::println("{}", (a > 0) == (b > 0) ? "Yes" : "No");
    return 0;
}
