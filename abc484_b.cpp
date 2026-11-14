#include <algorithm>
#include <ios>
#include <iostream>
#include <print>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    unsigned int k;
    std::cin >> k;
    unsigned int ai, ai_min = 9;
    bool game_finished = true;
    while (k-- > 0) {
        std::cin >> ai;
        ai_min = std::min(ai, ai_min);
        if (ai == 9) {
            game_finished = false;
        }
    }
    if (game_finished) {
        std::println("-1");
    } else {
        std::println("{}", ai_min);
    }
    return 0;
}
