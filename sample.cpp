#include <iostream>
#include <solution.h>

int main()
{
    int n;
    std::cin >> n;
    int* day = new int[n];
    int* stress = new int[n];
    for (int i{}; i < n; i++) {
        std::cin >> day[i];
        std::cin >> stress[i];
    }
    std::cout << '\n' << solve_task(n, day, stress);
    delete[] day;
    delete[] stress;
}