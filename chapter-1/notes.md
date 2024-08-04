## Table of Contents
* [(1.1) Structure of the Book](#1-1-Structure-of-the-Book)
## 1.1 The Structure of the Book
* Part 1: 
    * *Chapter 1:* Guide to the book and covers basic C++ background.
    * *Chapters 2-5:* Give a quick introduction to the C++ Languageand it's standard library.

* Part II:
    * *Basic Facilities:* Chapters 6-15 describe C++'s built-in types and the basic uses for creating programs out of them.

* Part III:
    * *Abstraction Mechanisms:* Chapters 16-29 describes abstraction and their use for Object-Oriented and Generic Programming

* Part IV:
    * *Chapters:* 30-44 provide an overview of the standard library and dicussion of compatibitlity issues.


### 1.1.1 Chapter Overview (Chap. 1 - 15)
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




## The design, idea, and principles of C++
* C++ is based on providing direct mapping to operations and types in order to <ins>provide efficient memory use and low-level operations</ins>. As well as a flexible mechanism to provde use-defined types *with the same features* as built-in types.

* The new approach of C++ is that it's a general-purpose programming language for *developing and using abstractions*

* The principle of C++ is that:
    * *"You leave no room for a lower-level language below C++*, except for Assembly code, and if you manage to write on a lower-level language than C++, then it should be the **main** systems programming language of choice.

* C++ directly supports **four** programming styles:
    * Procedural Programming
        - "Programming focused on processing and the design of suitable data structures"
    
    * Data Abstraction
        - "Programming focused on the design of interfaces, hiding implementation details in general and representations in partiuclar"
    * Object-oritented Programming
        * "Programming focused on the design, implementation, and use of class hierarchies. -- Class hierarchies provide a run-time polymorphism and encapsulation"
    
    * Generic Programming
        * "Programming focued on the design, implementation and use of general algorithms."

* C++ Programming (as well as other languages) express their ideals of programming well by:
    1. Representing ideas directly in code
    2. Representing relationships among ideas directly in code (e.g hierachical, parametric, and ownership relationships)
    3. Representing independent ideas independently in code.
    4. Keep simple things simple (without making complex things *impossible*)
    5. Prefer statically type-checked solutions (when applicable)
    6. Keeping information local (e.g avoid global variables, minimize the use of pointers)
    7. Don't overabstract (i.e don't generalize, introduce class hierarchies, or parameterize beyond obvious needs and experience)

* Book Suggestions for C++ Programmers
    1. Use constructors to establish invariants
    2. Use constructor/destructor pairs to simplify resource management
    3. Avoid "naked" *new* and *delete*
    4. Use containers and algorithms rather than built-in arrays and ad hoc code
    5. Prefer standard-library facilities to locally developed code
    6. Use exceptions, rather than error codes, to report errors athat cannot be handled locally
    7. Use semantics to avoid copying large projects
    8. USe *unique_ptr* to reference objects of polymorphic type
    9. Use *shared_ptr* to reference shared objects without a single owner that is responsible for their destruction.
    10. Use templated to maintain static type safety (eliminate casts) and avoid unnecessary use of class hierarchies.


## Advice
* Every chapter will have an "advice" section with some recommendations as a *"rough rules of thumb"*
1. Represent ideas (concepts) directly in code, for example, as a ffunction, a class, or an enumeration
2. Aim for your code to be efficient and clean
3. Don't overabstract
4. Represent relationships among ideas directly in code (E.g parameterizatoin or a class hierarchy)
5. Focus on efficient and clean abstracctions, possibly represented as libaries
6. Represent independent ideas *separately* in code (E.g avoid mutual dependencies among classes)
7. C++ isn't just Object-Oriented nor for generic programming
8. Prefer solutions that can be statically checked
9. Make resources explicit (represent them as class obejcts)
