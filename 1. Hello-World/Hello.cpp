#include <string>

namespace
{
    // Avoid cluttering the global namespace.

    // A couple of simple C++ functions that we want to expose to Python.
    std::string greet() { return "hello, world"; }
    int square(int number) { return number * number; }
}