#include <iostream>
#include <cmath>

int main()
{
    long n;

    std::cout << "Enter a number: ";
    std::cin >> n;
    
    long k = 2;
    long k_max = 1;

    while (k <= std::sqrt(n)) {
        if (n % k == 0) {
            k_max = k;
            n = n / k;
        }
        else {
            k++;
        }
    }

    // If n > 1, the remaining n itself is prime
    if (n > 1) {
        k_max = n;
    }

    std::cout << "Highest prime factor = " << k_max << std::endl;

    return 0;
}