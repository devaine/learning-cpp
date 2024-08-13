// Hello World!


/* Anything beginning with "//" or "/*" is usually a the beginning of a single-line (/) or multi-line (/*) comment. */
		// Comments are typically used to describe the program for the human programmer to read 

/*
Every C++ program must have one global function named main()
		* A non-zero value from main(), indicates failure in the porgram.

#1: Allows the inclusion of in/out operations from the standard library of C++. The 'stream' part in 'iostream' means the 'stream of data' going in/out.

#2: int = integer. Meaning that whatever happens in main() absolutely must return a integer value.
		* The entire line defines the properties of main(), not its operation.
		* The curly brackets "{}" = The borders for the main body of code within a function or a condition.

#3: std = standard. Means that we're using a certain operator from the C++ standard library (cout in this case). The "::" is syntax for the operator that's going to be used. (In this context -> "cout")
		* cout = "C out". Indicates the output stream of data.
		* << = The direction of the stream of data.
		* "Hello World!\n" = The data being output a.k.a the message "Hello World" on the first line, followed by the movement of the cursor to the second line from the use of "\n"
				* \n = new line
*/

#include <iostream> // #1 

int main() { // #2 
		std::cout << "Hello World!\n"; // #3 
}
