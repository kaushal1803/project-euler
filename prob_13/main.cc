#include <iostream>
#include <vector>
#include <string>
#include <numeric>

int main()
{
    std::vector<std::string> nums(100);

    for(int i=0;i<100;i++){
        std::cin >> nums[i];
    }

    std::string sub_nums[100];
    for(int i=0;i<100;i++){
        sub_nums[i] = nums[i].substr(41,10);
    }

    long long sum = 0;
    for(int i=0;i<100;i++){
        sum += std::stoll(sub_nums[i]);
    }
    
    std::cout << "First " << 10 << " digits of sum = " << sum << std::endl;

    return 0;
}