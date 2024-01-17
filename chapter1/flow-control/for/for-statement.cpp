#include <iostream>

int main()
{
    int sum = 0;

    // sum values from 1 through 10 included
    /*
    * It is important to note that both the decrement or increment operators position does not affect in a loop
    * i.e --> --val or val--
    */
    for (int val = 1; val <= 10; ++val) {
        sum += val;
    }
    std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;

    return 0;
}