#include <iostream>
#include <cmath>

long long nCr(int n, int r)
{
    if (r > n)
        return 0;

    if (r > n - r)
        r = n - r;

    long long result = 1;

    for (int i = 0; i < r; i++) {
        result *= (n - i);
        result /= (i + 1);
    }

    return result;
}

int main()
{
    int m,n;

    std::cout << "Enter grid dimensions: ";
    std::cin >> m >> n;
    
    long long total_paths = nCr(m + n, m);

    std::cout << "Number of lattice paths in a " << m << "x" << n << " grid = " << total_paths << std::endl;

    return 0;
}