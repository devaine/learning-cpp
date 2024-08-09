## Table of Contents
* [(1.1) Structure of the Book](#1-1-Structure-of-the-Book)
* [(1.1.1) Chapters Overview](#111-chapter-overview-chap-1---15)
* [The design, ideas, and principles of C++](#the-design-idea-and-principles-of-c)
* [Advice for C++](#advice)

## 1.1 The Structure of the Book
* Part I: Introduction 
    * *Chapter 1:* Guide to the book and covers basic C++ background.
    * *Chapters 2-5:* Give a quick introduction to the C++ Language and it's standard library.

* Part II: Basic Facilities
    * *Chapters 6-15* describe C++'s built-in types and the basic uses for creating programs out of them.

* Part III: Abstraction Mechanisms
    * Chapters 16-29 describes abstraction and their use for Object-Oriented and Generic Programming


### 1.1.1 Chapter Overview (1 -> 15)
* Chapter 1 provides:
    * an overview of the book
    * hints on how to use it
    * background info about C++ and its general use

* Encouraged to skim through *Chapter 1* and look what sparks interest and return after reading other parts of the book.

* <ins>Don't feel obligated to read the entirety of Chapter 1</ins>

* Chapter 2:
    * Describes C++'s model of memory, computation, and error handling.

* Chapter 3: 
    * Presenting features that support data abstraction, object-oriented programming, and generic programming

* Chapter 5: 
    * Outlines the standard-library utilities related to managing resources, concurrency, mathematical computtaion, regular expressions and more.

* Chapter 6:
    * *Types and Declarations*: Fundamental types, naming, initialization, simple decution, object lifeitmes, and type aliases

* Chapter 7:
    * *Pointers, Arrays, and References*

* Chapter 8:
    * *Structures, Unions, and Enumerations*

* Chapter 9:
    * *Statements:* Declarations as statements, selections statements (*if* and *switch*), iterations statements (*for*, *while*, and *do*), *goto* and comments.

* Chapter 10:
    * *Expressions:* Examples, survey of oprators, ocnstant expressios, and implicity type conversion.

* Chapter 11:
    * *Select Operations:* Locagical operators, the conditional expression, increment and decrement, free store (*new* and *delete*) {}-lists, lamda expressions, and explicit type conversion (*static_cast* and *const_cast*)

* Chapter 12:
    * *Functions:* Function declarations and definitions, *inline* functions, *constepr* functions, arguemnt passing, overloaded functions, pre- and post-conditions, pointers to fucntions, and macros

* Chapter 13:
    * *Exception Handling:* Styles of error handling ,exception guarantees, resource management, enforcing invariants, *throw* and *catch*, a *vector* implementation

* Chapter 14:
    * *Namespaces:* *namespace*, modularization and interface, composition using namespaces

* Chapter 15:
    * *Source Files and Programs:* Separate compilation, linkage, using header files, and program start and termination.




## The design, ideas, and principles of C++
* C++ is based on providing direct mapping to operations and types in order to <ins>provide efficient memory use and low-level operations</ins>. As well as a flexible mechanism to create user-defined types *with the same properties* as built-in types.

* The new approach of C++ is that it's a general-purpose programming language for __the development and use of abstractions__. 

* The principle of C++ is that:
    * *"You leave no room for a lower-level language below C++*, except for Assembly code, and if you manage to write on a lower-level language than C++, then that language should be the **main** systems-programming language of choice.

* C++ directly supports **four** programming styles:
    * Procedural Programming
        - "Programming focused on <ins>processing and the design of suitable data structures</ins>"
    
    * Data Abstraction
        - "Programming focused on the design of interfaces, meaning hiding implementation details *in general* and representations *in partiuclar*"

   * Object-Oritented Programming
        - "Programming focused on the <ins>design, implementation, and use of class hierarchies.</ins> Moreover, class hierarchies provide a <ins>run-time polymorphism and encapsulation</ins>"

   * Generic Programming
        - "Programming focued on the <ins>design, implementation and use of general algorithms.</ins>"


## Advice
* Every chapter will have an "advice" section with some recommendations as a *"rough rules of thumb"*

1. Represent ideas (concepts) directly in code, for example, as a ffunction, a class, or an enumeration
2. Aim for your code to be efficient and clean
3. Don't overabstract
4. Represent relationships among ideas directly in code (E.g parameterizatoin or a class hierarchy)
5. Focus on efficient and clean abstractions, possibly represented as libaries
6. Represent independent ideas *separately* in code (E.g avoid mutual dependencies among classes)
8. Prefer solutions that can be statically checked
9. Make resources explicit (represent them as class obejcts)
10. Express simple ideas simply
11. Use libaries, especially the *standard libary,* rather than trying to build everything from scratch.
12. Use a type-rich style of programming
13. Low-level code is not necessarily efficient; don't avoid classes, templates, and standard-libarry components out of fear of performance problems
14. If data has an invariant, encapsulate it

