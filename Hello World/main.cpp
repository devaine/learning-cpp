// Header file (file that ends in ".h") for basic input/output operations
#include <iostream>

/*
    So apparently the answer to "Why does main() have to have a integer return type"
    is because systems such as Unix & Win32 support the concept of having a small integer
    to be returned in order to indicate the process has finished successfully.
*/
int main() {
    /*
     std = Standard (Pronounced "see-out")
     cout = Character Output Stream
     So std::cout = "Standard Character Output"
     << = Output
     */
    std::cout << "Hello World!";
    
    return 0; // Indicates no issues in the program
}