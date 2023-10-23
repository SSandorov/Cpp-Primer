#include <iostream>

int main() 
{
    int sum = 0, val = 1;

    while (val <= 10) {
            //* += is called compound assignment operator
        sum += val; //  assign sum + val to sum
        //* ++ is called increment operator
        ++val; // add 1 to val
    }

    std::cout << "Sum 1 to 10 inclusive is " << sum << std::endl;

    return 0;
}