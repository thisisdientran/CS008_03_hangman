#ifndef TEST_H
#define TEST_H

#include <iostream>
#include <ostream>

#include "../letter/Letter.h"
#include "../phrase/Phrase.h"
#include "../word/Word.h"

// using namespace because it better than using static class use can use static class in this situation
// When to use static class: create a class without objects

// Object is variable of the class not member variable of the class
    // Letter l (l is variable of the class)
    // l.name (name is member variable of the class)
namespace Test{
    template<typename T>
    void test(const T& object, const std::string & testName, bool lambda(const T& object));
    inline void runTests(); //Tell not for loops for it for C++ 17 and after
}

#include "Test.cpp" // Do this the get the template from .cpp, if not => error
#endif