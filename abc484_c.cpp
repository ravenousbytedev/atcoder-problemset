#include <algorithm>
#include <ios>
#include <iostream>
#include <print>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    unsigned int n;
    std::cin >> n;
    std::vector<unsigned int> a(n), b(n);
    for (unsigned int &ai : a) {
        std::cin >> ai;
    }
    for (unsigned int &bi : b) {
        std::cin >> bi;
    }
    while (!a.empty() && a.back() == b.back()) {
        a.pop_back();
        b.pop_back();
    }
    std::ranges::reverse(a);
    std::ranges::reverse(b);
    while (!a.empty() && a.back() == b.back()) {
        a.pop_back();
        b.pop_back();
    }
    if (a.empty()) {
        std::println("Yes");
        return 0;
    } else if (a.size() == 1) {
        std::println("No");
        return 0;
    }
    std::ranges::rotate(a, a.begin() + 1);
    if (a == b) {
        std::println("Yes");
        return 0;
    }
    std::ranges::rotate(a, a.end() - 2);
    if (a == b) {
        std::println("Yes");
        return 0;
    }
    std::println("No");
    return 0;
}
