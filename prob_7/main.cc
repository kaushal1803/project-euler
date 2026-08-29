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
    int n_init;

    int prime=2;

    std::cout << "Enter a number: ";
    std::cin >> n;
    n_init = n;
    
    while(n>1){
        prime++;
        if(is_prime(prime)){
            n--;
        }
    }

    std::cout << "The " << n_init << "th prime number is " << prime << std::endl;
    return 0;
}