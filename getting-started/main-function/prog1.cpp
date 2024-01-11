int main()
{
    // On most systems, the value returned from main is a status indicator. A return value of 0 indicates success. 
    // A nonzero return has a meaning that is defined by the system. Ordinarily a nonzero return indicates what 
    // kind of error occurred.
    //* to output the result of the execution of the file, we use echo $? in UNIX based OS
    // return 0; // success message 0
    return -1; // error meesage 255
}