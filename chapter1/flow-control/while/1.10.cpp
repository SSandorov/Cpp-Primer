#include <iostream>

// int main()
// {
//     int sub = 1, val = 11;

//     while(val > 0) {
//         val -= sub;

//         std::cout << val << std::endl;
//     }

//     return 0;
// }
int main()
{
    int val = 10;

    while(val >= 0) {
        std::cout << val-- << std::endl;
    }

    return 0;
}