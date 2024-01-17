#include <iostream>

int main()
{
    int sum = 0;

    // * Sum the numbers from 50 to 100
    for (int i = 50; i <= 100; ++i) {
        sum += i;
    }
    std::cout << "The sum of the numbers from 50 to 100 is " << sum << std::endl;

    // * Print the numbers from 10 to 0
    for (int i = 10; i >= 0; --i) {
        std::cout << i << std::endl;
    }

    return 0;
}