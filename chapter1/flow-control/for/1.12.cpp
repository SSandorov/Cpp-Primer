#include <iostream>

int main()
{
    int sum = 0;
    for (int i = -100; i <= 100; ++i) {
        sum += i;
    }
    std::cout << sum << std::endl;
    //* Sum the values from -100 to 100. It returns 0
    
    return 0;
}