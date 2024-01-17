#include <iostream>

int main()
{
    int sum = 0, value = 0;

    // read until end-of-life, calculating a running total of all values read

    //* To stop the loop, enter a non integer value or by entering an end-of-life
    /*
    * An end-of-life i executed in 
    *   - Windows: Ctrl + z
    *   - Linux | Mac: Ctrl + d
    */
    while(std::cin >> value) {
        sum += value;
    }

    std::cout << "Sum is: " << sum << std::endl;

    return 0;
}