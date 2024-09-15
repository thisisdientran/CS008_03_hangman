//
// Created by Dave R. Smith on 9/3/24.
//

#include "Letter.h"

Letter::Letter()
: Letter('_')
{

}

Letter::Letter(char letter)
{
    setLetter(letter);
}

char Letter::getLetter() const
{
    return _letter;
};

void Letter::setLetter(char letter)
{
    this->_letter = letter;
}

std::ostream& operator<<(std::ostream& out, const Letter& letter)
{
    out << letter._letter;
    return out;
}