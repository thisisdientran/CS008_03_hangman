#ifndef TEST_CPP
#define TEST_CPP

#include "Test.h"

void Test::runTests(){
    test<Letter>(Letter('Y'),"letter get testing" ,[](const Letter& letter){
        return letter.getLetter() == 'Y';
    });
}
// I don't understand why we template Letter in the run test function, 
// Will it the template work for other classes as well? => we can write other test in this runTests

template <typename T>
void Test::test(const T& object, const std::string & testName, bool lambda(const T& object)){
    std::cout << "Test " << testName << std::endl;
    if(lambda(object)){
        std::cout << "Congratulations" << std::endl;
    } else {

        std::cout << "errrrrror, don't gfy" << std::endl;
    }
}



#endif