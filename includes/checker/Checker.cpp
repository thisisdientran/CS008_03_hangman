//
// Created by Dave R. Smith on 9/9/24.
//

#include "Checker.h"

Checker::Checker()
{
    phrasePtr = NULL;
}

Checker::Checker(Phrase *phrase)
: phrasePtr(phrase)
{

}

void Checker::set_checker(Phrase *phrase){
    phrasePtr = phrase;
}

bool Checker::hasLetter(const Letter &letter) const
{
    for (const auto &word: phrasePtr -> getPhrase()) //phrasePtr -> getPhrase() => vector<Word>
        for(const auto &l : word.getWord()) // getWord() => vector<Letter>
            if(l.getLetter() == letter.getLetter()) // if Letter in word == checked Letter => true
                return true;
    return false;
}


