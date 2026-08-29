#include <iostream>
#include <cmath>

bool is_prime(int n)
{
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main()
{
    int n;

    std::cout << "Enter a number: ";
    std::cin >> n;

    array<int> primes;
    for(int i=2;i<n;i++){
        if(is_prime(i)){
            primes.push_back(i);
        }
    }

    for()

    std::cout << "Highest prime number less than " << n << " = " << highest_prime << std::endl;

    return 0;
}