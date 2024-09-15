//
// Created by Dave R. Smith on 9/4/24.
//

#ifndef HANGMAN_WORD_H
#define HANGMAN_WORD_H

#include <vector>
#include "../letter/Letter.h"

class Word
{
private:
    std::vector<Letter> _word; // ['H','E','L']

public:
    Word();
    Word(const std::string& word);

    std::string toString() const;
    // std::string toString() const;
    const std::vector<Letter>& getWord() const;

    void setWord(const std::string& word);

    friend std::ostream& operator<<(std::ostream& out, const Word& word);
    friend bool operator==(const Word& word1, const Word& word2);
    friend bool operator!=(const Word& word1, const Word& word2);
    unsigned int size() const;
};

#endif //HANGMAN_WORD_H