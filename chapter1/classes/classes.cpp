/* 
*   In C++ we define our own data structures by defining a class.

*   A class defines a type along with a collection of operations that are related
*   to that type.

*   A primary focus of the design of C++ is to make it possible to define class types
*   that behave as naturally  as the built-in-types  . 
*/ 

/*
*   To USE a class we need to know 3 things:

*       1. What is its name?
*       2. Where is it defined?
*       3. What operattions does it support?
*/

/*
*   We use headers to access classes defined for our own applications.

*   For good practices, header files names are derived from the name of a class defined 
*   in that header.

*   Header files that we write usually have a suffix of .h, but some programmers use
*   .H, .hpp or .hxx.

*   Standard library headers typically have no suffix at all.

*   Compilers usually do not care about the form of header file names, but IDEs usually do.
*/


#include <iostream>
#include "Sales_item.h" //* Headers that are not included in the std library are enclosed in double quotes

// * Read a book object and print the result in the console
// int main()
// {
//     Sales_item book;

//     // read ISBN, number of copies sold, and sales price
//     std::cin >> book;

//     // write ISBN, number of copies sold, total revenue, and average price
//     std::cout << book << std::endl;

//     return 0;
// }

//* Add two Sales_item objects
int main()
{
    Sales_item book1, book2;

    // read a pair of transactions
    std::cin >> book1 >> book2;

    // print their sum
    std::cout << book1 + book2 << std::endl;

    return 0;
}