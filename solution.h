#pragma once
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <queue>

int solve_task(int n, const int* day, const int* stress) {
    int stress_sum{};
    int sum{};
    int previous_day{};
    std::map < int, std::vector<int >> table;
    std::priority_queue<int, std::vector<int>, std::greater<int>> opt_pool;
    for (int i{}; i < n; i++) {
        table[day[i]].push_back(stress[i]);
        stress_sum += stress[i];
    }

    for (auto iter = table.begin(); iter != table.end(); iter++) {
        auto cmp = [](int a, int b) {
            if (a > b) {
                return 1;
            }
            else {
                return 0;
            }
            };
        std::sort((*iter).second.begin(), (*iter).second.end(), cmp);
    }

    for (auto& iter : table) {
        int i{};
        for (i; i < iter.first - previous_day && i < iter.second.size(); i++) {
            opt_pool.push(iter.second[i]);
        }
        for (i; i<iter.second.size() && iter.second[i]>opt_pool.top(); i++) {
            if (opt_pool.size() < iter.first) {
                opt_pool.push(iter.second[i]);
            }
            else {
                opt_pool.pop();
                opt_pool.push(iter.second[i]);
            }
        }
        previous_day = iter.first;
    }

    while (!opt_pool.empty()) {
        sum += opt_pool.top();
        opt_pool.pop();
    }

    return stress_sum - sum;
}