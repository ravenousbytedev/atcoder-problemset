#include <ios>
#include <iostream>
#include <print>
#include <string>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    unsigned int n, m;
    std::cin >> n >> m;
    std::string si;
    bool finished = false;
    for (unsigned int i = 0; i < n; ++i) {
        std::cin >> si;
        if (finished) {
            continue;
        }
        if (si[0] == 'x' && si[1] == 'x') {
            std::println("Faucet {}", i + 1);
            finished = true;
            continue;
        }
        for (unsigned int j = 0; j < m; ++j) {
            if (si[j] == 'x') {
                std::println("Drain {}", j + 1);
                finished = true;
                break;
            }
        }
    }
    return 0;
}
