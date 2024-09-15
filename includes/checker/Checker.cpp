//
// Created by Dave R. Smith on 9/9/24.
//

#include "Checker.h"

Checker::Checker()
{

}

Checker::Checker(Phrase &phrase)
: phrasePtr(&phrase)
{

}

bool Checker::hasLetter(const Letter &letter) const
{
    for (const auto &word: phrasePtr -> getPhrase()) //phrasePtr -> getPhrase() 
        for(const auto &l : word.getWord())
            if(l.getLetter() == letter.getLetter())
                return true;

    return false;
}


