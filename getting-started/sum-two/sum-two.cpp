#include <iostream>

int main()
{
                                        //* std library endline, its called a manipulator
                                        // it not only ends the line, but it also flushes the buffer associated
                                        //  Flushing the buffer ensures that all the output the program has generated 
                                        // so far is actually written to the output stream, rather than sitting 
                                        // in memory waiting to be written.

                                        //* Programmers often add print statements during debugging. Such
                                        //* tatements should always flush the stream. Otherwise, if the program 
                                        //* crashes, output may be left in the buffer, leading to incorrect 
                                        //* inferences about where the program crashed.
    std::cout << "Enter two numbers:" << std::endl;

    int v1 = 0, v2 = 0;

    std::cin >> v1 >> v2;

    std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;

    return 0;
}