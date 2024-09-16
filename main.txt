#include <iostream>
#include "includes/hangman/Hangman.h"
#include "includes/test/Test.h"
#include <SFML/Graphics.hpp>
#include <cctype>
#include <vector>


int main()
{
    Test::runTests();

    // Variables
    Letter userInput;
    std::string phrase = "Hello World";
    std::string incorrectLetter = "abcfgijkmnpqstuvxyz";    
    std::string prompt = "How about enter a enter a letter?";
    Model game(phrase,incorrectLetter,prompt);
    char input;
    const int maxPlay = 6;
    int numberFail = 0;
    Controller controller(game);
    View view(controller);
    
    //User enter Letters
    
    std::cout << "Howdy! Let's enter a letter" << std::endl;
        Phrase phrase2(phrase);
        std::cout << phrase2.toString() << std::endl;
        std::cout << controller.getModel() -> getPrompt().toString() << std::endl;
        
        
        // std::cin >> input;
        // userInput.setLetter(input);
        // std::cout << char(std::toupper('a')) << std::endl;
        

        // // if(hasLetter(input))
        // if(input == 'a'){
        //     numberFail++;
        // }
    // } 
    // while(totalPlay < maxPlay);
    return 0;
}