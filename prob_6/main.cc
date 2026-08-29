#include <iostream>
#include <cmath>

int main()
{
    int n;

    std::cout << "Enter a number: ";
    std::cin >> n;
    
    int sum_of_squares = n*(n+1)*(2*n+1)/6;

    int square_of_sum = n*(n+1)/2;
    square_of_sum *= square_of_sum;

    int diff = square_of_sum - sum_of_squares;

    std::cout << "The difference between the square of the sum and sum of squares of first " << n << " natural numbers is = " << diff << std::endl;

    return 0;
}