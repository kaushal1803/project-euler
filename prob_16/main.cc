#include <iostream>
#include <cmath>
#include <string>

int main()
{
    int n;

    std::cout << "Enter a number: ";
    std::cin >> n;
    
    double val = std::pow(2,n);
    std::string s = std::to_string(val);
    int total_sum = 0;
    for(int i=0;i<s.length();i++){
        total_sum += s[i] - '0';
    }

    std::cout << "Sum of digits of 2^" << n << " = " << total_sum << std::endl;

    return 0;
}