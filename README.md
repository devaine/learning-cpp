# Trying out basic C++
---
Nothing much lmao

## Goals
- [X] Hello World
- [ ] Understanding C++ Syntax 
    - [X] *include* keyword 
        - Allows you to import header files in order to use their input/output operations.


## Resources Used for Leaning C++
- [Bro Code's Tutorial for C++](https://invidious.projectsegfau.lt/watch?v=-TkoO8Z07hI)
- **NOT IMPORTANT:** But I am learning Git from the [Pro Git Book](https://git-scm.com/book/en/v2)

# What I learned:

## Non C++ (But still notable)
- [MinGW-W64](https://sourceforge.net/projects/mingw-w64/) is a software development environment that supports C++ (no need to download, it's more of a note to where I got this from) 

- Well, I soon realized that I could just install [MSYS2](https://www.msys2.org/) (environment that allows you to download + install an extensive range of tools for C++) which allowed me to install MinGW-64's C & C++ Executables for Compiling and Running C++ Code.
    - Packages Installed: 
        - base-devel
        - mingw-w64-x86_64-crt-git
        - mingw-w64-x86_64-binutils
        - mingw-w64-x86_64-gcc
        - mingw-w64-x86_64-headers-git
        - mingw-w64-x86_64-tools-git
        - mingw-w64-x86_64-cmake

- For VSCode/VSCodium Users:
    - For references to VSCode/VSCodium variables go [here](https://code.visualstudio.com/docs/editor/variables-reference) (*will save you lots of time*)

- I had to get a buildsystem (transforms source code into executables in larger scales) for my C++ files. So I'm currently studying [CMake](https://cmake.org/) in order to get the hang of it whilst also studying C++