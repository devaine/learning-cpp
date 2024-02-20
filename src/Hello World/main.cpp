// <include> is a header file (file that ends in ".h" usually) that is used for basic input/output operations
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

    std:endl = Standard End Line, so basically it moves the cursor to the next line
    since we indicated that the line ended.
     */
    std::cout << "Hello World!" << std::endl;
    std::cout << "What is up?" << '\n'; // Escape Characters also work for cout
    std::cout << "I'm good, how about you?";

    
    return 0; // Indicates no issues in the program
}