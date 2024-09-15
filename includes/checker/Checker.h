//
// Created by Dave R. Smith on 9/9/24.
//

#ifndef HANGMAN_CHECKER_H
#define HANGMAN_CHECKER_H

#include "../phrase/Phrase.h"
class Checker
{
private:
    Phrase *phrasePtr;

public:
    Checker();
    Checker(Phrase* phrase);
    
    void set_checker(Phrase *phrase);

    bool hasLetter(const Letter& letter) const;
};


#endif //HANGMAN_CHECKER_H