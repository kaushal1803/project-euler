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
    
    long long total_sum = 0;
    
    for(int i=2;i<n;i++){
        if(is_prime(i)){
            total_sum += i;
        }
    }

    std::cout << "Sum of primes less than " << n << " = " << total_sum << std::endl;

    return 0;
}