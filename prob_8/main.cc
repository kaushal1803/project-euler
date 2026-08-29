#include <iostream>
#include <string>

// Retrieve the product of k consecutive digits starting at index `start`
long long get_digit_product(const std::string& s, int start, int k) {
    long long prod = 1;
    for (int i = 0; i < k; i++) {
        prod *= (s[start + i] - '0'); // Convert char to integer
    }
    return prod;
}

int main()
{
    std::string n;

    std::cout << "Enter a number: ";
    std::cin >> n;
    
    int digits = n.length();
    
    int k = 13;

    long max_prod = 1;

    for(int i=0;i<digits - k;i++){
        long current_prod = get_digit_product(n,i,k);
        if(current_prod > max_prod){
            max_prod = current_prod;
        }
    }

    std::cout << "Product of " << k << " consecutive digits in " << n << " = " << max_prod << std::endl;

    return 0;
}