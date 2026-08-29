#include <iostream>
#include <cmath>

int main()
{
    int n;

    std::cout << "Enter a number: ";
    std::cin >> n;
    
    int k_3 = n/3;
    int k_5 = n/5;
    int k_15 = n/15;

    int sum_3 = 3 * k_3 * (k_3 + 1) / 2;
    int sum_5 = 5 * k_5 * (k_5 + 1) / 2;
    int sum_15 = 15 * k_15 * (k_15 + 1) / 2;

    int total_sum = sum_3 + sum_5 - sum_15;

    std::cout << "Sum of multiples of 3 or 5 below " << n << " = " << total_sum << std::endl;

    return 0;
}