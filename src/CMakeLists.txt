# NOTE: Every command listed here is case-insensitive. (not its parameters though)

# Required for CMake b/c of compatibility with other CMake versions
# Syntax: cmake_minimum_required(VERSION major.minor.[patch[.tweak]])
cmake_minimum_required(VERSION 3.28.1)

# Defines the Porject, it's version, and what language is used for it
# Syntax: project(project_name LANGUGAGES language VERSION major.minor.[patch[.tweak]])
# NOTE: CXX = C++ since the plus rotated 45 degrees looks like an X
project(learning_cpp LANGUAGES CXX VERSION 1.0)

# Adding Executables (executable_name path_to_executable)
# Syntax add_executable(targetName sourcePath1 [sourcePath2 ...])
add_executable(hello_world Hello\ World/main.cpp)

